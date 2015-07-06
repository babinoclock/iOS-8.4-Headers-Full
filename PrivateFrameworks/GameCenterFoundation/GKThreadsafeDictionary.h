/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GKThreadsafeDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(id)allKeys;
-(void)dealloc;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSMutableDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allObjects;
-(id)initWithName:(id)arg1 ;
-(void)writeToDictionary:(/*^block*/id)arg1 ;
-(void)readFromDictionary:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 objectProducerBlock:(/*^block*/id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

