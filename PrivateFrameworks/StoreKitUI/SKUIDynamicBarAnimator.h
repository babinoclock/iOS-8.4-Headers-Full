/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIDynamicBarAnimatorDelegate;
@class CADisplayLink;

@interface SKUIDynamicBarAnimator : NSObject {

	float _topBarHeightForState[2];
	float _bottomBarOffsetForState[2];
	char _dragging;
	CADisplayLink* _displayLink;
	float _targetTopBarHeight;
	float _unroundedTopBarHeight;
	float _lastUnroundedTopBarHeight;
	char _didHideBarsByMoving;
	char _didHideOrShowBarsExplicitly;
	float _lastOffset;
	char _inSteadyState;
	int _state;
	float _topBarHeight;
	float _bottomBarOffset;
	float _minimumTopBarHeight;
	float _maximumBottomBarOffset;
	id<SKUIDynamicBarAnimatorDelegate> _delegate;

}

@property (nonatomic,readonly) int state;                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int targetState; 
@property (nonatomic,readonly) float topBarHeight;                                            //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (nonatomic,readonly) float bottomBarOffset;                                         //@synthesize bottomBarOffset=_bottomBarOffset - In the implementation block
@property (assign,nonatomic) float minimumTopBarHeight;                                       //@synthesize minimumTopBarHeight=_minimumTopBarHeight - In the implementation block
@property (assign,nonatomic) float maximumBottomBarOffset;                                    //@synthesize maximumBottomBarOffset=_maximumBottomBarOffset - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIDynamicBarAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<SKUIDynamicBarAnimatorDelegate>)arg1 ;
-(id)init;
-(id<SKUIDynamicBarAnimatorDelegate>)delegate;
-(int)state;
-(int)targetState;
-(void)_updateOutputs;
-(void)_displayLinkFired:(id)arg1 ;
-(char)canTransitionToState:(int)arg1 ;
-(void)attemptTransitionToState:(int)arg1 animated:(char)arg2 ;
-(float)_constrainTopBarHeight:(float)arg1 ;
-(void)_updateDisplayLink;
-(float)_bottomBarOffsetForTopBarHeight:(float)arg1 ;
-(void)_setInSteadyState:(char)arg1 ;
-(void)_transitionToSteadyState;
-(float)_topBarHeightForBottomBarOffset:(float)arg1 ;
-(void)_moveBarsWithDelta:(float)arg1 ;
-(void)beginDraggingWithOffset:(float)arg1 ;
-(void)updateDraggingWithOffset:(float)arg1 ;
-(void)endDraggingWithTargetOffset:(float)arg1 velocity:(float)arg2 ;
-(void)setTopBarHeight:(float)arg1 forState:(int)arg2 ;
-(void)setBottomBarOffset:(float)arg1 forState:(int)arg2 ;
-(void)setMinimumTopBarHeight:(float)arg1 ;
-(void)setMaximumBottomBarOffset:(float)arg1 ;
-(float)topBarHeight;
-(float)bottomBarOffset;
-(float)minimumTopBarHeight;
-(float)maximumBottomBarOffset;
@end

