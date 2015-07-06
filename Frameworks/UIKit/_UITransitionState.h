/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface _UITransitionState : NSObject {

	int _transitionDirection;
	/*^block*/id _completion;
	NSDate* _beginDate;

}

@property (nonatomic,readonly) int transitionDirection;                       //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (nonatomic,readonly) int effectiveTransitionDirection; 
@property (nonatomic,readonly) NSDate * beginDate;                            //@synthesize beginDate=_beginDate - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active; 
-(void)dealloc;
-(id)description;
-(char)isActive;
-(id)initWithTransitionDirection:(int)arg1 completion:(/*^block*/id)arg2 ;
-(int)transitionDirection;
-(void)cleanupWithFinishedState:(char)arg1 completedState:(char)arg2 ;
-(char)isCompatibleWithTransitionInDirection:(int)arg1 ;
-(int)effectiveTransitionDirection;
-(NSDate *)beginDate;
-(void)markBeginDate;
@end

