/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface CKSQLitePool : NSObject {

	char _drainScheduled;
	/*^block*/id _factory;
	NSMutableArray* _dbs;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) id factory;                               //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) NSMutableArray * dbs;                            //@synthesize dbs=_dbs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char drainScheduled;                             //@synthesize drainScheduled=_drainScheduled - In the implementation block
-(NSMutableArray *)dbs;
-(id)_openDatabaseWithError:(id*)arg1 ;
-(id)_acquireDatabaseWithError:(id*)arg1 ;
-(void)_scheduleDrain;
-(void)_closeDatabase:(id)arg1 ;
-(void)performWithDatabase:(/*^block*/id)arg1 ;
-(id)factory;
-(void)setDbs:(NSMutableArray *)arg1 ;
-(char)drainScheduled;
-(void)setDrainScheduled:(char)arg1 ;
-(void)_drain;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)acquireDatabase:(char)arg1 ;
-(void)releaseDatabase:(id)arg1 ;
-(id)initWithFactory:(/*^block*/id)arg1 ;
-(void)closeAll;
-(char)performWithDatabase:(/*^block*/id)arg1 error:(id*)arg2 ;
@end

