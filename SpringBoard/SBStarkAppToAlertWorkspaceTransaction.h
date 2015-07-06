/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class SBAlert, SBApplication, SBUIAnimationController, NSString;

@interface SBStarkAppToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction <SBUIAnimationControllerObserver> {

	SBAlert* _activatingAlert;
	SBApplication* _topApplication;
	SBUIAnimationController* _animation;
	char _animatedAppDeactivation;
	char _fromStarkLauncher;

}

@property (nonatomic,readonly) SBAlert * alert;                     //@synthesize activatingAlert=_activatingAlert - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 alert:(id)arg3 overTopApplication:(id)arg4 ;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(SBAlert *)alert;
-(void)_didComplete;
-(void)_begin;
@end

