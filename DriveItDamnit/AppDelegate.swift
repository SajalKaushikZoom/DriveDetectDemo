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
    
    var window:UIWindow?
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        ZMSApp.shared.handleAppLaunch(with: launchOptions)
        return true
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        ZMSApp.shared.handleAppBackground()
    }
    
    
    func applicationWillTerminate(_ application: UIApplication) {
        ZMSApp.shared.handleAppTerminate()
    }
}

