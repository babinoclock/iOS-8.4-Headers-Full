/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {

	UIPDFPageRenderJob* _job;
	char executing;
	char finished;

}

@property (retain) UIPDFPageRenderJob * job;              //@synthesize job=_job - In the implementation block
-(void)completeOperation;
-(void)dealloc;
-(void)start;
-(void)main;
-(id)initWithJob:(id)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(UIPDFPageRenderJob *)job;
-(void)setJob:(UIPDFPageRenderJob *)arg1 ;
@end

