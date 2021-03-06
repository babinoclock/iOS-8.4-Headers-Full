/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {

	NSMutableSet* _operations;
	NSMutableDictionary* _uniqueOperations;

}
-(void)dealloc;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)removeOperation:(id)arg1 ;
-(unsigned)countOfOperations;
-(id)uniqueOperationForKey:(id)arg1 ;
-(void)setUniqueOperation:(id)arg1 forKey:(id)arg2 ;
-(char)containsOperation:(id)arg1 ;
@end

