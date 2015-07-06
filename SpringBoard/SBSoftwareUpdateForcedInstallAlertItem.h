/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:52 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class NSTimer;

@interface SBSoftwareUpdateForcedInstallAlertItem : SBBaseSoftwareUpdateAlertItem {

	NSTimer* _timer;
	unsigned _timeLeftUntilInstall;
	char _delayOnDismissForNonUserAction;
	char _delayAfterNextUnlock;
	char _countdown;

}

@property (assign,nonatomic) char countdown;                                   //@synthesize countdown=_countdown - In the implementation block
@property (assign,nonatomic) char delayOnDismissForNonUserAction;              //@synthesize delayOnDismissForNonUserAction=_delayOnDismissForNonUserAction - In the implementation block
@property (assign,nonatomic) char delayAfterNextUnlock;                        //@synthesize delayAfterNextUnlock=_delayAfterNextUnlock - In the implementation block
-(void)setDelayOnDismissForNonUserAction:(char)arg1 ;
-(void)_installUpdate;
-(void)updateBodyText;
-(void)setDelayAfterNextUnlock:(char)arg1 ;
-(char)delayOnDismissForNonUserAction;
-(char)delayAfterNextUnlock;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(id)lockLabel;
-(char)shouldShowInLockScreen;
-(void)_timerFired;
-(id)initWithDescriptor:(id)arg1 ;
-(char)allowLockScreenDismissal;
-(char)undimsScreen;
-(void)willDeactivateForReason:(int)arg1 ;
-(char)countdown;
-(void)setCountdown:(char)arg1 ;
-(id)shortLockLabel;
@end

