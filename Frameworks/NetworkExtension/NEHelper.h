/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface NEHelper : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _initMessage;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (readonly) NSObject*<OS_xpc_object> initMessage;              //@synthesize initMessage=_initMessage - In the implementation block
-(id)initWithDelegateClassName:(id)arg1 queue:(id)arg2 ;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_xpc_object>)initMessage;
-(void)dealloc;
-(id)connection;
-(NSObject*<OS_dispatch_queue>)queue;
@end

