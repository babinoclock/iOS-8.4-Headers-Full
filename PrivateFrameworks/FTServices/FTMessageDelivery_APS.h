/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTMessageDelivery.h>
#import <FTServices/FTMessageQueueDelegate.h>
#import <FTServices/APSConnectionDelegate.h>

@class APSConnection, NSMutableArray, NSMutableDictionary, NSString;

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate> {

	Class _APSConnectionClass;
	Class _APSOutgoingMessageClass;
	APSConnection* _connection;
	int _messageSize;
	int _largeMessageSize;
	NSMutableArray* _enabledTopics;
	NSMutableDictionary* _ftMessageMap;
	NSMutableDictionary* _startDateMap;
	NSMutableDictionary* _bodyMap;
	NSMutableDictionary* _apsMessageMap;
	NSMutableDictionary* _timerMap;
	NSMutableDictionary* _deathTimerMap;
	NSMutableDictionary* _retriesMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)connection;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(char)arg2 ;
-(char)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(int)maxMessageSize;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(id)allMessages;
-(int)maxLargeMessageSize;
-(void)_serverBagLoaded:(id)arg1 ;
-(void)_dequeueIfNeeded;
-(void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2 ;
-(void)_setEnabledTopics:(id)arg1 ;
-(void)_invalidateTimerForMessageID:(id)arg1 ;
-(void)_messageCompletelyTimedOut:(id)arg1 ;
-(void)_invalidateDeathTimerForMessageID:(id)arg1 ;
-(id)_currentMessages;
-(id)_apsOutgoingMessageForFTMessage:(id)arg1 ;
-(id)_messageForAPSOutgoingMessage:(id)arg1 ;
-(char)_fillMessageParameters:(id*)arg1 ftMessage:(id*)arg2 ;
-(int)_retryCountForMessage:(id)arg1 ;
-(void)_messageNeedsRetry:(id)arg1 ;
-(void)_setMapForMessage:(id)arg1 apsMessage:(id)arg2 messageBody:(id)arg3 timeoutTime:(double)arg4 timeoutSelector:(SEL)arg5 retries:(id)arg6 ;
-(void)_clearMapForMessageID:(id)arg1 ;
-(void)_messageACKTimedOut:(id)arg1 ;
-(void)_messageSendTimedOut:(id)arg1 ;
-(id)_apsMessageForMessage:(id)arg1 body:(id)arg2 ;
-(void)_noteMessageSent:(id)arg1 ftMessage:(id)arg2 body:(id)arg3 ;
-(void)_updateTopics;
-(void)_noteMessageFailed:(id)arg1 ftMessage:(id)arg2 allowRetry:(char)arg3 error:(id)arg4 ;
-(id)_bodyForMessage:(id)arg1 ;
-(void)_sendMessage:(id)arg1 ftMessage:(id)arg2 ;
-(id)_requiredTopics;
-(id)_apsMessageBodyForMessage:(id)arg1 ;
-(void)_powerLogEvent:(id)arg1 dictionary:(id)arg2 ;
-(void)_noteMessageSucceeded:(id)arg1 ftMessage:(id)arg2 error:(id)arg3 result:(id)arg4 resultCode:(int)arg5 ;
-(char)_isBusyWithMessage:(id)arg1 ;
-(void)_noteMessageACKd:(id)arg1 ftMessage:(id)arg2 ;
-(id)_currentAPSMessages;
-(id)_currentTimers;
-(char)sendMessage:(id)arg1 ;
-(void)cancelMessage:(id)arg1 ;
-(char)busy;
@end

