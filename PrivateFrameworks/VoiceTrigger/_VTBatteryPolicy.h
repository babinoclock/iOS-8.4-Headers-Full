/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTBatteryPolicy : _VTStatePolicy {

	char _allowOnBattery;
	char _allowOnCharger;
	unsigned char _batteryState;
	void* _powerAssertion;
	char _locked;
	int _notificationToken;
	int _powerSourceNotificationToken;

}
-(void)dealloc;
-(void)reload;
-(char)isEnabled;
-(void)dependencyUpdated:(id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_registerForSettingsChange;
-(void)_unregisterForBatteryStatusChanges;
-(void)_unregisterForSettingsChange;
-(void)_makePowerAssertion;
-(void)_registerForBatteryStatusChanges;
@end

