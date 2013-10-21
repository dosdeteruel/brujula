//
//  ViewController.h
//  Brujula
//
//  Created by Maria Jose Medrano on 19/09/13.
//  Copyright (c) 2013 Maria Jose Medrano. All rights reserved.
//

#import <UIKit/UIKit.h>


#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import <QuartzCore/QuartzCore.h>



@interface ViewController : UIViewController <CLLocationManagerDelegate>
{

  

}

@property (retain,nonatomic) IBOutlet UILabel *latitudLabel;
@property (retain,nonatomic) IBOutlet UILabel *longitudLabel;


@property (nonatomic, strong) CLLocationManager *locationManager;
@property (nonatomic, retain) IBOutlet UIImageView *compassImage;
    
- (double) calculaRumbo:(double) lat longitud:(double) lon;
- (double) calculaelRumbo:(CLLocation *)posicion;
- (IBAction)iraCoche;
- (IBAction)marcaCoche;
- (IBAction)marcaPunto;


@end
