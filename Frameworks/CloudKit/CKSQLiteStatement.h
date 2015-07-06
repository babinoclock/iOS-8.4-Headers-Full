/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudKit/CloudKit-Structs.h>
@class CKSQLite, NSString;

@interface CKSQLiteStatement : NSObject {

	char _reset;
	CKSQLite* _SQLite;
	NSString* _SQL;
	sqlite3_stmtRef _handle;

}

@property (setter=QLite,nonatomic,__weak,readonly) CKSQLite * SQLite;              //@synthesize SQLite=_SQLite - In the implementation block
@property (setter=QL,nonatomic,readonly) NSString * SQL;                           //@synthesize SQL=_SQL - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef handle;                             //@synthesize handle=_handle - In the implementation block
@property (assign,getter=isReset,nonatomic) char reset;                            //@synthesize reset=_reset - In the implementation block
-(char)isReset;
-(id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(sqlite3_stmtRef)arg3 ;
-(id)textAtIndex:(unsigned)arg1 ;
-(void)bindText:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)bindValues:(id)arg1 ;
-(id)allObjectsByColumnName;
-(void)bindNullAtIndex:(unsigned)arg1 ;
-(void)bindInt:(long)arg1 atIndex:(unsigned)arg2 ;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned)arg2 ;
-(void)bindBlob:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned)arg2 ;
-(void)bindValue:(id)arg1 atIndex:(unsigned)arg2 ;
-(int)columnTypeAtIndex:(unsigned)arg1 ;
-(long long)int64AtIndex:(unsigned)arg1 ;
-(id)blobAtIndex:(unsigned)arg1 ;
-(CKSQLite *)SQLite;
-(NSString *)SQL;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)allObjects;
-(char)reset;
-(unsigned)columnCount;
-(long)intAtIndex:(unsigned)arg1 ;
-(id)columnNameAtIndex:(unsigned)arg1 ;
-(double)doubleAtIndex:(unsigned)arg1 ;
-(void)setReset:(char)arg1 ;
-(sqlite3_stmtRef)handle;
-(void)finalizeStatement;
-(char)step;
@end

