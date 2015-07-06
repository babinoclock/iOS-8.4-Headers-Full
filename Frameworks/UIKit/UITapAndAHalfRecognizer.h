/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UITouch, UIDelayedAction;

@interface UITapAndAHalfRecognizer : UIGestureRecognizer {

	CGPoint _startPoint;
	float _allowableMovement;
	int _numberOfFullTaps;
	double _minimumFinalPressDuration;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTaps;
	UITouch* _touch;
	UIDelayedAction* _tapTimer;

}

@property (assign,nonatomic) int numberOfFullTaps;                          //@synthesize numberOfFullTaps=_numberOfFullTaps - In the implementation block
@property (assign,nonatomic) float allowableMovement;                       //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (assign,nonatomic) double minimumFinalPressDuration;              //@synthesize minimumFinalPressDuration=_minimumFinalPressDuration - In the implementation block
@property (nonatomic,retain) UITouch * touch;                               //@synthesize touch=_touch - In the implementation block
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UITouch *)touch;
-(void)setAllowableMovement:(float)arg1 ;
-(void)setTouch:(UITouch *)arg1 ;
-(void)_resetGestureRecognizer;
-(float)allowableMovement;
-(void)clearTapTimer;
-(void)tooSlow:(id)arg1 ;
-(void)startTapTimer:(double)arg1 ;
-(int)numberOfFullTaps;
-(void)recognized:(id)arg1 ;
-(double)minimumFinalPressDuration;
-(void)startRecognitionTimer:(double)arg1 ;
-(void)_verifyMovementInAllowableRange;
-(void)setNumberOfFullTaps:(int)arg1 ;
-(void)setMinimumFinalPressDuration:(double)arg1 ;
@end

