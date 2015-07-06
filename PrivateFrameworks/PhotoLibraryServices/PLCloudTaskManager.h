/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PLCloudTaskManager : NSObject {

	NSMutableDictionary* _pendingTaskForTaskIdentifier;
	NSMutableDictionary* _resourceForTaskIdentifier;
	NSMutableDictionary* _highPriorityResourceToTaskIdentifierMap;
	NSMutableDictionary* _lowPriorityResourceToTaskIdentifierMap;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)cancelTaskWithTaskIdentifier:(id)arg1 ;
-(id)getPendingTaskForTaskIdentifier:(id)arg1 ;
-(char)hasTaskIdentifierForResource:(id)arg1 highPriority:(char)arg2 ;
-(id)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forResource:(id)arg3 highPriority:(char)arg4 ;
-(void)createPendingTaskWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forResource:(id)arg3 highPriority:(char)arg4 withTaskIdentifier:(id)arg5 ;
-(void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)reportCompletionForResource:(id)arg1 withError:(id)arg2 highPriority:(char)arg3 ;
-(void)reportProgress:(float)arg1 forResource:(id)arg2 highPriority:(char)arg3 ;
-(id)taskIdentifiersForResource:(id)arg1 highPriority:(char)arg2 ;
-(id)firstTaskIdentifierForResource:(id)arg1 highPriority:(char)arg2 ;
-(id)_identifierForResource:(id)arg1 ;
-(void)setTaskIdentifiers:(id)arg1 forResource:(id)arg2 highPriority:(char)arg3 ;
-(id)taskForResource:(id)arg1 highPriority:(char)arg2 ;
-(void)removeTaskIdentifiersForResource:(id)arg1 highPriority:(char)arg2 ;
@end

