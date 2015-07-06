/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, CAMAnimationDelegate;

@interface CAMTimerIndicatorView : UIView {

	char __performingStyleAnimation;
	int _style;
	UIView* __dimmingView;
	UILabel* __countdownLabel;
	int __startingTicks;
	int __remainingTicks;
	int __labelOrientation;
	CAMAnimationDelegate* __animationDelegate;
	int __deferredLabelOrientation;

}

@property (assign,nonatomic) int style;                                                                                                           //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * _dimmingView;                                                                                             //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (nonatomic,readonly) UILabel * _countdownLabel;                                                                                         //@synthesize _countdownLabel=__countdownLabel - In the implementation block
@property (nonatomic,readonly) int _startingTicks;                                                                                                //@synthesize _startingTicks=__startingTicks - In the implementation block
@property (nonatomic,readonly) int _remainingTicks;                                                                                               //@synthesize _remainingTicks=__remainingTicks - In the implementation block
@property (assign,setter=_setLabelOrientation:,nonatomic) int _labelOrientation;                                                                  //@synthesize _labelOrientation=__labelOrientation - In the implementation block
@property (nonatomic,readonly) CAMAnimationDelegate * _animationDelegate;                                                                         //@synthesize _animationDelegate=__animationDelegate - In the implementation block
@property (assign,setter=_setPerformingStyleAnimation:,getter=_isPerformingStyleAnimation,nonatomic) char _performingStyleAnimation;              //@synthesize _performingStyleAnimation=__performingStyleAnimation - In the implementation block
@property (assign,setter=_setDeferredOrientation:,nonatomic) int _deferredLabelOrientation;                                                       //@synthesize _deferredLabelOrientation=__deferredLabelOrientation - In the implementation block
-(void)decrement;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFont:(id)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setStyle:(int)arg1 animated:(char)arg2 ;
-(id)font;
-(UIView *)_dimmingView;
-(void)cam_rotateWithDeviceOrientation:(int)arg1 animated:(char)arg2 ;
-(void)stopCountdown;
-(void)resetWithNumberOfTicks:(int)arg1 ;
-(void)startCountdownWithAnimationDelegate:(id)arg1 ;
-(id)_fontForStyle:(int)arg1 ;
-(void)_updateCountdownLabelWithTicksRemaining;
-(void)_commonCAMTimerIndicatorViewInitialization;
-(void)_layoutCountdownLabelForStyle:(int)arg1 ;
-(CGRect)_landscapeSwapBoundsCoordinates:(CGRect)arg1 ;
-(char)_isPerformingStyleAnimation;
-(void)_layoutCountdownLabelForSmallStyle;
-(void)_layoutCountdownLabelForLargeStyle;
-(void)_updateFromChangeToStyle:(int)arg1 animated:(char)arg2 ;
-(void)_setPerformingStyleAnimation:(char)arg1 ;
-(void)_transitionDimmingViewFromStyle:(int)arg1 ;
-(int)_deferredLabelOrientation;
-(void)_handleOrientationChange:(int)arg1 ;
-(void)_setDeferredOrientation:(int)arg1 ;
-(void)_addDecrementAnimationForTick:(int)arg1 ;
-(void)_addDimmingAnimationForTick:(int)arg1 ;
-(id)_decrementAnimationForTick:(int)arg1 ;
-(id)_dimmingAnimationForTick:(int)arg1 ;
-(id)_finalDimmingAnimation;
-(void)_setLabelOrientation:(int)arg1 ;
-(UILabel *)_countdownLabel;
-(int)_startingTicks;
-(int)_remainingTicks;
-(int)_labelOrientation;
-(CAMAnimationDelegate *)_animationDelegate;
@end

