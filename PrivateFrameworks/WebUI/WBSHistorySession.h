/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface WBSHistorySession : NSObject {

	NSDate* _startDate;

}

@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) char isCurrentSession; 
+(id)currentSession;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSDate *)startDate;
-(id)initWithSessionStartDate:(id)arg1 ;
-(char)isCurrentSession;
@end
