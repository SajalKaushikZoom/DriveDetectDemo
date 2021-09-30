//
//  MapViewController.swift
//  DriveItDamnit
//
//  Created by Sajal Kaushik on 24/09/21.
//

import UIKit
import MapKit
import zmsKmm
import ZMS

class MapViewController: UIViewController {

    @IBOutlet weak var mapView: MKMapView!
    
    var trip: Trip?
    
    var dataSource = [Trip_point]() {
        didSet {
            self.renderView()
        }
    }
    
    var datapoints = [CLLocationCoordinate2D]()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        mapView.delegate = self
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        fetchDB()
    }
    
    func fetchDB() {
        guard let tripID = trip?.id else { return }
        ZMSApp.shared.fetchTripPoints(forTripID: tripID) { (points) in
            self.dataSource = points
        }
    }
    
    func renderView() {
        let midPoint = dataSource.count/2
        let center = CLLocationCoordinate2D(latitude: dataSource[midPoint].lat, longitude: dataSource[midPoint].lon)
        createRegion(with: center)
        addAnnotation()
        mapView.addOverlay(MKPolyline(coordinates: datapoints, count: datapoints.count))
//        mapView.showAnnotations(mapView.annotations, animated: true)
    }
    
    func createRegion(with center: CLLocationCoordinate2D) {
        let center = center
        let span = MKCoordinateSpan(latitudeDelta: 0.09, longitudeDelta: 0.09)
        let region = MKCoordinateRegion(center: center, span: span)
        mapView.setRegion(region, animated: true)
    }
    
    
    
    func addAnnotation() {
        var points = 0
        var prevLocation = CLLocation()
        for point in dataSource {
            let pin = MKPointAnnotation()
            pin.coordinate = CLLocationCoordinate2D(latitude: point.lat, longitude: point.lon)
            let pinLocation = CLLocation(latitude: point.lat, longitude: point.lon)
            pin.title = "Speed was \(String(describing: point.speed))"
            if abs(pinLocation.distance(from: prevLocation)) > 10 {
//                mapView.addAnnotation(pin)
                datapoints.append(pin.coordinate)
                points += 1
                prevLocation = pinLocation
            }
        }
        debugPrint(points)
    }
}



extension MapViewController: MKMapViewDelegate {
    func mapView(_ mapView: MKMapView, viewFor annotation: MKAnnotation) -> MKAnnotationView? {
        guard annotation is MKPointAnnotation else { return nil }

        let identifier = "Annotation"
        var annotationView = mapView.dequeueReusableAnnotationView(withIdentifier: identifier)

        if annotationView == nil {
            annotationView = MKPinAnnotationView(annotation: annotation, reuseIdentifier: identifier)
            annotationView!.canShowCallout = true
        } else {
            annotationView!.annotation = annotation
        }
        return annotationView
    }
    
    
    func mapView(_ mapView: MKMapView, rendererFor overlay: MKOverlay) -> MKOverlayRenderer {

        if let routePolyline = overlay as? MKPolyline {
            let renderer = MKPolylineRenderer(polyline: routePolyline)
            renderer.strokeColor = UIColor(red: 100/255, green: 93/255, blue: 65/255, alpha: 1)
            renderer.lineWidth = 7
            return renderer
        }

        return MKOverlayRenderer()
    }
}
