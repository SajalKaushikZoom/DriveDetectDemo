//
//  AppDelegate.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 17/09/21.
//

import UIKit
import ZMS

@main
class AppDelegate: UIResponder, UIApplicationDelegate {
    var locationManager: LocationManager? = LocationManager.shared
    
    var window:UIWindow?
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        if let _ = launchOptions?[UIApplication.LaunchOptionsKey.location] {
            handleLocation()
        }
        return true
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        "\(#function) \(Date().appDateFormat)\n".writeToFile(file: .addDebugLogs)
        createRegion()
    }
    
    
    func applicationWillTerminate(_ application: UIApplication) {
        "\(#function) \(Date().appDateFormat)\n".writeToFile(file: .addDebugLogs)
        createRegion()
    }
    
    
    func handleLocation() {
        locationManager = nil
        locationManager = LocationManager.shared
        locationManager?.start()
        "handle location called at \(Date().appDateFormat)\n".writeToFile(file: .addDebugLogs)
    }

    func createRegion() {
        locationManager?.createRegion(addressType: .other)
        let region  = locationManager?.region
        locationManager?.stop()
        locationManager?.start()
        locationManager?.startHomeMonitoring()
        let log = "region: \(String(describing: region?.center)) created at \(Date().appDateFormat)\n"
        log.writeToFile(file: .addDebugLogs)
    }

}

