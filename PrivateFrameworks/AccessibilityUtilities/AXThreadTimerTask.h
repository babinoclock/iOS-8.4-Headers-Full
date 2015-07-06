/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXThreadTimerTask : NSObject {

	char cancel;
	char finished;
	char active;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                       //@synthesize block=_block - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancel; 
@property (assign,getter=isFinished,nonatomic) char finished; 
@property (assign,getter=isActive,nonatomic) char active; 
-(void)dealloc;
-(char)isActive;
-(char)isCancelled;
-(void)run;
-(void)setActive:(char)arg1 ;
-(char)isFinished;
-(void)runAfterDelay:(float)arg1 ;
-(void)setCancel:(char)arg1 ;
-(void)setFinished:(char)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end
