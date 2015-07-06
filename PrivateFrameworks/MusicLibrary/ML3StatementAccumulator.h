/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MLMediaLibraryService, NSObject, NSMutableArray, NSString, ML3DatabaseConnection, NSUUID;

@interface ML3StatementAccumulator : NSObject {

	MLMediaLibraryService* _xpcService;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _statementThreshold;
	NSMutableArray* _statementQueue;
	NSString* _databasePath;
	ML3DatabaseConnection* _connection;
	NSUUID* _existingTransactionIdentifier;
	unsigned _priorityLevel;

}

@property (assign,nonatomic) unsigned statementThreshold;                         //@synthesize statementThreshold=_statementThreshold - In the implementation block
@property (nonatomic,readonly) NSMutableArray * statementQueue;                   //@synthesize statementQueue=_statementQueue - In the implementation block
@property (nonatomic,readonly) NSString * databasePath;                           //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSUUID * existingTransactionIdentifier;              //@synthesize existingTransactionIdentifier=_existingTransactionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned priorityLevel;                              //@synthesize priorityLevel=_priorityLevel - In the implementation block
-(void)dealloc;
-(id)init;
-(ML3DatabaseConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setExistingTransactionIdentifier:(NSUUID *)arg1 ;
-(void)setPriorityLevel:(unsigned)arg1 ;
-(void)setStatementThreshold:(unsigned)arg1 ;
-(char)enqueueStatement:(id)arg1 ;
-(char)flushAndWait:(char)arg1 ;
-(char)_onQueueFlushAndWait:(char)arg1 ;
-(unsigned)statementThreshold;
-(NSMutableArray *)statementQueue;
-(NSUUID *)existingTransactionIdentifier;
-(unsigned)priorityLevel;
-(NSString *)databasePath;
@end

