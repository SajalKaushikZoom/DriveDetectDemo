//
//  TripPointsViewController.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 23/09/21.
//

import UIKit
import zmsKmm

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
        let repo = TripRepository()
        guard let trip = trip else { return }
        repo.getTripPoints(trip_id: trip.id) { [weak self] (tripPoints) in
            self?.dataSource = tripPoints
        }
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
        if indexPath.row == .zero { return
            
        }
        let data = dataSource[indexPath.row-1]
        let speed: Double = (data.speed) as! Double

        let alert = UIAlertController(title: data.trip_id, message: "lat: \(data.lat)\n long: \(data.lon)\n speed: \(speed.formattedValue)\n time: \(String(describing: data.timestamp))", preferredStyle: .actionSheet)
        alert.addAction(UIAlertAction(title: "OK", style: .destructive, handler: nil))
        present(alert, animated: true, completion: nil)
    }
}
