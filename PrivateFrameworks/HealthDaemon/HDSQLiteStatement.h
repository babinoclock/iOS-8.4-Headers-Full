/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDSQLiteDatabase;

@interface HDSQLiteStatement : NSObject {

	HDSQLiteDatabase* _database;
	sqlite3_stmtRef _stmt;
	char _didCache;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(HDSQLiteDatabase *)database;
-(void)dealloc;
-(void)finish;
-(id)initWithSQL:(id)arg1 database:(id)arg2 cache:(char)arg3 ;
-(char)performStatementWithError:(id*)arg1 bindingHandler:(/*^block*/id)arg2 ;
@end

