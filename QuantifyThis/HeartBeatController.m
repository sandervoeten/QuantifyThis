//
//  HeartBeatController.m
//  QuantifyThis
//
//  Created by Nik Torfs on 23/10/12.
//  Copyright (c) 2012 KULeuven. All rights reserved.
//

#import "HeartBeatController.h"

@implementation HeartBeatController

@synthesize beatsPerMinute = _beatsPerMinute;

-(void) viewWillDisappear:(BOOL)animated{
    // check if backbutton is pressed
    if([self.navigationController.viewControllers indexOfObject:self]==NSNotFound){
        NSInteger bpm = [[_beatsPerMinute text] integerValue];
        [[self delegate] registerHeartbeat:&bpm];
    }
    [super viewWillDisappear:animated];
}

@end

