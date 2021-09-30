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
    @IBOutlet weak var distanceLabel: UILabel!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        setupView()
        requestPermission()
        
        ZMSApp.shared.delegate = self
        ZMSApp.shared.start()
        addHomeLocation()
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
    }
    
    @IBAction func setHomeRegion(_ sender: UIButton) {
        addHomeLocation()
    }
    
    @IBAction func stop(_ sender: UIButton) {
        ZMSApp.shared.stop()
    }
    
    @IBAction func start(_ sender: UIButton) {
        ZMSApp.shared.start()
    }
    
}


extension ViewController {
    
    func requestPermission() {
        ZMSApp.shared.requestNeededPermissions()
    }
    
    func addHomeLocation() {
        ZMSApp.shared.addHomeRegion()
    }
    
}


extension ViewController: ZMSAppDelegate {
    func detectedSpeed(speed: Double, at: CLLocation) {
        speedLabel.text = speed.formattedValue
        distanceLabel.text = "\(ZMSApp.shared.distanceFromHome.formattedValue) meter"

    }
    
}

extension ViewController {
    
    func setupView() {
        speedView.addShadow()
        speedView.addCornerRadius()
    }
}

