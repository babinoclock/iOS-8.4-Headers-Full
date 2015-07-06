/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BKSApplicationDataStoreRepositoryClient : BSBaseXPCClient {

	NSMutableDictionary* _prefetchedKeyCounts;
	NSMutableDictionary* _prefetchedKeyValues;
	NSMutableDictionary* _pendingChangesToPrefetchedKeys;
	NSObject*<OS_dispatch_queue> _prefetchedDataQueue;

}
-(id)initWithEndpoint:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)availableDataStores:(/*^block*/id)arg1 ;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)addPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(char)_prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3 ;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3 checkPrefetch:(char)arg4 useBSXPCCoding:(char)arg5 ;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 useBSXPCCoding:(char)arg3 withResult:(/*^block*/id)arg4 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 useBSXPCCoding:(char)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_sendPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fireCompletion:(/*^block*/id)arg1 arrayResults:(id)arg2 error:(id)arg3 ;
-(void)fireCompletion:(/*^block*/id)arg1 result:(id)arg2 error:(id)arg3 ;
-(void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3 ;
-(void)_setChangeInFlight:(char)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3 ;
-(void)_handleValueChanged:(id)arg1 ;
-(void)_handleStoreInvalidated:(id)arg1 ;
-(char)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2 ;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_allPrefetchedChangesInFlightForApplication:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_connectionWasCreated;
-(void)fireCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)_sendMessageType:(int)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(char)arg4 ;
-(id)clientCallbackQueue;
@end

