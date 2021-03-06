/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>
#import <VoiceTrigger/MCProfileConnectionObserver.h>

@class NSString;

@interface _VTLockscreenPolicy : _VTStatePolicy <MCProfileConnectionObserver> {

	char _siriRestrictedOnLockScreen;
	unsigned char _lockedState;
	int _lockscreenNotifyToken;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(char)isEnabled;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_registerForLockscreenUpdates;
-(void)_unregisterForLockscreenUpdates;
@end

