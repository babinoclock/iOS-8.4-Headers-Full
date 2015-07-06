/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLifeCycle.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, BRCSyncContext, NSMutableDictionary, BRCDeadlineToken, NSObject, NSArray, NSString;

@interface BRCTransferStream : NSObject <BRCLifeCycle> {

	BRCAccountSession* _session;
	BRCSyncContext* _syncContext;
	long long _nextFire;
	NSMutableDictionary* _inFlightOpByID;
	BRCDeadlineToken* _schedulingToken;
	NSObject*<OS_dispatch_queue> _transferQueue;
	char _hasReachedCap;
	char _isCancelled;
	/*^block*/id _getNextJob;

}

@property (nonatomic,copy) id getNextJob;                           //@synthesize getNextJob=_getNextJob - In the implementation block
@property (readonly) NSArray * operations; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)cancel;
-(void)suspend;
-(char)isCancelled;
-(void)addOperation:(id)arg1 ;
-(void)resume;
-(void)close;
-(NSArray *)operations;
-(void)_close;
-(void)setIsCancelled:(char)arg1 ;
-(void)_schedule;
-(double)progressForTransferID:(id)arg1 operationID:(id)arg2 ;
-(void)wakeUpForNextWorkAt:(long long)arg1 ;
-(void)cancelTransferID:(id)arg1 operationID:(id)arg2 ;
-(void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3 ;
-(void)_setReachedCap:(char)arg1 ;
-(void)_evaluateCap;
-(void)_addOperation:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3 ;
-(id)getNextJob;
-(void)setGetNextJob:(id)arg1 ;
@end

