/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class _UIAssociationTable, _UILazyMapTable, NSMapTable, CMMotionManager, NSOperationQueue, CADisplayLink, NSMutableSet, _UIMotionEffectEngineLogger, NSArray;

@interface _UIMotionEffectEngine : NSObject {

	_UIAssociationTable* _effectViewAssociationTable;
	_UILazyMapTable* _analyzerSettingsToAnalyzers;
	NSMapTable* _analyzersToEffects;
	NSMapTable* _analyzersToHistories;
	NSMapTable* _suspendedViewsToEffectSets;
	CMMotionManager* _motionManager;
	NSOperationQueue* _motionEventQueue;
	char _hasReceivedAtLeastOneMotionEventSinceStarting;
	SCD_Struct_UI48 _pendingDeviceMotionStruct;
	double _pendingDeviceMotionTimestamp;
	int _pendingDeviceMotionLock;
	CADisplayLink* _displayLink;
	char _generatingUpdates;
	NSMutableSet* _suspendReasons;
	SCD_Struct_UI47 _lastDeviceQuaternion;
	double _lastUpdateTimestamp;
	char _slowUpdatesEnabled;
	char _pendingSlowDown;
	int _sensorStatus;
	char _allAnalyzersAreCentered;
	char _hasAppliedAtLeastOneUpdateSinceStarting;
	char _isPendingReset;
	_UIMotionEffectEngineLogger* _motionLogger;
	int _thermalNotificationToken;
	int _screenDimmingNotificationToken;
	int _targetInterfaceOrientation;

}

@property (nonatomic,readonly) NSArray * suspensionReasons; 
@property (assign,setter=_setTargetInterfaceOrientation:,nonatomic) int _targetInterfaceOrientation;              //@synthesize targetInterfaceOrientation=_targetInterfaceOrientation - In the implementation block
+(char)_motionEffectsSupported;
+(char)_motionEffectsEnabled;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(void)beginSuspendingMotionEffectsForView:(id)arg1 ;
-(void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(char)_motionEffect:(id)arg1 belongsToView:(id)arg2 ;
-(void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(char)_hasMotionEffectsForView:(id)arg1 ;
-(void)endSuspendingMotionEffectsForView:(id)arg1 ;
-(void)_unregisterAllMotionEffectsForView:(id)arg1 ;
-(void)beginSuspendingForReason:(id)arg1 ;
-(void)endSuspendingForReason:(id)arg1 ;
-(void)resetMotionAnalysis;
-(id)_motionEffectsForView:(id)arg1 ;
-(char)_motionEffectsAreSuspendedForView:(id)arg1 ;
-(void)_setTargetInterfaceOrientation:(int)arg1 ;
-(int)_targetInterfaceOrientation;
-(NSArray *)suspensionReasons;
-(void)_startOrStopGeneratingUpdates;
-(void)_stopGeneratingUpdates;
-(void)_unapplyAllEffects;
-(void)_updateDisplayLinkInterval;
-(char)_isSuspended;
-(void)_toggleSlowUpdates;
-(char)_shouldSuspendApplicationForHysteresisGivenLastAppliedViewerOffset:(UIOffset)arg1 newViewerOffset:(UIOffset)arg2 wasSuspendingApplicationForHysteresis:(char)arg3 ;
-(void)_applyEffectsFromAnalyzer:(id)arg1 ;
-(char)_shouldGenerateUpdates;
-(void)_startGeneratingUpdates;
-(void)_handleLatestDeviceMotion;
-(void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2 ;
-(void)_scheduleUpdateWithDeviceMotion:(const SCD_Struct_UI49*)arg1 timestamp:(double)arg2 ;
-(void)_setMotionManagerSensorStatus:(int)arg1 ;
@end

