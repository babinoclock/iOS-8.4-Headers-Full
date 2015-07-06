/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:46 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPasscodeEntryAlertView.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate.h>
#import <SpringBoard/SBSIMLockEntryViewInterface.h>

@class NSString;

@interface SBSIMLockEntryAlertView : SBPasscodeEntryAlertView <SBUIPasscodeLockViewDelegate, SBSIMLockEntryViewInterface> {

	NSString* _languageCode;
	NSString* _code;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertDisplayWillBecomeVisible;
-(id)_passcodeView;
-(void)setupSuccess;
-(void)setupFailureState;
-(id)initWithFrame:(CGRect)arg1 languageCode:(id)arg2 ;
-(id)localizedStringWithKey:(id)arg1 ;
-(id)_pinAttemptsRemainingLabel;
-(id)_failureTitle;
-(id)_failureLabel;
-(void)setupCurrentLockAttemptState;
-(void)setupUnlockAttemptState;
-(void)_doUnlock;
-(/*^block*/id)_passcodeViewGenerator;
-(void)dealloc;
-(id)label;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(id)titleText;
-(void)_unlock;
@end

