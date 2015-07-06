/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCTargetSelectorTimer;

@interface SCRCGestureFactory : NSObject {

	float _stallDistance;
	float _maxDimension;
	float _thumbRegion;
	int _orientation;
	int _directions[7];
	CGPoint _axisFlipper;
	float _scaledTrackingDistance;
	char _setTrackingTimer;
	float _flickVelocityThreshold;
	double _tapVelocityThreshold;
	double _echoWaitTime;
	CGRect _tapSpeedRegion;
	double _tapVelocityThresholdForRegion;
	char _inTapSpeedRegionForDownEvent;
	CGRect _mainFrame;
	CGRect _gutterFrame;
	double _lastTime;
	double _lastDownTime;
	double _lastGutterDownTime;
	float _lastDegrees;
	float _startDegrees;
	float _startDistance;
	char _startedInGutter;
	double _requireDelayBeforeTracking;
	char _requireUp;
	char _thumbRejectionEnabled;
	float _thumbRejectionDistance;
	int _state;
	int _previousState;
	int _direction;
	float _directionalSlope;
	SCRCFingerState _finger[2];
	unsigned _absoluteFingerCount;
	unsigned short _fingerCount;
	unsigned short _lastFingerCount;
	float _distance;
	unsigned _tapCount;
	CGRect _tapFrame;
	CGRect _tapMultiFrame;
	SCD_Struct_SC10 _delegate;
	SCRCTargetSelectorTimer* _trackingTimer;
	SCD_Struct_SC11 _tap;
	SCRCTargetSelectorTimer* _tapTimer;
	SCRCTargetSelectorTimer* _gutterUpTimer;
	SCD_Struct_SC12 _split;

}

@property (assign,nonatomic) char thumbRejectionEnabled;              //@synthesize thumbRejectionEnabled=_thumbRejectionEnabled - In the implementation block
-(CGPoint)startLocation;
-(CGPoint)endLocation;
-(void)dealloc;
-(int)orientation;
-(void)reset;
-(int)direction;
-(unsigned)tapCount;
-(CGRect)mainFrame;
-(void)setOrientation:(int)arg1 ;
-(float)velocity;
-(int)gestureState;
-(CGPoint)rawLocation;
-(float)distance;
-(unsigned)fingerCount;
-(id)initWithSize:(CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3 ;
-(void)_enterTrackingMode:(id)arg1 ;
-(void)_handleTap;
-(void)_handleGutterUp;
-(CGRect)_currentTapRect;
-(void)_updateMultiTapFrame;
-(void)_processUpAndPost:(char)arg1 ;
-(void)_up;
-(void)_updateTapState;
-(char)_handleSplitTap;
-(void)handleGestureEvent:(id)arg1 ;
-(char)_handleSplitEvent:(id)arg1 ;
-(void)_drag:(id)arg1 ;
-(void)_down:(id)arg1 ;
-(void)_updateStartWithPoint:(CGPoint)arg1 time:(double)arg2 ;
-(float)vector;
-(CGRect)tapFrame;
-(id)initWithSize:(CGSize)arg1 delegate:(id)arg2 ;
-(void)setFlickSpeed:(float)arg1 ;
-(float)flickSpeed;
-(void)setTapSpeed:(float)arg1 ;
-(void)setTapSpeedTimeThreshold:(float)arg1 forRegion:(CGRect)arg2 ;
-(float)tapSpeed;
-(float)directionalSlope;
-(unsigned)absoluteFingerCount;
-(char)tapIsDown;
-(CGPoint)rawAverageLocation;
-(CGRect)multiTapFrame;
-(CGPoint)tapPoint;
-(CGPoint)tapPointWeightedToSides;
-(double)tapInterval;
-(id)gestureStateString;
-(char)thumbRejectionEnabled;
-(void)setThumbRejectionEnabled:(char)arg1 ;
@end

