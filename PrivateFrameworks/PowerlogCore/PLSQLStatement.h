/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PowerlogCore/PowerlogCore-Structs.h>
@class NSString, NSMutableArray;

@interface PLSQLStatement : NSObject {

	char _isInsert;
	char _isDelete;
	sqlite3_stmtRef _statement;
	NSString* _sqlQuery;
	NSString* _syncObject;
	NSMutableArray* _boundObjects;
	sqlite3Ref _dbConnection;

}

@property (assign) sqlite3_stmtRef statement;                  //@synthesize statement=_statement - In the implementation block
@property (retain) NSString * sqlQuery;                        //@synthesize sqlQuery=_sqlQuery - In the implementation block
@property (readonly) char isInsert;                            //@synthesize isInsert=_isInsert - In the implementation block
@property (readonly) char isDelete;                            //@synthesize isDelete=_isDelete - In the implementation block
@property (retain) NSString * syncObject;                      //@synthesize syncObject=_syncObject - In the implementation block
@property (retain) NSMutableArray * boundObjects;              //@synthesize boundObjects=_boundObjects - In the implementation block
@property (assign) sqlite3Ref dbConnection;                    //@synthesize dbConnection=_dbConnection - In the implementation block
-(void)dealloc;
-(id)description;
-(void)reset;
-(id)perform;
-(char)isDelete;
-(sqlite3Ref)dbConnection;
-(id)initWithSQLQuery:(id)arg1 forDatabase:(sqlite3Ref)arg2 withSyncObject:(id)arg3 result:(int*)arg4 ;
-(char)isInsert;
-(int)bindValue:(id)arg1 withFormater:(short)arg2 atPosition:(int)arg3 ;
-(NSString *)sqlQuery;
-(void)setDbConnection:(sqlite3Ref)arg1 ;
-(NSMutableArray *)boundObjects;
-(NSString *)syncObject;
-(sqlite3_stmtRef)statement;
-(void)setStatement:(sqlite3_stmtRef)arg1 ;
-(void)setSqlQuery:(NSString *)arg1 ;
-(void)setSyncObject:(NSString *)arg1 ;
-(void)setBoundObjects:(NSMutableArray *)arg1 ;
-(void)finalize;
@end

