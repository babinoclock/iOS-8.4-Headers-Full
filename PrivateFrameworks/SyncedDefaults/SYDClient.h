/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <SyncedDefaults/SyncedDefaults-Structs.h>
@class NSObject, NSString;

@interface SYDClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	NSString* _bundleIdentifier;
	NSString* _storeIdentifier;
	char _additionalSource;

}
-(void)dealloc;
-(void)shutdown;
-(void)_resetConnection;
-(id)initWithQueue:(id)arg1 bundleIdentifier:(CFStringRef)arg2 storeIdentifier:(CFStringRef)arg3 additionalSource:(char)arg4 ;
-(void)_createConnectionIfNecessary;
-(id)_newMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)_sendMessageNoReply:(id)arg1 ;
-(id)_sendMessageWithReplySync:(id)arg1 ;
-(void)_sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 bundleIdentifier:(CFStringRef)arg2 storeIdentifier:(CFStringRef)arg3 ;
-(void)sendMessageWithName:(id)arg1 ;
-(id)sendMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)sendMessageWithName:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)finalize;
@end

