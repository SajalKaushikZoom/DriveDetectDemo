//
//  Extensions.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 17/09/21.
//

import UIKit

extension UIViewController {
    func showAlert(reason: Alerts) {
        let alert = reason.controller
        self.present(alert, animated: true, completion: nil)
    }
}

extension UIView {
    
    func addShadow() {
        self.layer.shadowColor = UIColor.gray.cgColor
        self.layer.shadowOffset = CGSize(width: 0, height: 5)
        self.layer.shadowOpacity = 0.5
    }
    
    func addCornerRadius() {
        self.layer.cornerRadius = self.bounds.height*0.2
    }
}

extension Notification.Name {
    static let dataPosted = Notification.Name("dataPosted")
}


extension Double {
    
    var formattedValue: String {
        let formatter = NumberFormatter()
        formatter.numberStyle = .decimal
        formatter.minimumFractionDigits = 0
        formatter.maximumFractionDigits = 2
        let value = formatter.string(from: NSNumber(value: self)) ?? ""
        return value
    }
}
