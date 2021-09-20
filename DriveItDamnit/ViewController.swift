//
//  ViewController.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 17/09/21.
//

import UIKit
import ZMS
import CoreLocation

class ViewController: UIViewController {
    
    @IBOutlet weak var speedView: UIView!
    @IBOutlet weak var speedLabel: UILabel!

    let locationManager = LocationManager.shared
    let notificationManager = LocalNotificationService.shared
    
    override func viewDidLoad() {
        super.viewDidLoad()
        setupView()
        requestPermission()
       // registerAppNotification()
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        addHomeLocation()
        locationManager.start()
        locationManager.delegate = self
    }

}


extension ViewController {
    
    func requestPermission() {
        LocationManager.shared.requestAuthorization()
        notificationManager.requestAuthorization()
    }
    
    func registerAppNotification() {
        NotificationCenter.default.addObserver(self, selector: #selector(restartService), name: UIApplication.willTerminateNotification, object: nil)
        NotificationCenter.default.addObserver(self, selector: #selector(restartService), name: UIApplication.didEnterBackgroundNotification, object: nil)
    }
    
    
    @objc func restartService() {
        locationManager.stop()
        locationManager.start()
    }
    
    func addHomeLocation() {
        let location = locationManager.getLocation
        locationManager.createRegion(with: location, addressType: .home)
    }
    
}


extension ViewController: LocationManagerDelegate {
    
    func locationManager(_ manager: LocationManager, didUpdateLocations locations: [CLLocation]) {
        
        let cloc = locations.last
        let speedinKMPHr = (cloc?.speed ?? 0)*3.8
        let formattedSpped =  String(format: "%.2f", speedinKMPHr)
        speedLabel.text = formattedSpped
        let data = formatData(data: cloc)
        NotificationCenter.default.post(name: .dataPosted, object: nil)
        data.writeToFile(file: .speedLog)
    }
    
    
    func formatData(data: CLLocation?) -> String {
        var formattedData = ""
        let speedinKMPHr = (data?.speed ?? 0)*3.8
        let formattedSpped =  String(format: "%.2f", speedinKMPHr)
        formattedData.append("Speed: \(formattedSpped)")
        formattedData.append("time \(String(describing: data?.timestamp.appDateFormat))")
        formattedData.append("\n")
        return formattedData
    }
    
    
}





extension ViewController {
    
    func setupView() {
        speedView.addShadow()
        speedView.addCornerRadius()
    }
}

