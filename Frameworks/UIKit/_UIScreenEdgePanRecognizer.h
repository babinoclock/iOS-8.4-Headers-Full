/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UISettingsKeyObserver.h>

@protocol _UIScreenEdgePanRecognizerDelegate;
@class UIDelayedAction, _UIScreenEdgePanRecognizerSettings, NSString;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {

	CGRect _screenBounds;
	char _useGrapeFlags;
	char _hasRecordedData;
	char _hasDoneInitialBackProjectionTest;
	float _gestureRestrictionFactor;
	CGPoint _initialTouchLocation;
	double _initialTouchTimestamp;
	int _initialInterfaceOrientation;
	unsigned _touchedRegion;
	UIDelayedAction* _recognitionTimer;
	CGPoint _lastTouchLocation;
	double _lastTouchTimestamp;
	int _type;
	char _requiresLongPress;
	char _requiresFlatThumb;
	unsigned _targetEdges;
	int _state;
	unsigned _recognizedRegion;
	id<_UIScreenEdgePanRecognizerDelegate> _delegate;
	_UIScreenEdgePanRecognizerSettings* _settings;

}

@property (assign,nonatomic) CGRect screenBounds;                                                //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) unsigned targetEdges;                                               //@synthesize targetEdges=_targetEdges - In the implementation block
@property (assign,nonatomic) char requiresFlatThumb;                                             //@synthesize requiresFlatThumb=_requiresFlatThumb - In the implementation block
@property (nonatomic,readonly) int state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned recognizedRegion;                                        //@synthesize recognizedRegion=_recognizedRegion - In the implementation block
@property (getter=isRequiringLongPress,nonatomic,readonly) char requiringLongPress; 
@property (assign) id<_UIScreenEdgePanRecognizerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerSettings * settings;                      //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) char shouldUseGrapeFlags;                                           //@synthesize useGrapeFlags=_useGrapeFlags - In the implementation block
@property (nonatomic,readonly) CGPoint _lastTouchLocation;                                       //@synthesize lastTouchLocation=_lastTouchLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_edgeSwipeNavigationGestureEnabled;
-(void)dealloc;
-(void)setDelegate:(id<_UIScreenEdgePanRecognizerDelegate>)arg1 ;
-(id<_UIScreenEdgePanRecognizerDelegate>)delegate;
-(int)state;
-(_UIScreenEdgePanRecognizerSettings *)settings;
-(void)reset;
-(id)initWithType:(int)arg1 ;
-(int)_type;
-(void)incorporateTouchSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4 ;
-(unsigned)recognizedRegion;
-(void)setScreenBounds:(CGRect)arg1 ;
-(unsigned)targetEdges;
-(void)setTargetEdges:(unsigned)arg1 ;
-(CGPoint)_lastTouchLocation;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setShouldUseGrapeFlags:(char)arg1 ;
-(void)_setState:(int)arg1 ;
-(void)_incorporateIncrementalSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4 ;
-(void)_incorporateInitialTouchAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4 ;
-(unsigned)_targetEdges;
-(CGRect)screenBounds;
-(void)_longPressTimerElapsed:(id)arg1 ;
-(void)_idleTimerElapsed:(id)arg1 ;
-(void)_createOrDestoryAnalysisWindowIfNeeded;
-(char)isRequiringLongPress;
-(void)setSettings:(_UIScreenEdgePanRecognizerSettings *)arg1 ;
-(void)setRequiresFlatThumb:(char)arg1 ;
-(char)shouldUseGrapeFlags;
-(char)requiresFlatThumb;
@end

