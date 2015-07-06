/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:43 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBReachabilityTriggerDelegate.h>

@class NSMutableSet, NSTimer, SBReachabilityTrigger, NSString;

@interface SBReachabilityManager : NSObject <SBReachabilityTriggerDelegate> {

	NSMutableSet* _observers;
	char _keepAliveForEndedInteraction;
	char _reachabilityModeActive;
	char _reachabilityModeEnabled;
	NSTimer* _keepAliveTimer;
	NSMutableSet* _temporaryDisabledReasons;
	SBReachabilityTrigger* _trigger;

}

@property (nonatomic,readonly) char reachabilityModeActive;              //@synthesize reachabilityModeActive=_reachabilityModeActive - In the implementation block
@property (assign,nonatomic) char reachabilityEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)reachabilitySupported;
+(id)sharedInstance;
-(void)_handleReachabilityActivated;
-(void)_handleReachabilityDeactivated;
-(void)_handleSignificantTimeChanged;
-(void)_clearKeepAliveTimer;
-(void)_updateReachabilityModeActive:(char)arg1 withRequestingObserver:(id)arg2 ;
-(char)reachabilityModeActive;
-(void)_setKeepAliveTimerForDuration:(double)arg1 ;
-(void)cancelPendingReachabilityRequests;
-(void)deactivateReachabilityModeForObserver:(id)arg1 ;
-(void)_notifyObserversReachabilityModeActive:(char)arg1 excludingObserver:(id)arg2 ;
-(void)_toggleReachabilityModeWithRequestingObserver:(id)arg1 ;
-(void)_keepAliveTimerFired:(id)arg1 ;
-(void)triggerDidTriggerReachability:(id)arg1 ;
-(void)disableExpirationTimerForInteraction;
-(void)enableExpirationTimerForEndedInteraction;
-(char)reachabilityEnabled;
-(void)setReachabilityEnabled:(char)arg1 ;
-(void)setReachabilityTemporarilyDisabled:(char)arg1 forReason:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

