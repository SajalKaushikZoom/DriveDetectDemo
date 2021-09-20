//
//  Alerts.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 19/09/21.
//

import UIKit

enum Alerts {
    case saveError
    case customAlert(issue: String)
    
    var controller: UIAlertController {
        switch self {
        case .saveError:
            let alertController = UIAlertController(title: "Something went wrong", message: "There's some issue in saving data", preferredStyle: .alert)
            let action = UIAlertAction(title: "OK", style: .default, handler: nil)
            alertController.addAction(action)
            return alertController
        case .customAlert(let issue):
            let alertController = UIAlertController(title: "Something went wrong", message: issue, preferredStyle: .alert)
            let action = UIAlertAction(title: "OK", style: .default, handler: nil)
            alertController.addAction(action)
            return alertController
        }
    }
    
}
