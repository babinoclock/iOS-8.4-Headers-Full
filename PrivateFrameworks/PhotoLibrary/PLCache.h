/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSMutableDictionary;

@interface PLCache : NSObject {

	NSMutableDictionary* _cacheEntries;
	int _countLimit;
	int _currentCount;
	int _totalCostLimit;
	int _currentCost;
	opaque_pthread_mutex_t _lock;
	entryList* _lru;

}
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithCountLimit:(int)arg1 totalCostLimit:(int)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(int)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
