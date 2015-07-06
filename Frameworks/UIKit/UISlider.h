/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/NSCoding.h>

@class UIImageView, UIView, UIColor, CAShapeLayer, NSArray, UIImage;

@interface UISlider : UIControl <NSCoding> {

	float _value;
	float _minValue;
	float _maxValue;
	float _alpha;
	CFDictionaryRef _contentLookup;
	UIImageView* _minValueImageView;
	UIImageView* _maxValueImageView;
	UIImageView* _thumbView;
	UIImageView* _minTrackView;
	UIImageView* _maxTrackView;
	UIView* _maxTrackClipView;
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned preparingToAnimate : 1;
		unsigned showValue : 1;
		unsigned trackEnabled : 1;
		unsigned creatingSnapshot : 1;
		unsigned thumbDisabled : 1;
		unsigned minTrackHidden : 1;
	}  _sliderFlags;
	float _hitOffset;
	UIColor* _minTintColor;
	UIColor* _maxTintColor;
	UIColor* _thumbTintColor;
	UIView* _thumbViewNeue;
	CAShapeLayer* _thumbViewNeueShape;
	char _useLookNeue;
	NSArray* _trackColors;
	char _trackIsArtworkBased;
	char _thumbIsArtworkBased;
	char _maxColorIsValid;
	char _animatingWithDynamics;
	UIImageView* _innerThumbView;

}

@property (assign,nonatomic) float value; 
@property (assign,nonatomic) float minimumValue; 
@property (assign,nonatomic) float maximumValue; 
@property (nonatomic,retain) UIImage * minimumValueImage; 
@property (nonatomic,retain) UIImage * maximumValueImage; 
@property (assign,getter=isContinuous,nonatomic) char continuous; 
@property (nonatomic,retain) UIColor * minimumTrackTintColor;                   //@synthesize minTintColor=_minTintColor - In the implementation block
@property (nonatomic,retain) UIColor * maximumTrackTintColor;                   //@synthesize maxTintColor=_maxTintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;                          //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (nonatomic,readonly) UIImage * currentThumbImage; 
@property (nonatomic,readonly) UIImage * currentMinimumTrackImage; 
@property (nonatomic,readonly) UIImage * currentMaximumTrackImage; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)scriptingInfoWithChildren;
-(char)cancelTouchTracking;
-(char)cancelMouseTracking;
-(void)tintColorDidChange;
-(char)_alwaysHandleScrollerMouseEvent;
-(id)_scriptingInfo;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_sendDelayedActions;
-(void)setMinimumTrackTintColor:(UIColor *)arg1 ;
-(void)setMaximumTrackTintColor:(UIColor *)arg1 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(UIImage *)minimumValueImage;
-(UIImage *)maximumValueImage;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(UIColor *)thumbTintColor;
-(id)minimumTrackImageForState:(unsigned)arg1 ;
-(void)setMinimumTrackImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)maximumTrackImageForState:(unsigned)arg1 ;
-(void)_updateMaxTrackColorForInitialization:(char)arg1 ;
-(void)setMaximumTrackImage:(id)arg1 forStates:(unsigned)arg2 ;
-(id)thumbImageForState:(unsigned)arg1 ;
-(void)setThumbImage:(id)arg1 forStates:(unsigned)arg2 ;
-(void)_buildTrackArtwork;
-(id)createThumbView;
-(void)_rebuildControlThumb:(char)arg1 track:(char)arg2 ;
-(id)_contentForState:(unsigned)arg1 ;
-(void)_setContent:(id)arg1 forState:(unsigned)arg2 ;
-(void)setMinimumTrackImage:(id)arg1 forStates:(unsigned)arg2 ;
-(id)_thumbImageForState:(unsigned)arg1 ;
-(id)_minimumTrackImageForState:(unsigned)arg1 ;
-(id)_maximumTrackImageForState:(unsigned)arg1 ;
-(void)_layoutSubviewsForBoundsChange:(char)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)valueTextRectForBounds:(CGRect)arg1 ;
-(float)minimumValue;
-(float)maximumValue;
-(UIImage *)currentThumbImage;
-(void)_initImages;
-(void)_initSubviews;
-(void)setMaximumTrackImage:(id)arg1 forState:(unsigned)arg2 ;
-(UIImage *)currentMinimumTrackImage;
-(UIImage *)currentMaximumTrackImage;
-(void)_updateAppearanceForEnabled:(char)arg1 ;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2 ;
-(void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_setValue:(float)arg1 andSendAction:(char)arg2 ;
-(void)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 andSendAction:(char)arg4 ;
-(char)isContinuous;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(id)createThumbViewNeue;
-(float)_cornerRadiusForRect:(CGRect)arg1 ;
-(void)setThumbImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(void)setContinuous:(char)arg1 ;
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(UIColor *)minimumTrackTintColor;
-(UIColor *)maximumTrackTintColor;
-(id)_minTrackView;
-(id)_maxTrackView;
-(void)_setThumbImage:(id)arg1 forStates:(unsigned)arg2 ;
-(void)_setMinimumTrackImage:(id)arg1 forStates:(unsigned)arg2 ;
-(void)_setMaximumTrackImage:(id)arg1 forStates:(unsigned)arg2 ;
-(char)isAnimatingValueChange;
-(void)setShowValue:(char)arg1 ;
-(void)_setTrackEnabled:(char)arg1 ;
-(char)_trackEnabled;
-(void)_setThumbEnabled:(char)arg1 ;
-(void)_setMinimumTrackVisible:(char)arg1 withDuration:(double)arg2 ;
-(char)_isThumbEnabled;
-(void)_setUseLookNeue:(char)arg1 ;
-(id)_minValueView;
-(id)_maxValueView;
-(void)_setThumbTintColor:(id)arg1 forStates:(unsigned)arg2 ;
-(char)isAccessibilityElementByDefault;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
@end

