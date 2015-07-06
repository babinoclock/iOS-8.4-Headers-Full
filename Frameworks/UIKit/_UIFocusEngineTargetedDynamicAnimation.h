/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDynamicAnimation.h>

@interface _UIFocusEngineTargetedDynamicAnimation : _UIDynamicAnimation {

	/*^block*/id _applier;
	double _value;
	double _targetValue;
	double _convergenceRate;
	double _minimumDifference;

}

@property (assign,nonatomic) double value;                          //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double targetValue;                    //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) double convergenceRate;                //@synthesize convergenceRate=_convergenceRate - In the implementation block
@property (assign,nonatomic) double minimumDifference;              //@synthesize minimumDifference=_minimumDifference - In the implementation block
-(void)dealloc;
-(id)initWithValue:(double)arg1 targetValue:(double)arg2 convergenceRate:(double)arg3 minimumDifference:(double)arg4 ;
-(void)runWithValueApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(double)value;
-(char)_animateForInterval:(double)arg1 ;
-(void)setValue:(double)arg1 ;
-(double)targetValue;
-(void)setTargetValue:(double)arg1 ;
-(double)convergenceRate;
-(void)setConvergenceRate:(double)arg1 ;
-(double)minimumDifference;
-(void)setMinimumDifference:(double)arg1 ;
@end
