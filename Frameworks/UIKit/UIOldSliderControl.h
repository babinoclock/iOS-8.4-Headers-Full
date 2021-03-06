/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIImage, UIView;

@interface UIOldSliderControl : UIControl {

	UIImage* _sliderLeftFillCap;
	SCD_Union_UI34 _sliderLeftFill;
	SCD_Union_UI34 _sliderRightFill;
	UIImage* _minValueImage;
	UIImage* _maxValueImage;
	int _numberOfTickMarks;
	float _hitOffset;
	UIImage* _sliderRightCap;
	UIImage* _sliderRightFullCap;
	UIImage* _sliderLeftCap;
	struct {
		unsigned allowsOnlyTickMarks : 1;
		unsigned animating : 1;
		unsigned showValue : 1;
		unsigned layeredFill : 1;
		unsigned continuous : 1;
		unsigned sendActionDuringAnimation : 1;
		unsigned alternateColors : 1;
		unsigned shouldFlipValue : 1;
		unsigned needsNonOpaqueFills : 1;
		unsigned reserved : 24;
	}  _sliderFlags;
	float _value;
	float _animationEndValue;
	float _minValue;
	float _maxValue;
	UIView* _knob;
	double _lastTrackingTime;
	double _idleTrackingTime;
	CGPoint _lastTrackingPoint;
	CGPoint _idleTrackingPoint;

}
-(void)_accessibilityBumpValue:(char)arg1 ;
-(char)_axInteractionEnabled;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(char)cancelTouchTracking;
-(char)cancelMouseTracking;
-(id)_scriptingInfo;
-(void)setHighlighted:(char)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_sendDelayedActions;
-(void)animator:(id)arg1 stopAnimation:(id)arg2 ;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)_setValue:(float)arg1 andSendAction:(char)arg2 ;
-(void)setContinuous:(char)arg1 ;
-(char)isAnimatingValueChange;
-(void)setShowValue:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 layeredFill:(char)arg2 ;
-(id)createSliderKnobView;
-(id)imageForSliderPiece:(int)arg1 ;
-(void)sliderBoundsChanged;
-(void)setMaxValue:(float)arg1 ;
-(CGRect)fillBounds;
-(void)drawSliderPiece:(int)arg1 inRect:(CGRect)arg2 ;
-(CGRect)sliderBounds;
-(void)setValue:(float)arg1 animated:(char)arg2 animationCurve:(int)arg3 ;
-(void)refreshImages;
-(void)_resetFillFrames;
-(void)_sliderBounds:(CGRect)arg1 getLeftCapRect:(CGRect*)arg2 rightCapRect:(CGRect*)arg3 left:(CGRect*)arg4 right:(CGRect*)arg5 ;
-(void)drawSliderInRect:(CGRect)arg1 dirtyRect:(CGRect)arg2 ;
-(CGRect)valueTextBounds;
-(CGRect)minValueImageBounds;
-(CGRect)maxValueImageBounds;
-(float)_validatedValue:(float)arg1 ;
-(void)drawSliderInRect:(CGRect)arg1 ;
-(void)setMinValue:(float)arg1 ;
-(void)setNumberOfTickMarks:(int)arg1 ;
-(void)setAllowsTickMarkValuesOnly:(char)arg1 ;
-(void)setMinValueImage:(id)arg1 ;
-(void)setMaxValueImage:(id)arg1 ;
-(float)_validatedValueForPoint:(CGPoint)arg1 includeTickMarks:(char)arg2 ;
-(void)setSendActionDuringAnimation:(char)arg1 ;
@end

