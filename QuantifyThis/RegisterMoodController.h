//
//  RegisterMoodController.h
//  QuantifyThis
//
//  Created by Nik Torfs on 15/10/12.
//  Copyright (c) 2012 KULeuven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HeartBeatController.h"
#import "SleepController.h"
#import <CoreLocation/CoreLocation.h>

@interface RegisterMoodController : UIViewController <HeartBeatCallback, SleepCallback, CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) CLLocation *currentLocation;

- (IBAction)registerMood:(id)sender;

@end
