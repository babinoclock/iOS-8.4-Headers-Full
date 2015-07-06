/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLSessionDelegate, OS_dispatch_queue;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSOperationQueue, NSString, NSURLSessionConfiguration, NSObject;

@interface NSURLSession : NSObject {

	char _invalid;
	char __isSharedSession;
	NSOperationQueue* _delegateQueue;
	id<NSURLSessionDelegate> _delegate;
	NSString* _sessionDescription;
	NSURLSessionConfiguration* __local_immutable_configuration;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSOperationQueue* _realDelegateQueue;
	/*^block*/id __connBlock;

}

@property (retain) NSOperationQueue * delegateQueue;                                        //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (retain) id<NSURLSessionDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSURLSessionConfiguration * configuration; 
@property (copy) NSString * sessionDescription;                                             //@synthesize sessionDescription=_sessionDescription - In the implementation block
@property (retain) NSURLSessionConfiguration * _local_immutable_configuration;              //@synthesize _local_immutable_configuration=__local_immutable_configuration - In the implementation block
@property (assign) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) char invalid;                                                            //@synthesize invalid=_invalid - In the implementation block
@property (retain) NSOperationQueue * realDelegateQueue;                                    //@synthesize realDelegateQueue=_realDelegateQueue - In the implementation block
@property (assign) char _isSharedSession;                                                   //@synthesize _isSharedSession=__isSharedSession - In the implementation block
@property (copy) id _connBlock;                                                             //@synthesize _connBlock=__connBlock - In the implementation block
+(void)_getActiveSessionIdentifiersWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)_obliterateAllBackgroundSessionsWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)sessionWithConfiguration:(id)arg1 ;
+(void)_releaseProcessAssertionForSessionIdentifier:(id)arg1 ;
+(void)_sendPendingCallbacksForSessionIdentifier:(id)arg1 ;
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
+(id)sharedSession;
-(char)can_delegate_task_needNewBodyStream;
-(void)delegate_task:(id)arg1 needNewBodyStream:(/*^block*/id)arg2 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)addDelegateBlock:(/*^block*/id)arg1 ;
-(void)finalizeDelegateWithError:(id)arg1 ;
-(NSURLSessionConfiguration *)_local_immutable_configuration;
-(char)_isSharedSession;
-(char)can_delegate_dataTask_didReceiveResponse;
-(void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)can_delegate_dataTask_didBecomeDownloadTask;
-(char)can_delegate_dataTask_didBecomeStreamTask;
-(void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)can_delegate_task_willPerformHTTPRedirection;
-(void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)can_delegate_didReceiveChallenge;
-(void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)can_delegate_task_didReceiveChallenge;
-(void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)can_delegate_dataTask_willCacheResponse;
-(void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)can_delegate_task_didCompleteWithError;
-(void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(char)can_delegate_dataTask_didReceiveData;
-(void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)can_delegate_task_willSendRequestForEstablishedConnection;
-(void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)can_delegate_task_isWaitingForConnectionWithReason;
-(void)delegate_task:(id)arg1 isWaitingForConnectionWithReason:(long long)arg2 ;
-(char)can_delegate_task_isWaitingForConnection;
-(void)delegate_task_isWaitingForConnection:(id)arg1 ;
-(char)can_delegate_task_conditionalRequirementsChanged;
-(void)delegate_task:(id)arg1 conditionalRequirementsChanged:(char)arg2 ;
-(char)can_delegate_task_didSendBodyData;
-(void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4 ;
-(char)can_delegate_downloadTaskNeedsDownloadDirectory;
-(id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1 ;
-(char)can_delegate_openFileAtPath;
-(int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2 ;
-(char)can_delegate_downloadTask_didWriteData;
-(void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(char)can_delegate_downloadTask_didFinishDownloadingToURL;
-(void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)can_delegate_downloadTask_didReceiveResponse;
-(void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2 ;
-(char)can_delegate_downloadTask_didResumeAtOffset;
-(void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3 ;
-(void)set_local_immutable_configuration:(NSURLSessionConfiguration *)arg1 ;
-(char)can_delegate_willRetryBackgroundDataTask;
-(void)delegate_willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2 ;
-(char)can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didReceiveDownloadToken:(unsigned long long)arg2 ;
-(char)can_delegate_didFinishEventsForBackgroundURLSession;
-(void)delegate_didFinishEventsForBackgroundURLSession;
-(char)can_delegate_task_isWaitingForConnectionWithError;
-(void)delegate_task:(id)arg1 isWaitingForConnectionWithError:(id)arg2 ;
-(char)can_delegate_AVAssetDownloadTask_didWriteData;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)set_isSharedSession:(char)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)can_delegate_task_actually_didCompleteWithError;
-(id)_copyConfiguration;
-(char)isBackgroundSession;
-(void)finishTasksAndInvalidate;
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataTaskWithHTTPGetRequest:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)streamTaskForHost:(id)arg1 port:(int)arg2 tls:(BOOL)arg3 ;
-(id)streamTaskForHost:(id)arg1 port:(int)arg2 tls:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)can_delegate_streamTask_didCreateInputStreamoutputStream;
-(void)delegate_streamTask:(id)arg1 didCreateInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)sessionDescription;
-(void)setSessionDescription:(NSString *)arg1 ;
-(NSOperationQueue *)realDelegateQueue;
-(void)setRealDelegateQueue:(NSOperationQueue *)arg1 ;
-(id)_connBlock;
-(void)set_connBlock:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<NSURLSessionDelegate>)arg1 ;
-(id<NSURLSessionDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(id)downloadTaskWithURL:(id)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)invalidateAndCancel;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalid:(char)arg1 ;
-(char)invalid;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

