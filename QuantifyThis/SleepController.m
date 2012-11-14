//
//  SleepControllerViewController.m
//  QuantifyThis
//
//  Created by Nik Torfs on 23/10/12.
//  Copyright (c) 2012 KULeuven. All rights reserved.
//

#import "SleepController.h"

@implementation SleepController

-(void) viewWillDisappear:(BOOL)animated{
    // check if backbutton is pressed
    if([self.navigationController.viewControllers indexOfObject:self]==NSNotFound){
        NSUInteger time = (int)[[self timeSlider] value];
        NSUInteger q = (int)[[self qualitySlider] value];
        [[self delegate] registerSleepTime:&time quality:&q];
    }
    [super viewWillDisappear:animated];
}

- (IBAction)timeChanged:(UISlider *)sender {
    NSInteger val = (int)[sender value];
    if(val == 1){
        [[self timeLabel] setText: [NSString stringWithFormat:@"%d hour",val]];
    }else{
        [[self timeLabel] setText: [NSString stringWithFormat:@"%d hours",val]];
    }
}
@end
