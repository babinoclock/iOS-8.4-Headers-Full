/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UILongPressGestureRecognizer.h>

@class CKJoystickGestureVelocitySample;

@interface CKJoystickGestureRecognizer : UILongPressGestureRecognizer {

	CKJoystickGestureVelocitySample* _velocitySample;
	CKJoystickGestureVelocitySample* _previousVelocitySample;
	double _lastTouchTime;
	CGPoint _lastScreenLocation;

}
+(id)joystickGestureRecognizer;
-(void)dealloc;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setNumberOfTouchesRequired:(unsigned)arg1 ;
-(void)setAllowableMovement:(float)arg1 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2 ;
@end

