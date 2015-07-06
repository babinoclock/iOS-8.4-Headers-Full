/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, BBDataProviderConnectionServerProxy;
@class NSString, BBDataProviderConnectionResolver, NSObject, NSMutableDictionary;

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate> {

	NSString* _serviceName;
	NSString* _bundleID;
	BBDataProviderConnectionResolver* _connectionResolver;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	id<BBDataProviderConnectionServerProxy> _serverProxy;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	char _connected;
	NSMutableDictionary* _dataProvidersBySectionID;
	NSMutableDictionary* _parentFactoriesBySectionID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)removeDataProviderWithSectionID:(id)arg1 ;
-(void)setServerProxy:(id)arg1 ;
-(void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 unversalSectionID:(id)arg4 ;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(id)addDataProvider:(id)arg1 ;
-(void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 ;
-(void)ping:(/*^block*/id)arg1 ;
-(id)bundleID;
-(id)serviceName;
@end

