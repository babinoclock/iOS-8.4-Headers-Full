/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Query.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query {

	Class _aggregateEntityClass;
	NSString* _foreignPersistentIDProperty;
	char _isFastCountable;

}

@property (nonatomic,readonly) Class aggregateEntityClass;                          //@synthesize aggregateEntityClass=_aggregateEntityClass - In the implementation block
@property (nonatomic,readonly) NSString * foreignPersistentIDProperty;              //@synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty - In the implementation block
@property (assign,nonatomic) char isFastCountable;                                  //@synthesize isFastCountable=_isFastCountable - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)countOfEntities;
-(Class)entityClass;
-(char)hasEntities;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(char)arg2 ;
-(id)persistentIDProperty;
-(char)sectionsPersistentIDColumnIsDistinct;
-(Class)aggregateEntityClass;
-(NSString *)foreignPersistentIDProperty;
-(id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3 ;
-(char)isFastCountable;
-(void)setIsFastCountable:(char)arg1 ;
@end
