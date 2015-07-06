/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpKit/NSURLSessionDelegate.h>
#import <HelpKit/NSURLSessionDataDelegate.h>

@class NSMutableData, NSURLRequest, NSString, NSURLSessionDataTask, NSURLSessionTask;

@interface APDURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSMutableData* _data;
	int _dataType;
	NSURLRequest* _request;
	NSString* _lastModified;
	id _completionHandler;
	NSURLSessionDataTask* _dataTask;

}

@property (nonatomic,retain) NSURLRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                       //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSURLSessionTask * sessionTask; 
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;               //@synthesize dataTask=_dataTask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultURLSessionConfiguration;
+(id)defaultOperationQueue;
+(id)urlSessionWithRequest:(id)arg1 dataType:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLastModified:(NSString *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(NSURLRequest *)request;
-(id)completionHandler;
-(void)resume;
-(void)setCompletionHandler:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithRequest:(id)arg1 dataType:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSessionTask *)sessionTask;
-(void)notifyWithFormattedData:(id)arg1 response:(id)arg2 error:(id)arg3 cacheData:(char)arg4 ;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSString *)lastModified;
@end

