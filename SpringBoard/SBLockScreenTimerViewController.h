/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SpringBoard/BBObserverDelegate.h>

@protocol SBLockScreenTimerViewControllerDelegate;
@class NSTimer, NSDate, BBObserver, BBBulletin, NSString;

@interface SBLockScreenTimerViewController : UIViewController <BBObserverDelegate> {

	char _enabled;
	NSTimer* _updateTimer;
	NSDate* _endDate;
	BBObserver* _observer;
	id<SBLockScreenTimerViewControllerDelegate> _delegate;
	BBBulletin* _timerBulletin;

}

@property (assign) id<SBLockScreenTimerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) BBBulletin * timerBulletin;                                        //@synthesize timerBulletin=_timerBulletin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimerHidden:(char)arg1 ;
-(char)_isEndDateValid;
-(void)_updateTimerFired;
-(void)_updateTimerLabelView;
-(void)setTimerBulletin:(BBBulletin *)arg1 ;
-(BBBulletin *)timerBulletin;
-(char)isTimerActive;
-(void)setContentAlpha:(float)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBLockScreenTimerViewControllerDelegate>)arg1 ;
-(id<SBLockScreenTimerViewControllerDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)_startTimer;
-(void)_stopTimer;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(id)timerView;
-(void)setEndDate:(id)arg1 ;
@end

