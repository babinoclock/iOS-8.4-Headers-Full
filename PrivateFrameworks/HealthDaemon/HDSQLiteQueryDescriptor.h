/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/NSCopying.h>

@class NSArray, HDSQLitePredicate, NSString;

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying> {

	char _returnsDistinctEntities;
	Class _entityClass;
	int _limitCount;
	NSArray* _orderingDirections;
	NSArray* _orderingProperties;
	HDSQLitePredicate* _predicate;
	NSString* _groupBy;

}

@property (assign,nonatomic) Class entityClass;                         //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) int limitCount;                            //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSArray * orderingDirections;                //@synthesize orderingDirections=_orderingDirections - In the implementation block
@property (nonatomic,copy) NSArray * orderingProperties;                //@synthesize orderingProperties=_orderingProperties - In the implementation block
@property (assign,nonatomic) char returnsDistinctEntities;              //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) HDSQLitePredicate * predicate;               //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSString * groupBy;                          //@synthesize groupBy=_groupBy - In the implementation block
-(void)setOrderingProperties:(NSArray *)arg1 ;
-(NSArray *)orderingProperties;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(HDSQLitePredicate *)arg1 ;
-(HDSQLitePredicate *)predicate;
-(NSString *)groupBy;
-(id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2 ;
-(id)_newSelectSQLWithProperties:(id)arg1 ;
-(void)setGroupBy:(NSString *)arg1 ;
-(Class)entityClass;
-(void)setEntityClass:(Class)arg1 ;
-(void)setOrderingDirections:(NSArray *)arg1 ;
-(int)limitCount;
-(void)setLimitCount:(int)arg1 ;
-(NSArray *)orderingDirections;
-(char)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(char)arg1 ;
@end

