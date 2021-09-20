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
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        if let _ = launchOptions?[UIApplication.LaunchOptionsKey.location] {
            handleLocation()
        }
        return true
    }

    // MARK: UISceneSession Lifecycle

    func application(_ application: UIApplication, configurationForConnecting connectingSceneSession: UISceneSession, options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        // Called when a new scene session is being created.
        // Use this method to select a configuration to create the new scene with.
        return UISceneConfiguration(name: "Default Configuration", sessionRole: connectingSceneSession.role)
    }

    func application(_ application: UIApplication, didDiscardSceneSessions sceneSessions: Set<UISceneSession>) {
        // Called when the user discards a scene session.
        // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
        // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
    }

    func applicationWillResignActive(_ application: UIApplication) {
        "\(#function) \(Date().appDateFormat)\n".writeToFile(file: .addDebugLogs)
        createRegion()
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        "\(#function) \(Date().appDateFormat)\n".writeToFile(file: .addDebugLogs)
        createRegion()
    }
    
    
    func applicationWillTerminate(_ application: UIApplication) {
        "\(#function) \(Date().appDateFormat)\n".writeToFile(file: .addDebugLogs)
    }
    
    
    func handleLocation() {
        "handle location called at \(Date().appDateFormat)\n".writeToFile(file: .addDebugLogs)
        locationManager = nil
        locationManager = LocationManager.shared
        locationManager?.start()
    }

    func createRegion() {
        locationManager?.createRegion(addressType: .home)
        let region  = locationManager?.region
        let log = "region: \(String(describing: region?.center)) created at \(Date())\n"
        log.writeToFile(file: .addDebugLogs)
        locationManager?.stop()
        locationManager?.start()
    }

}

