/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSEventMonitorDelegate, OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSEventMonitor : NSObject {

	id<SSEventMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _eventConnection;

}

@property (assign) id<SSEventMonitorDelegate> delegate; 
-(void)dealloc;
-(void)setDelegate:(id<SSEventMonitorDelegate>)arg1 ;
-(id)init;
-(id<SSEventMonitorDelegate>)delegate;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_connectEventConnection;
@end
