/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Librarian/Librarian-Structs.h>
@class NSURL, NSObject, NSOperationQueue, NSMutableDictionary;

@interface LBFSEventsWatcher : NSObject {

	FSEventStreamRef _streamRef;
	char _started;
	NSURL* _url;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSOperationQueue* _messageQueue;
	int _disableCount;
	NSMutableDictionary* _inodeMap;
	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
-(void)disableUpdates;
-(void)enableUpdates;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)dealloc;
-(NSURL *)url;
-(void)stop;
-(void)start;
-(void)sendMessage:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(void)scanDirectory:(id)arg1 isGathering:(char)arg2 ;
-(id)messageForURL:(id)arg1 inode:(long long)arg2 exists:(char)arg3 flags:(unsigned long)arg4 ;
-(void)processEventForPath:(id)arg1 flags:(unsigned long)arg2 ;
@end

