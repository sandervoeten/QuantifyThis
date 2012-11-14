//
//  SleepControllerViewController.h
//  QuantifyThis
//
//  Created by Nik Torfs on 23/10/12.
//  Copyright (c) 2012 KULeuven. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SleepCallback <NSObject>
@required
- (void) registerSleepTime:(NSUInteger *) time quality:(NSUInteger *) quality;
@end

@interface SleepController : UIViewController
@property (weak, nonatomic) IBOutlet UISlider *timeSlider;
@property (weak, nonatomic) IBOutlet UISlider *qualitySlider;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (retain) id delegate;


- (IBAction)timeChanged:(UISlider *)sender;
@end
