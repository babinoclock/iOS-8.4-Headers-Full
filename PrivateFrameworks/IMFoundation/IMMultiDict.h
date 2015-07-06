/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface IMMultiDict : NSObject {

	NSMutableDictionary* _dictionary;
	unsigned _count;

}

@property (nonatomic,readonly) unsigned count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(unsigned)countForKey:(id)arg1 ;
-(NSArray *)allKeys;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(NSMutableDictionary *)dictionary;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(id)peekObjectForKey:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(id)popObjectForKey:(id)arg1 ;
-(void)enqueueObject:(id)arg1 forKey:(id)arg2 ;
-(id)headObjectForKey:(id)arg1 ;
-(id)dequeueObjectForKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
@end
