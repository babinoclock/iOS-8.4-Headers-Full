/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:55 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class NSArray, SBAlert, SBAlertManager, SBUIAnimationController, NSString;

@interface SBAppsToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerObserver> {

	NSArray* _topApplications;
	SBAlert* _activatingAlert;
	SBAlertManager* _alertManager;
	SBUIAnimationController* _animation;
	/*^block*/id _alertActivationBlock;
	char _animatedAppDeactivation;
	char _suspendWorkspace;
	char _deferAlertActivationForAnimationCompletion;

}

@property (nonatomic,copy) id alertActivationBlock;                 //@synthesize alertActivationBlock=_alertActivationBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlertManager:(id)arg1 alert:(id)arg2 overTopApplications:(id)arg3 ;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_activateAlert;
-(void)_switcherToAlertAnimationFinished;
-(id)alertActivationBlock;
-(void)setAlertActivationBlock:(id)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)_didComplete;
-(void)_begin;
@end

