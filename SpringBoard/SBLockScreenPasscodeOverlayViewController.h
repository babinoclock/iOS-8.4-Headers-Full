/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:46 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate.h>

@class SBUIPasscodeViewWithLockScreenStyle, NSString;

@interface SBLockScreenPasscodeOverlayViewController : SBLockOverlayViewController <SBUIPasscodeLockViewDelegate> {

	SBUIPasscodeViewWithLockScreenStyle* _passcodeView;
	char _attemptingUnlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newPasscodeView;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(char)arg2 ;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
@end

