/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:48 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SBLockScreenBatteryChargingViewControllerDelegate;
@class SBLockScreenBatteryChargingView, NSTimer;

@interface SBLockScreenBatteryChargingViewController : UIViewController {

	SBLockScreenBatteryChargingView* _chargingView;
	NSTimer* _visibilityTimer;
	char _displayDetailedCharge;
	int _chargePercentage;
	id<SBLockScreenBatteryChargingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBLockScreenBatteryChargingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_batteryStatusChanged:(id)arg1 ;
-(void)_clearVisibilityTimer;
-(char)batteryVisible;
-(void)_visibilityTimerFired:(id)arg1 ;
-(id)chargingView;
-(void)showChargeLevelWithBatteryVisible:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBLockScreenBatteryChargingViewControllerDelegate>)arg1 ;
-(id<SBLockScreenBatteryChargingViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)prepareForDismissal;
@end

