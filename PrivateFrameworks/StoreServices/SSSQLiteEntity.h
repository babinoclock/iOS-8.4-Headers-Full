/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@protocol SSSQLiteEntity <NSObject>
@required
+(id)foreignDatabaseTableForProperty:(id)arg1;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1;
+(id)databasePropertyToSetClientProperty:(id)arg1;
+(id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+(id)joinClauseForProperty:(id)arg1;
+(id)databasePropertyToGetClientProperty:(id)arg1;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1;
+(id)foreignDatabaseColumnForProperty:(id)arg1;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
-(id)valueForProperty:(id)arg1;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned)arg3;
-(char)setValue:(id)arg1 forProperty:(id)arg2;
-(char)setValuesWithDictionary:(id)arg1;
-(char)deleteFromDatabase;
-(id)copyValuesForClientProperties:(id)arg1;
-(id)copyXPCEncodedValuesForClientProperties:(id)arg1;

@end


@class SSSQLiteDatabase, NSString;

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity> {

	SSSQLiteDatabase* _database;
	long long _persistentID;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) long long persistentID;                   //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) char existsInDatabase; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
+(char)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 database:(id)arg4 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1 ;
+(Class)memoryEntityClass;
+(id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4 ;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(id)countForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
+(id)minValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
-(SSSQLiteDatabase *)database;
-(id)valueForProperty:(id)arg1 ;
-(long long)persistentID;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned)arg3 ;
-(char)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2 ;
-(id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2 ;
-(char)setValuesWithDictionary:(id)arg1 ;
-(char)deleteFromDatabase;
-(id)_copyTableClusteredValuesWithValues:(id)arg1 ;
-(char)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 ;
-(id)copyValuesForClientProperties:(id)arg1 ;
-(id)copyXPCEncodedValuesForClientProperties:(id)arg1 ;
-(char)existsInDatabase;
@end

