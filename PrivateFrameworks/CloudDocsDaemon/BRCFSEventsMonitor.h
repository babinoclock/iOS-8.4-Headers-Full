/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCModule.h>
#import <CloudDocsDaemon/BRCLowDiskDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore, BRCFSEventsDelegate;
@class BRCAccountSession, BRCFSEventsPersistedState, NSString, NSObject, BRCRelativePath, PQLConnection;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCLowDiskDelegate> {

	BRCAccountSession* _session;
	Ai _suspendCount;
	Ai _resetCount;
	BRCFSEventsPersistedState* _persistedState;
	NSString* _devicePath;
	NSString* _rootPathRelativeToDevice;
	NSObject*<OS_dispatch_source> _rootVnodeWatcher;
	char _volumeHasLowDiskSpace;
	char _volumeIsCaseSensitive;
	FSEventStreamRef _stream;
	NSObject*<OS_dispatch_queue> _streamQueue;
	NSObject*<OS_dispatch_source> _historicalEventSource;
	BRCFSEventsPersistedState* _rendezVous;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	char _drainEvents;
	BRCRelativePath* _root;
	id<BRCFSEventsDelegate> _delegate;
	PQLConnection* _db;

}

@property (__weak) id<BRCFSEventsDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (setter=setDB:,nonatomic,retain) PQLConnection * db;              //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * root;                      //@synthesize root=_root - In the implementation block
@property (nonatomic,readonly) char volumeIsCaseSensitive;                  //@synthesize volumeIsCaseSensitive=_volumeIsCaseSensitive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char isCancelled; 
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<BRCFSEventsDelegate>)arg1 ;
-(id<BRCFSEventsDelegate>)delegate;
-(void)suspend;
-(void)reset;
-(char)isCancelled;
-(void)resume;
-(void)close;
-(void)_cancel;
-(PQLConnection *)db;
-(BRCRelativePath *)root;
-(void)setIsCancelled:(char)arg1 ;
-(id)initWithAccountSession:(id)arg1 ;
-(char)volumeIsCaseSensitive;
-(void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(char)arg2 ;
-(void)setDB:(id)arg1 ;
-(char)openWithRootPath:(id)arg1 error:(id*)arg2 ;
-(void)stopWatcher;
-(void)signalAfterCurrentFSEvent:(id)arg1 ;
-(void)fseventAtPath:(id)arg1 withFlags:(unsigned long)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned)arg4 eventCount:(unsigned)arg5 initialScan:(char)arg6 ;
-(char)setUpRootAtPath:(id)arg1 error:(id*)arg2 ;
-(char)setUpStreamSynchronously:(char)arg1 error:(id*)arg2 ;
-(void)didProcessEventID:(unsigned long long)arg1 ;
@end

