/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSDateValue.h>
#import <iCalendar/NSCoding.h>

@interface ICSDateTimeValue : ICSDateValue <NSCoding> {

	int _hour;
	int _minute;
	int _second;

}

@property (readonly) int hour;                //@synthesize hour=_hour - In the implementation block
@property (readonly) int minute;              //@synthesize minute=_minute - In the implementation block
@property (readonly) int second;              //@synthesize second=_second - In the implementation block
-(id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6 ;
-(id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)hour;
-(int)minute;
-(int)second;
-(id)components;
-(void)_ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(int)dateType;
@end

