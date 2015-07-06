/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSASGroupedQueue.h>

@class MSASEnqueuedCommand;

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue {

	MSASEnqueuedCommand* _lastEnqueuedCommand;

}

@property (nonatomic,retain) MSASEnqueuedCommand * lastEnqueuedCommand;              //@synthesize lastEnqueuedCommand=_lastEnqueuedCommand - In the implementation block
+(/*^block*/id)calloutBlockForCommand:(id)arg1 ;
-(char)hasEnqueuedItems;
-(void)MSASModel:(id)arg1 didFindNewAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindDeletedAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindDeletedAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindNewInvitation:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindDeletedInvitation:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindDeletedAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindNewComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 ;
-(void)MSASModel:(id)arg1 didDeleteComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 ;
-(void)workQueueFlushQueue;
-(void)setLastEnqueuedCommand:(MSASEnqueuedCommand *)arg1 ;
-(void)workQueueEnqueueCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
-(void)flushQueue;
-(MSASEnqueuedCommand *)lastEnqueuedCommand;
@end

