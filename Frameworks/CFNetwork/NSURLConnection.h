/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLAuthenticationChallengeSender.h>

@class NSURLConnectionInternal, NSString, NSURLRequest;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {

	NSURLConnectionInternal* _internal;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURLRequest * originalRequest; 
@property (copy,readonly) NSURLRequest * currentRequest; 
+(void)_geo_sendAttributedAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)_geo_sendAttributedSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3 ;
+(void)_geo_sendAsynchronousRequest:(id)arg1 connectionProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_geo_sendAsynchronousRequest:(id)arg1 queue:(id)arg2 connectionProperties:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)_geo_sendSynchronousRequest:(id)arg1 connectionProperties:(id)arg2 returningResponse:(id*)arg3 error:(id*)arg4 ;
+(void)_setMIMETypesWithNoSizeLimit:(id)arg1 ;
+(void)_resourceLoadLoop:(id)arg1 ;
+(CFRunLoopRef)resourceLoaderRunLoop;
+(void)_setLoaderThreadPriority:(int)arg1 ;
+(void)_setCollectsTimingData:(char)arg1 ;
+(char)_collectsTimingData;
+(void)_collectTimingDataWithOptions:(unsigned)arg1 ;
+(unsigned)_timingDataOptions;
+(char)canHandleRequest:(id)arg1 ;
+(unsigned)_sweeperInterval;
+(void)_setSweeperInterval:(unsigned)arg1 ;
+(id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3 ;
+(id)connectionWithRequest:(id)arg1 delegate:(id)arg2 ;
+(void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_geo_initWithAttributedRequest:(id)arg1 delegate:(id)arg2 startImmediately:(char)arg3 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(id)connectionProperties;
-(id)_dlInternal;
-(id)_cfInternal;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)download;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(void)start;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(char)defersCallbacks;
-(void)setDefersCallbacks:(char)arg1 ;
-(id)_timingData;
-(void)setDelegateQueue:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(char)arg3 maxContentLength:(long long)arg4 startImmediately:(char)arg5 connectionProperties:(id)arg6 ;
-(NSURLRequest *)originalRequest;
-(NSURLRequest *)currentRequest;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(char)arg3 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
@end

