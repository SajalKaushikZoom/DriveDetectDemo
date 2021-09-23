//
//  Extensions.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 17/09/21.
//

import UIKit


fileprivate var documentDirectory: URL {
    let url = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask)
    return url[0]
}

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


enum LogFile: String {
    case speedLog
    case addDebugLogs
    
    var filePath: URL {
        switch self {
        case .speedLog:
            return  documentDirectory.appendingPathComponent(rawValue + ".txt")
        case .addDebugLogs:
            return documentDirectory.appendingPathComponent(rawValue + ".txt")
        }
    }
}



extension String {

    func readFile(file: LogFile) -> String {
//        debugPrint("reading from file \(file.rawValue) \(file.filePath)")
        let data = try? String(contentsOf: file.filePath, encoding: .utf8)
        return data ?? ""
    }
    
    func writeToFile(file: LogFile) {
//        debugPrint("writing to file \(file.rawValue) \(file.filePath)")
        let oldEntries = readFile(file: file)
        let data = self + "\n" + oldEntries
        do {
            try data.write(to: file.filePath, atomically: true, encoding: .utf8)
        } catch {
            debugPrint("Something went wrong in writing to speedFilePath \(file.filePath)")
        }
    }
}



extension Date {
    
    var appDateFormat: String {
        let formatter = DateFormatter()
        formatter.dateFormat = "d MMM yy HH:mm:ss Z"
        formatter.locale = Locale.init(identifier: "en_IN")
        return formatter.string(from: self)
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
