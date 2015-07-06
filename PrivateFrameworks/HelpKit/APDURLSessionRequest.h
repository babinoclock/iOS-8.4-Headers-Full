/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSURLSessionTask;

@interface APDURLSessionRequest : NSObject {

	NSMutableArray* _completionHandlers;
	NSURLSessionTask* _sessionTask;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * sessionTask;                   //@synthesize sessionTask=_sessionTask - In the implementation block
+(id)urlSessionRequestWithSessionTask:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(NSMutableArray *)completionHandlers;
-(NSURLSessionTask *)sessionTask;
-(id)initWithSessionTask:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)setSessionTask:(NSURLSessionTask *)arg1 ;
@end

