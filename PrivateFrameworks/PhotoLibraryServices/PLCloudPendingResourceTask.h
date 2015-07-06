/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPLResourceTransferTask, NSMutableDictionary, NSDate;

@interface PLCloudPendingResourceTask : NSObject {

	CPLResourceTransferTask* _transferTask;
	NSMutableDictionary* _pendingTasks;
	NSDate* _lastUpdated;
	char _completed;

}
-(void)dealloc;
-(void)setTransferTask:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forTaskIdentifier:(id)arg3 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(id)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportProgress:(float)arg1 ;
-(void)reportCompletionWithError:(id)arg1 ;
-(id)taskIDs;
-(void)keepAlive;
-(void)cancelAllTask;
-(id)lastUpdated;
@end

