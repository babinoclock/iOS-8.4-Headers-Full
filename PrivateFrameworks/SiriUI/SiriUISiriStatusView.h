/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>
#import <SiriUI/_UISiriWaveyViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SiriUI/SiriUISiriStatusViewProtocol.h>

@protocol SiriUISiriStatusViewDelegate, SiriUISiriStatusViewAnimationDelegate;
@class UIButton, UIView, UILongPressGestureRecognizer, _UISiriWaveyView, UIImageView, UIScreen, NSString;

@interface SiriUISiriStatusView : UIView <_UISiriWaveyViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol> {

	UIButton* _button;
	UIView* _micOutlineLineView;
	UILongPressGestureRecognizer* _longPressRecognizer;
	_UISiriWaveyView* _waveyView;
	UIImageView* _siriMicGlyphView;
	int _imageSet;
	double _lastStateChangeTime;
	UIScreen* _screen;
	int _mode;
	float _disabledMicOpacity;
	id<SiriUISiriStatusViewDelegate> _delegate;
	float _waveyViewWidth;
	id<SiriUISiriStatusViewAnimationDelegate> _animationDelegate;

}

@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int mode;                                                                        //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float waveyViewWidth;                                                            //@synthesize waveyViewWidth=_waveyViewWidth - In the implementation block
@property (assign,nonatomic) float disabledMicOpacity;                                                        //@synthesize disabledMicOpacity=_disabledMicOpacity - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
+(float)statusViewHeightForWidthSizeClass:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SiriUISiriStatusViewDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setAnimationDelegate:(id<SiriUISiriStatusViewAnimationDelegate>)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(float)audioLevelForWaveyView:(id)arg1 ;
-(void)_startListening;
-(id)initWithFrame:(CGRect)arg1 forImageSet:(int)arg2 ;
-(void)setDisabledMicOpacity:(float)arg1 ;
-(void)setWaveyViewWidth:(float)arg1 ;
-(id)_defaultMicImage;
-(void)_setPressedImageEnabled:(char)arg1 ;
-(void)_micButtonTapped:(id)arg1 ;
-(void)_micButtonHeld:(id)arg1 ;
-(CGRect)_waveyViewFrame;
-(float)_micGlyphYAdjustment;
-(float)waveyViewWidth;
-(void)_cancelWhileListening;
-(void)_stopThinking;
-(void)_startThinkingFromListening;
-(float)disabledMicOpacity;
-(id)_transitionToListeningAnimation;
-(void)_zoomOutMicGlyph;
-(void)_showWaveform;
-(id)_transitionToThinkingAnimation;
-(id)_lastToThinkingCGImage;
-(void)_setMicOutlineLayerContents:(CGImageRef)arg1 ;
-(id)_thinkingSpinningAnimation;
-(void)_hideWaveform;
-(id)_transitionToThinkingCompleteAnimation;
-(void)_zoomInMicGlyphForAnimationDuration:(double)arg1 ;
-(id)_transitionFromListeningToIdleAnimation;
-(id)_animationForCGImages:(id)arg1 ;
-(id<SiriUISiriStatusViewAnimationDelegate>)animationDelegate;
@end

