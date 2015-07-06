/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSDatabaseCache, NSMutableSet, NSString, NSObject;

@interface SSCacheObjectStore : NSObject {

	SSDatabaseCache* _databaseCache;
	NSMutableSet* _factories;
	NSString* _sessionIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)dealloc;
-(id)description;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(id)_factoryForTypeIdentifier:(id)arg1 ;
-(void)clearSession;
-(char)addObject:(id)arg1 withItemIdentifier:(id)arg2 ;
-(char)removeObjectWithItemIdentifier:(id)arg1 ;
-(id)cacheObjectWithItemIdentifier:(id)arg1 ;
-(void)addCacheObjectFactory:(id)arg1 ;
-(void)removeCacheObjectFactory:(id)arg1 ;
@end

