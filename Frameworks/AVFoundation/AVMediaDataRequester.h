/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVMediaDataRequesterConsumer, OS_dispatch_queue;
@class NSObject;

@interface AVMediaDataRequester : NSObject {

	id<AVMediaDataRequesterConsumer> _mediaDataConsumer;
	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) id requestBlock;                                        //@synthesize requestBlock=_requestBlock - In the implementation block
-(id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(/*^block*/id)arg3 ;
-(void)_requestMediaDataIfReady;
-(void)startRequestingMediaData;
-(id)requestBlock;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)finalize;
@end

