/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WFCategoryJudgement : NSObject {

	float score;
	long category;

}
+(id)categoryJudgementWithCategory:(long)arg1 score:(float)arg2 ;
-(id)description;
-(void)setCategory:(long)arg1 ;
-(long)category;
-(float)score;
-(void)setScore:(float)arg1 ;
-(int)compareByCategory:(id)arg1 ;
-(int)compareByScore:(id)arg1 ;
@end

