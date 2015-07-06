/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVWeakReferencingDelegateStorage, NSObject;

@interface AVCaptureAudioDataOutputInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> bufferQueue;
	OpaqueFigSimpleMutexRef remoteQueueMutex;
	remoteQueueReceiverOpaqueRef remoteReceiverQueue;

}
-(void)dealloc;
-(id)init;
@end

