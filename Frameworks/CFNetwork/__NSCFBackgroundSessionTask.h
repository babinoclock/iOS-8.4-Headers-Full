/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTask.h>
#import <CFNetwork/NSURLSessionTaskSubclass.h>

@protocol NDBackgroundSessionProtocol;
@class NSError, NSString;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {

	char _sentCancel;
	id<NDBackgroundSessionProtocol> _remoteSession;
	unsigned _ident;
	NSError* _immediateError;

}

@property (retain) id<NDBackgroundSessionProtocol> remoteSession;              //@synthesize remoteSession=_remoteSession - In the implementation block
@property (readonly) unsigned ident;                                           //@synthesize ident=_ident - In the implementation block
@property (retain) NSError * immediateError;                                   //@synthesize immediateError=_immediateError - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onqueue_suspend;
-(void)_onqueue_resume;
-(void)_onqueue_cancel;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_connectionWaitingWithReason:(long long)arg1 ;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_disavow;
-(void)_onqueue_adjustPriorityHint:(float)arg1 ;
-(id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned)arg4 ;
-(unsigned)ident;
-(void)setRemoteSession:(id<NDBackgroundSessionProtocol>)arg1 ;
-(id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned)arg4 ;
-(void)setImmediateError:(NSError *)arg1 ;
-(void)_onqueue_didResume;
-(void)_onqueue_connectionWaitingWithError:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 ;
-(id)initWithBackgroundTask:(id)arg1 ;
-(id<NDBackgroundSessionProtocol>)remoteSession;
-(NSError *)immediateError;
-(void)dealloc;
-(id)_timingData;
-(void)setTaskDescription:(id)arg1 ;
@end

