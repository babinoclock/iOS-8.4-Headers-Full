/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSString;

@interface SSSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _databasePath;
	char _readOnly;
	char _isInTransaction;
	/*^block*/id _setupBlock;
	CFDictionaryRef _statementCache;
	char _takesTaskCompletionAssertions;
	SBSProcessAssertionRef _taskAssertion;
	int _taskAssertionCount;

}

@property (nonatomic,copy) id setupBlock;                           //@synthesize setupBlock=_setupBlock - In the implementation block
@property (assign) char takesTaskCompletionAssertions; 
+(char)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(char*)arg2 didFinish:(char*)arg3 isCorrupt:(char*)arg4 ;
+(char)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_setTakesTaskCompletionAssertions:(char)arg1 ;
-(void)dealloc;
-(int)userVersion;
-(char)setUserVersion:(int)arg1 ;
-(char)executeSQL:(id)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(int)_openDatabase;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)setSetupBlock:(id)arg1 ;
-(char)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
-(void)prepareStatementForSQL:(id)arg1 cache:(char)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(char)arg2 ;
-(void)dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)_beginTaskCompletionAssertion;
-(void)_endTaskCompletionAssertion;
-(void)_accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(void)_resetCorruptDatabase;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(char)arg2 ;
-(char)setUserVersion:(int)arg1 forDatabase:(id)arg2 ;
-(int)userVersionForDatabase:(id)arg1 ;
-(int)_openFlags;
-(int)_resetAndReopenDatabaseWithPath:(id)arg1 ;
-(char)_resetDatabaseWithPath:(id)arg1 ;
-(char)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(int)countChanges;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchBlockSync:(/*^block*/id)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)beginTaskCompletionAssertion;
-(void)endTaskCompletionAssertion;
-(void)setTakesTaskCompletionAssertions:(char)arg1 ;
-(char)takesTaskCompletionAssertions;
-(id)setupBlock;
@end

