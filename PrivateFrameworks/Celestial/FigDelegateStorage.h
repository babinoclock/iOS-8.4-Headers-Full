/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FigDelegateStorage : NSObject {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _delegate;
	int _lock;

}

@property (readonly) id delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
+(void)initialize;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

