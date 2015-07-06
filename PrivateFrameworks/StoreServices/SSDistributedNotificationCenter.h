/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString, SSXPCServer;

@interface SSDistributedNotificationCenter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _observers;
	NSString* _portName;
	SSXPCServer* _server;

}

@property (readonly) NSString * namedPort; 
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)initWithNamedPort:(id)arg1 ;
-(void)_distributedNotificationMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendRegistrationMessage:(long long)arg1 name:(id)arg2 ;
-(id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSString *)namedPort;
@end
