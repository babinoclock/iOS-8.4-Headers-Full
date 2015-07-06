/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IMManualUpdater : NSObject {

	id _target;
	SEL _action;
	unsigned _needsUpdate : 1;

}

@property (assign,nonatomic) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) char needsUpdate; 
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(void)setNeedsUpdate:(char)arg1 ;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(char)needsUpdate;
@end

