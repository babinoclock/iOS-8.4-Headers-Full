/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:48 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBPasscodeAlertItem, NSString, SBPasscodeComplianceAlertItem, NSDate;

@interface SBPasscodeController : NSObject {

	SBPasscodeAlertItem* _passcodeAlertItem;
	int _mode;
	NSString* _previousPasscode;
	NSString* _newPasscode;
	int _unlockScreenType;
	SBPasscodeComplianceAlertItem* _complianceAlertItem;
	NSDate* _forcedComplianceDate;
	id _telephonyNotificationObserver;
	int _restoreCompletedAlertStateChangedToken;
	char _delayedComplianceAlertUntilAfterRestoreCompletedAlert;

}
+(id)sharedInstance;
-(void)_userWantsToComplyNow:(char)arg1 ;
-(void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
-(void)forceUserToChangePasscode;
-(void)_stopListeningToTelephonyNotifications;
-(void)_didEndCall;
-(char)_isRestoreCompletedAlertActive;
-(void)_activateComplianceAlert;
-(void)_startListeningToTelephonyNotifications;
-(void)_startListeningToRestoreCompletedAlertStateChangedNotifications;
-(void)checkPasscodeCompliance;
-(void)dealloc;
-(id)init;
-(void)_passwordEntered:(id)arg1 ;
-(void)_abort;
@end

