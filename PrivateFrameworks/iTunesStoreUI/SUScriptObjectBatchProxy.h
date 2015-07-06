/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject {

	SUScriptObjectInvocationBatch* _invocationBatch;
	id _target;

}

@property (assign) SUScriptObjectInvocationBatch * invocationBatch;              //@synthesize invocationBatch=_invocationBatch - In the implementation block
@property (assign) id target;                                                    //@synthesize target=_target - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)forwardInvocation:(id)arg1 ;
-(void)setInvocationBatch:(SUScriptObjectInvocationBatch *)arg1 ;
-(SUScriptObjectInvocationBatch *)invocationBatch;
@end

