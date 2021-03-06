/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class UIView, SBAlert, SBApplication, SBDosidoAnimator;

@interface SBUIStarkDosidoAnimation : SBUIStarkScreenAnimationController {

	UIView* _fromView;
	UIView* _toView;
	UIView* _viewToHide;
	SBAlert* _alertImpersonator;
	SBApplication* _impersonatedApplication;
	SBDosidoAnimator* _dosidoAnimator;
	char _animationFinished;
	char _fromAssistant;

}
-(void)_prepareAnimation;
-(id)initFromApp:(id)arg1 toAlertImpersonator:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(void)_maybeReportAnimationFinished;
-(char)_waitsForApplicationActivationIfNecessary;
-(void)_cleanupHosting;
-(double)_animationDelay;
-(void)_commonInitFromView:(id)arg1 toView:(id)arg2 alert:(id)arg3 toDisplay:(id)arg4 ;
-(void)noteDependencyDidInvalidate;
-(id)initFromAlertImpersonator:(id)arg1 toApp:(id)arg2 starkScreenController:(id)arg3 ;
-(id)initFromApp:(id)arg1 toApp:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_startAnimation;
-(void)dealloc;
@end

