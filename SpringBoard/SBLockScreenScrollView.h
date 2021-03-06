/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:48 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@protocol SBUIPasscodeLockView;
@class SBLockScreenView;

@interface SBLockScreenScrollView : UIScrollView {

	id<SBUIPasscodeLockView> _passcodeView;
	SBLockScreenView* _lockScreenView;

}

@property (assign,nonatomic) id<SBUIPasscodeLockView> passcodeView;              //@synthesize passcodeView=_passcodeView - In the implementation block
@property (assign,nonatomic) SBLockScreenView * lockScreenView;                  //@synthesize lockScreenView=_lockScreenView - In the implementation block
-(SBLockScreenView *)lockScreenView;
-(void)setLockScreenView:(SBLockScreenView *)arg1 ;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)touchesShouldCancelInContentView:(id)arg1 ;
-(void)setPasscodeView:(id<SBUIPasscodeLockView>)arg1 ;
-(id<SBUIPasscodeLockView>)passcodeView;
@end

