/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTrafficDevice/ATLockdownMessageLink.h>
#import <AirTrafficDevice/ATSocketDelegate.h>
#import <AirTrafficDevice/ATLegacyMessageLink.h>

@protocol ATLegacyMessageLink <NSObject>
@required
-(void)setHandlerForMessage:(id)arg1 handler:(/*^block*/id)arg2;
-(void)sendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeHandlerForMessage:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData, NSMutableDictionary, NSString;

@interface ATLegacyMessageLink : ATLockdownMessageLink <ATSocketDelegate, ATLegacyMessageLink> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableData* _incomingData;
	int _expectedBytesRemaining;
	NSMutableDictionary* _requestHandlerTable;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSocket:(id)arg1 ;
-(NSString *)description;
-(void)close;
-(void)setHandlerForMessage:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeHandlerForMessage:(id)arg1 ;
-(void)_handlePingMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handlePongMessage:(id)arg1 fromLink:(id)arg2 ;
-(char)_sendData:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(void)_sendPingMessage;
-(void)socket:(id)arg1 hasDataAvailable:(const char*)arg2 length:(long)arg3 ;
-(void)socketDidClose:(id)arg1 ;
-(void)_queue_checkMessageTimeouts;
-(char)open;
@end
