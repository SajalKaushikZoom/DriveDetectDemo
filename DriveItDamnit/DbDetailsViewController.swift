//
//  DbDetailsViewController.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 22/09/21.
//

import UIKit
import zmsKmm

class DbDetailsViewController: UIViewController {
    
    @IBOutlet weak var textView: UITextView!
    @IBOutlet weak var tableView: UITableView!
    
    var dataSource = [Trip]() {
        didSet {
            DispatchQueue.main.async {
                self.tableView.reloadData()
            }
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        fetchDBData()
        
    }
    
    func fetchDBData() {
        let repo = DIHelper().getTripRepository()
        repo.getTrips { [weak self] trips in
            self?.dataSource = trips.reversed()
        }
    }
    
    deinit {
        print(#file + #function)
    }
    
    
}



extension DbDetailsViewController: UITableViewDataSource, UITableViewDelegate {
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        dataSource.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
     let cell = tableView.dequeueReusableCell(withIdentifier: "tripCell", for: indexPath)
        let data = dataSource[indexPath.row]
        cell.textLabel?.numberOfLines = 0
        cell.textLabel?.text = data.debugDescription
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: false)
        if let vc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "TripPointsViewController" ) as? TripPointsViewController {
            vc.trip = dataSource[indexPath.row]
            navigationController?.pushViewController(vc, animated: true)
        }
    }
    
    
}
