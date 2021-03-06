/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CalStopwatch : NSObject {

	char _isRunning;
	unsigned long long _lastStartTime;
	unsigned long long _elapsedTime;
	char _hasValidElapsedTime;
	NSMutableDictionary* _events;

}
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(id)init;
-(id)description;
-(void)reset;
-(void)stop;
-(void)start;
-(unsigned long long)elapsedTimeInNanoseconds;
-(id)elapsedTimeAsString:(int)arg1 ;
-(void)markEventStart:(id)arg1 ;
-(double)markEventSplit:(id)arg1 ;
-(double)markEventEnd:(id)arg1 ;
@end

