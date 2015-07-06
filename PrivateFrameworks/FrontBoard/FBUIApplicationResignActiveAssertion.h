/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBSDisplay;

@interface FBUIApplicationResignActiveAssertion : NSObject {

	char _relinquished;
	FBSDisplay* _display;
	int _reason;

}

@property (nonatomic,retain) FBSDisplay * display;              //@synthesize display=_display - In the implementation block
@property (assign,nonatomic) int reason;                        //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(id)description;
-(FBSDisplay *)display;
-(int)reason;
-(void)relinquish;
-(id)initWithReason:(int)arg1 forDisplay:(id)arg2 ;
-(void)setReason:(int)arg1 ;
-(void)setDisplay:(FBSDisplay *)arg1 ;
@end
