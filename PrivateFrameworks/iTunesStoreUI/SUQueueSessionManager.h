/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface SUQueueSessionManager : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _downloadManagers;
	NSMutableArray* _preorderManagers;

}
-(void)dealloc;
-(id)init;
-(void)endDownloadManagerSessionForManager:(id)arg1 ;
-(id)beginDownloadManagerSessionForDownloadKind:(id)arg1 ;
-(id)beginDownloadManagerSessionWithDownloadKinds:(id)arg1 ;
-(id)beginPreorderManagerSessionWithItemKinds:(id)arg1 ;
-(void)endPreorderManagerSessionWithManager:(id)arg1 ;
-(id)beginDownloadManagerSessionWithManagerOptions:(id)arg1 ;
-(id)_queueSessionWithManagerOptions:(id)arg1 fromArray:(id)arg2 ;
-(id)_queueSessionWithDownloadKinds:(id)arg1 fromArray:(id)arg2 ;
-(id)_queueSessionWithQueue:(id)arg1 fromArray:(id)arg2 ;
-(void)_endQueueSession:(id)arg1 fromArray:(id)arg2 ;
@end

