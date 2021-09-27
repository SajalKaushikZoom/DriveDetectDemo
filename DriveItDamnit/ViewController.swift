//
//  ViewController.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 17/09/21.
//

import UIKit
import ZMS
import CoreLocation
import zmsKmm


class ViewController: UIViewController {
    
    @IBOutlet weak var speedView: UIView!
    @IBOutlet weak var speedLabel: UILabel!
    @IBOutlet weak var distanceLabel: UILabel!
    
    var locationManager = LocationManager.shared
    let notificationManager = LocalNotificationService.shared
    
    
    var tripID: String? = nil {
        didSet {
            "tripID created at \(Date().appDateFormat)".writeToFile(file: .addDebugLogs)
        }
    }
    let tripRepo = DIHelper().getTripRepository()
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        "\(#function) at \(Date().appDateFormat)".writeToFile(file: .addDebugLogs)
        setupView()
        requestPermission()
        
        registerAppNotification()
        
        locationManager.delegate = self
        locationManager.start()
        addHomeLocation()
    }

    override func viewWillAppear(_ animated: Bool) {
        "\(#function) at \(Date().appDateFormat)".writeToFile(file: .addDebugLogs)
        super.viewWillAppear(animated)
    }
    
    @IBAction func setHomeRegion(_ sender: UIButton) {
        addHomeLocation()
    }
    
    deinit {
        "\(#function) at \(Date().appDateFormat)".writeToFile(file: .addDebugLogs)
    }

}


extension ViewController {
    
    func requestPermission() {
        LocationManager.shared.requestAuthorization()
        notificationManager.requestAuthorization()
    }
    
    func registerAppNotification() {
//        NotificationCenter.default.addObserver(self, selector: #selector(restartService), name: UIApplication.willTerminateNotification, object: nil)
        //NotificationCenter.default.addObserver(self, selector: #selector(restartService), name: UIApplication.didEnterBackgroundNotification, object: nil)
        NotificationCenter.default.addObserver(self, selector: #selector(restartService), name: UIApplication.didBecomeActiveNotification, object: nil)
    }
    
    
    @objc func restartService() {
        locationManager = LocationManager.shared
//        locationManager.stop()
        locationManager.start()
        let data = "ViewController.didBecomeActiveNotification at: \(Date().appDateFormat)"
        data.writeToFile(file: .addDebugLogs)
//        notificationManager.triggerNotification(type: .custom(data: "services restarted"))
    }
    
    func addHomeLocation() {
        locationManager.createRegion(addressType: .home)
        locationManager.startHomeMonitoring()
//        notificationManager.triggerNotification(type: .regionAdded(coordinates: location))
    }
    
}


extension ViewController: LocationManagerDelegate {
    
    func didExitHome() {
        tripID = tripRepo.startTrip()
    }
    
    
    func didEnterHome() {
        tripID = nil
        "didEnterHome at \(Date().appDateFormat)"
        locationManager.stop()
    }
    
    
    func locationManager(_ manager: LocationManager, didUpdateLocations locations: [CLLocation]) {
        
        let location = locations.last
        
        
        let speedInKMPHr = (location?.speed ?? 0)*3.8
        speedLabel.text = speedInKMPHr.formattedValue
        
        let data = formatData(data: location)
        updateDistanceLabel(location: location)
        
        saveToDB(location: location)
        
        data.writeToFile(file: .speedLog)
        NotificationCenter.default.post(name: .dataPosted, object: nil)
    }
}





extension ViewController {
    
    func setupView() {
        speedView.addShadow()
        speedView.addCornerRadius()
    }
    
    func formatData(data: CLLocation?) -> String {
        guard let data =  data else { return ""}
        var formattedData = ""
        let speedInKMPHr = (data.speed)*3.8
        let formattedSpeed =  speedInKMPHr.formattedValue//String(format: "%.2f", speedInKMPHr)
        formattedData.append("Speed: \(formattedSpeed) ")
        formattedData.append("time \(data.timestamp.appDateFormat)")
        formattedData.append("\n")
        return formattedData
    }
    
    
    
    func saveToDB(location: CLLocation?) {
        guard let tripID = tripID else { return }
        if let location = location {
            tripRepo.addTripPoint(trip_id: tripID, lat: location.coordinate.latitude, lon: location.coordinate.longitude, speed: location.speed, timestamp: location.timestamp.appDateFormat)
        }
    }
    
    
    func updateDistanceLabel(location: CLLocation?) {
        if let location = location, let center = locationManager.region?.center {
            let monitoredRegion = CLLocation(latitude: center.latitude, longitude: center.longitude)
            let distance = location.distance(from: monitoredRegion).formattedValue
            distanceLabel.text = "\(distance) meter"
        }
    }
    
    
}

