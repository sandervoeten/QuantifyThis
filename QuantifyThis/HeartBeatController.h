//
//  HeartBeatController.h
//  QuantifyThis
//
//  Created by Nik Torfs on 23/10/12.
//  Copyright (c) 2012 KULeuven. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HeartBeatCallback <NSObject>
@required
- (void) registerHeartbeat:(NSInteger *) bpm;
@end

@interface HeartBeatController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *beatsPerMinute;
@property (retain) id delegate;

@end
