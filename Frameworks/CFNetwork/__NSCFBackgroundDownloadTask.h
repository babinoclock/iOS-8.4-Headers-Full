/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@interface __NSCFBackgroundDownloadTask : __NSCFBackgroundSessionTask {

	char _finished;

}

@property (assign) char finished;              //@synthesize finished=_finished - In the implementation block
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 ;
-(void)_onqueue_didFinishDownloadingToURL:(id)arg1 ;
-(void)_onqueue_didWriteData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 ;
-(void)_onqueue_didResumeAtOffset:(long long)arg1 expectedTotalBytes:(long long)arg2 ;
-(char)isKindOfClass:(Class)arg1 ;
-(void)setFinished:(char)arg1 ;
-(char)finished;
@end

