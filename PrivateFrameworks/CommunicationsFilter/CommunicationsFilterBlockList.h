/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray, CommunicationsFilterBlockListCache;

@interface CommunicationsFilterBlockList : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _retries;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _recentObjectsTested;
	CommunicationsFilterBlockListCache* _cache;

}
+(id)sharedInstance;
-(char)_disconnect;
-(void)dealloc;
-(id)init;
-(id)_sendSynchronousXPCRequest:(id)arg1 ;
-(void)_sendXPCRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addItemForAllServices:(id)arg1 ;
-(void)removeItemForAllServices:(id)arg1 ;
-(char)isItemInList:(id)arg1 ;
-(char)_connect;
-(id)copyAllItems;
-(void)_disconnected;
@end

