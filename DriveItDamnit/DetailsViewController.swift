//
//  DetailsViewController.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 19/09/21.
//

import UIKit

class DetailsViewController: UIViewController {
    
    @IBOutlet weak var segmentControl: UISegmentedControl!
    @IBOutlet weak var textView: UITextView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        NotificationCenter.default.addObserver(self, selector: #selector(updateTextView), name: .dataPosted, object: nil)
        segmentControl.selectedSegmentIndex = 1
        updateTextView()
    }
    
    @IBAction func segmentTapped(_ sender: UISegmentedControl) {
        updateTextView()
    }
    
}

extension DetailsViewController {
    
    @objc func updateTextView() {
        let index = segmentControl.selectedSegmentIndex
        if index == 0 {
            textView.text =  "".readFile(file: .speedLog)
        } else {
            textView.text =  "".readFile(file: .addDebugLogs)
        }
    }
    
}


