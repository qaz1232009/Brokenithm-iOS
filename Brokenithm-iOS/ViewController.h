//
//  ViewController.h
//  Brokenithm-iOS
//
//  Created by ester on 2020/2/28.
//  Copyright © 2020 esterTion. All rights reserved.
//

#pragma once

@class SocketDelegate;
@class MainView;

#import <UIKit/UIKit.h>
#import <CocoaAsyncSocket/GCDAsyncSocket.h>
#import "SocketDelegate.h"
#import "MainApp.h"

@interface ViewController : UIViewController {
    float screenWidth;
    float screenHeight;
    SocketDelegate *server;
}
@property UIView *airIOView;
@property UIView *sliderIOView;
@property CAGradientLayer *ledBackground;

-(void)updateLed:(NSData*)rgbData;
-(void)updateTouches:(UIEvent *)event;

@end

struct ioBuf {
    uint8_t len;
    char head[3];
    uint8_t air[6];
    uint8_t slider[32];
};
