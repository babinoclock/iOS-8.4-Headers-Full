/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _TRConnectionTargetAction : NSObject {

	SEL _action;
	NSObject*<OS_dispatch_queue> _queue;
	id _target;

}

@property (nonatomic,readonly) SEL action;                                      //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id target;                                //@synthesize target=_target - In the implementation block
-(SEL)action;
-(id)target;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 queue:(id)arg3 ;
@end
