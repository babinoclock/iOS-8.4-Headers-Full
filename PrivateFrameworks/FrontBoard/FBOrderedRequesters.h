/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBOrderedRequesters : NSObject {

	NSMutableArray* _bands[4];

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)removeRequester:(id)arg1 ;
-(id)requesters;
-(id)frontmostRequester;
-(char)containsRequester:(id)arg1 inBand:(int)arg2 ;
-(void)addRequester:(id)arg1 toBand:(int)arg2 ;
-(void)prioritizeRequester:(id)arg1 ;
@end
