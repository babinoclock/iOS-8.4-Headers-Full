/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileReactorProxy.h>

@protocol OS_dispatch_queue;
@class NSObject, NSFileWatcher, NSMutableArray;

@interface NSFilePresenterProxy : NSFileReactorProxy {

	NSObject*<OS_dispatch_queue> _queue;
	NSFileWatcher* _watcher;
	unsigned _writingRelinquishmentCount;
	id _currentWriterPurposeID;
	NSMutableArray* _previousWriterPurposeIDs;
	char _didObserveMovingByWriter;
	char _didObserveVersionChangingByWriter;
	char _disconnected;
	char _inSubarbiter;

}

@property (readonly) char disconnected; 
@property (assign) char inSubarbiter;                //@synthesize inSubarbiter=_inSubarbiter - In the implementation block
+(id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2 ;
-(void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3 ;
-(void)setItemLocation:(id)arg1 ;
-(void)observeMoveByWriterWithPurposeID:(id)arg1 ;
-(void)observeDisconnectionByWriterWithPurposeID:(id)arg1 ;
-(void)observeReconnectionByWriterWithPurposeID:(id)arg1 ;
-(void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2 ;
-(void)observeDisappearanceAtSubitemPath:(id)arg1 ;
-(void)observeChangeAtSubitemPath:(id)arg1 ;
-(void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4 ;
-(void)setInSubarbiter:(char)arg1 ;
-(char)inSubarbiter;
-(void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(/*^block*/id)arg3 ;
-(void)forwardObservationMessageWithKind:(id)arg1 parameters:(id)arg2 ;
-(char)disconnected;
-(void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned)arg2 purposeID:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 ;
-(void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)saveChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)disconnect;
@end

