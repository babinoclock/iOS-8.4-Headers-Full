/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar;

@interface _UIDatePickerChineseCalendar : NSCalendar {

	NSCalendar* realCalendar;

}

@property (assign) NSCalendar * realCalendar; 
+(id)cyclicalFromRelated:(id)arg1 ;
+(id)relatedFromCyclical:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned)arg3 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(void)setRealCalendar:(NSCalendar *)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(NSCalendar *)realCalendar;
-(NSRange)rangeOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned)arg1 ;
@end
