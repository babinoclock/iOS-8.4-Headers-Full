/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMAVCore/IMAVCore-Structs.h>
@class CTCallCenter, NSMutableDictionary;

@interface IMAVTelephonyManager : NSObject {

	CTCallCenter* _callCenter;
	CTServerConnectionRef _ctServerConnection;
	NSMutableDictionary* _currentCallDictionary;
	char _isDesignatedAudioServiceProvider;
	char _isDesignatedVideoServiceProvider;
	CFMachPortRef _ctServerMachPort;
	CFUUIDRef _ctAudioToken;
	CFUUIDRef _ctVideoToken;

}

@property (nonatomic,readonly) unsigned callState; 
+(id)sharedInstance;
+(id)numberToDialForNumber:(id)arg1 dialAssist:(char*)arg2 ;
-(unsigned)callState;
-(void)dealloc;
-(id)init;
-(void)_notifyMissedCallForInviteFromID:(id)arg1 isVideo:(char)arg2 ;
-(char)_isOnCallToID:(id)arg1 ;
-(char)_breakCSCallsIfNecessary;
-(void)_handleCallEvent:(id)arg1 ;
-(void)startWatchingForCTRequests;
-(void)_chatStateChanged:(id)arg1 ;
-(void)__handleCallEvent:(id)arg1 ;
-(void)_cleanupMachInfo;
-(char)_registerCTRequestService;
-(char)_setupCTServerConnection;
-(char)_unregisterCTRequestService;
-(CTCallRef)_callRefForChat:(id)arg1 ;
-(void)_dialRequested:(CFDictionaryRef)arg1 ;
-(void)_answerCall:(CTCallRef)arg1 ;
-(void)_hangUpCall:(CTCallRef)arg1 ;
-(char)_disconnectCTServerConnection;
-(char)_reconnectCTServerConnectionIfNecessary;
-(void)notifyCallStartedForChat:(id)arg1 ;
-(void)_setCurrentCallStatus:(int)arg1 forChat:(id)arg2 ;
-(void)_setCallRef:(CTCallRef)arg1 forChat:(id)arg2 ;
-(void)notifyMissedCallForChat:(id)arg1 ;
-(void)notifyCallConnectingForChat:(id)arg1 ;
-(void)notifyCallConnectedForChat:(id)arg1 ;
-(void)notifyCallEndedForChat:(id)arg1 ;
-(char)_wantsBreakBeforeMake;
-(void)_handleCTServiceRequestName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 contextInfo:(void*)arg3 ;
-(void)_disconnectCSCallWithID:(id)arg1 ;
-(void)stopWatchingForCTRequests;
@end

