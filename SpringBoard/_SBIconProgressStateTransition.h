/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:46 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/_SBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _SBIconProgressStateTransition : _SBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	int _fromState;
	int _toState;
	float _fraction;

}
+(id)newTransitionFromState:(int)arg1 toState:(int)arg2 ;
+(Class)_classForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(char)isCompleteWithView:(id)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(id)_initWithFromState:(int)arg1 toState:(int)arg2 ;
-(void)_updateView:(id)arg1 ;
-(void)dealloc;
@end

