/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MusicControlTargetAction : NSObject {

	id _target;
	SEL _action;
	unsigned _controlEvents;

}

@property (assign,nonatomic,__weak) id target;                    //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned controlEvents;              //@synthesize controlEvents=_controlEvents - In the implementation block
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(unsigned)controlEvents;
-(void)setControlEvents:(unsigned)arg1 ;
@end

