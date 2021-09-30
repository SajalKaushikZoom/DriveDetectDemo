//
//  TripPointsViewController.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 23/09/21.
//

import UIKit
import zmsKmm
import ZMS

class TripPointsViewController: UIViewController {

    @IBOutlet weak var tableview: UITableView!
    
    var trip: Trip? = nil
    
    override func viewDidLoad() {
        super.viewDidLoad()
        fetchDBData()
    }
    
    var dataSource = [Trip_point]() {
        didSet {
            tableview.reloadData()
        }
    }
    
    func fetchDBData() {
        guard let tripID = trip?.id else { return }
        ZMSApp.shared.fetchTripPoints(forTripID: tripID) { (points) in
            self.dataSource = points.reversed()
        }
    }
    
    
    deinit {
        print(#file + #function)
    }
    
}



extension TripPointsViewController: UITableViewDataSource, UITableViewDelegate {
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        dataSource.count + 1
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        var data = String()
        let cell = tableView.dequeueReusableCell(withIdentifier: "pointsCell", for: indexPath)
        if indexPath.row == .zero {
            data = "Entries: \(dataSource.count)"
        } else {
            data = dataSource[indexPath.row-1].debugDescription
        }
        
        cell.textLabel?.numberOfLines = 0
        cell.textLabel?.text = data
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: false)
        if indexPath.row == .zero { return }
        if let vc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "MapViewController" ) as? MapViewController {
            vc.trip = trip
            navigationController?.pushViewController(vc, animated: true)
        }
    }
}
