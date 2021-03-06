/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class NSArray;

@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer {

	char _suspended;
	int _activeButton;
	NSArray* _desiredButtons;
	int _physicalButtonType;

}

@property (assign,nonatomic) int activeButton;                               //@synthesize activeButton=_activeButton - In the implementation block
@property (nonatomic,copy) NSArray * desiredButtons;                         //@synthesize desiredButtons=_desiredButtons - In the implementation block
@property (assign,getter=isSuspended,nonatomic) char suspended;              //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) int physicalButtonType;                         //@synthesize physicalButtonType=_physicalButtonType - In the implementation block
-(char)isSuspended;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setEnabled:(char)arg1 ;
-(void)setSuspended:(char)arg1 ;
-(void)setDesiredButtons:(NSArray *)arg1 ;
-(void)setActiveButton:(int)arg1 ;
-(int)activeButton;
-(int)physicalButtonType;
-(void)_updateApplicationButtonStatus;
-(NSArray *)desiredButtons;
-(int)_captureButtonForPhysicalButtonType:(int)arg1 ;
-(void)setPhysicalButtonType:(int)arg1 ;
@end

