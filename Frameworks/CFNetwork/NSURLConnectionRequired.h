/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLConnectionRequired <NSObject>
@optional
-(void)_setDelegateQueue:(id)arg1;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
-(void)cancel;
-(void)start;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;

@end
