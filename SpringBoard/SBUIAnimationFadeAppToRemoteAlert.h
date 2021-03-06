/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:15:00 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBRemoteAlertAdapter, SBAlertManager, UIView, NSArray;

@interface SBUIAnimationFadeAppToRemoteAlert : SBUIMainScreenAnimationController {

	SBRemoteAlertAdapter* _alert;
	SBAlertManager* _alertManager;
	UIView* _appContextHostView;
	UIView* _alertContextHostView;
	NSArray* _accessoryHostViews;

}
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(void)_animationFinished;
-(id)initWithAlert:(id)arg1 deactivatingApp:(id)arg2 alertManager:(id)arg3 ;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
-(void)_setHidden:(char)arg1 ;
@end

