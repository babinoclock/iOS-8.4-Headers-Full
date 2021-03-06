/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSLocale, NSTimeZone, NSArray;

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * calendarIdentifier; 
@property (copy) NSLocale * locale; 
@property (copy) NSTimeZone * timeZone; 
@property (assign) unsigned firstWeekday; 
@property (assign) unsigned minimumDaysInFirstWeek; 
@property (copy,readonly) NSArray * eraSymbols; 
@property (copy,readonly) NSArray * longEraSymbols; 
@property (copy,readonly) NSArray * monthSymbols; 
@property (copy,readonly) NSArray * shortMonthSymbols; 
@property (copy,readonly) NSArray * veryShortMonthSymbols; 
@property (copy,readonly) NSArray * standaloneMonthSymbols; 
@property (copy,readonly) NSArray * shortStandaloneMonthSymbols; 
@property (copy,readonly) NSArray * veryShortStandaloneMonthSymbols; 
@property (copy,readonly) NSArray * weekdaySymbols; 
@property (copy,readonly) NSArray * shortWeekdaySymbols; 
@property (copy,readonly) NSArray * veryShortWeekdaySymbols; 
@property (copy,readonly) NSArray * standaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * shortStandaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * veryShortStandaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * quarterSymbols; 
@property (copy,readonly) NSArray * shortQuarterSymbols; 
@property (copy,readonly) NSArray * standaloneQuarterSymbols; 
@property (copy,readonly) NSArray * shortStandaloneQuarterSymbols; 
@property (copy,readonly) NSString * AMSymbol; 
@property (copy,readonly) NSString * PMSymbol; 
+(id)__ck_currentCalendar;
+(void)__ck_setTestCalendar:(id)arg1 ;
+(id)_mapkit_gregorianCalendar;
+(id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1 ;
+(id)overlayCalendarForCalendarIdentifier:(id)arg1 timezone:(id)arg2 ;
+(id)CalGregorianGMTCalendar;
+(id)sharedAutoupdatingCurrentCalendar;
+(id)CalGregorianCalendarForTimeZone:(id)arg1 ;
+(id)autoupdatingCurrentCalendar;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)currentCalendar;
+(id)calendarWithIdentifier:(id)arg1 ;
-(unsigned)__ck_unitOfDisambiguityFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)_dateOnlyComponentsForDate:(id)arg1 ;
-(id)_timeOnlyComponentsForDate:(id)arg1 ;
-(char)date:(id)arg1 isSameDayAsDate:(id)arg2 ;
-(char)date:(id)arg1 isSameYearAsDate:(id)arg2 ;
-(id)_maps_offsetDate:(id)arg1 toTimeZone:(id)arg2 ;
-(char)_maps_isDateInToday:(id)arg1 inTimeZone:(id)arg2 ;
-(id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2 ;
-(int)hoursInDay;
-(int)secondsInMinute;
-(int)minutesInHour;
-(int)monthsInYearForDate:(id)arg1 ;
-(int)daysInWeek;
-(int)secondsInDay;
-(id)dateBySanityCheckingDateRoundedToDay:(id)arg1 ;
-(int)calendarDaysFromDate:(id)arg1 toDate:(id)arg2 ;
-(int)daysInMonthContainingDate:(id)arg1 ;
-(char)dateIsFirstOfMonth:(id)arg1 ;
-(char)dateIsFirstOfYear:(id)arg1 ;
-(id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2 ;
-(id)_dateOnlyComponentsForDate:(id)arg1 ;
-(id)_timeOnlyComponentsForDate:(id)arg1 ;
-(char)date:(id)arg1 isSameDayAsDate:(id)arg2 ;
-(char)date:(id)arg1 isSameYearAsDate:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long)_cfTypeID;
-(char)isDateInToday:(id)arg1 ;
-(char)isDateInTomorrow:(id)arg1 ;
-(char)isDateInYesterday:(id)arg1 ;
-(char)isDate:(id)arg1 inSameDayAsDate:(id)arg2 ;
-(int)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned)arg3 ;
-(void)setFirstWeekday:(unsigned)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned)arg1 ;
-(unsigned)ordinalityOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(char)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned)arg3 afterDate:(id)arg4 ;
-(char)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)gregorianStartDate;
-(void)setGregorianStartDate:(id)arg1 ;
-(id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned)arg3 ;
-(id)dateBySettingUnit:(unsigned)arg1 value:(int)arg2 ofDate:(id)arg3 options:(unsigned)arg4 ;
-(int)component:(unsigned)arg1 fromDate:(id)arg2 ;
-(id)dateBySettingHour:(int)arg1 minute:(int)arg2 second:(int)arg3 ofDate:(id)arg4 options:(unsigned)arg5 ;
-(void)getEra:(out int*)arg1 yearForWeekOfYear:(out int*)arg2 weekOfYear:(out int*)arg3 weekday:(out int*)arg4 fromDate:(id)arg5 ;
-(void)getHour:(out int*)arg1 minute:(out int*)arg2 second:(out int*)arg3 nanosecond:(out int*)arg4 fromDate:(id)arg5 ;
-(id)dateWithEra:(int)arg1 year:(int)arg2 month:(int)arg3 day:(int)arg4 hour:(int)arg5 minute:(int)arg6 second:(int)arg7 nanosecond:(int)arg8 ;
-(id)dateWithEra:(int)arg1 yearForWeekOfYear:(int)arg2 weekOfYear:(int)arg3 weekday:(int)arg4 hour:(int)arg5 minute:(int)arg6 second:(int)arg7 nanosecond:(int)arg8 ;
-(id)startOfDayForDate:(id)arg1 ;
-(id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2 ;
-(char)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned)arg3 ;
-(char)rangeOfWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3 ;
-(id)components:(unsigned)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned)arg4 ;
-(id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned)arg2 value:(int)arg3 options:(unsigned)arg4 ;
-(id)nextDateAfterDate:(id)arg1 matchingHour:(int)arg2 minute:(int)arg3 second:(int)arg4 options:(unsigned)arg5 ;
-(id)dateBySettingUnit:(unsigned)arg1 value:(int)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(id)dateBySettingHour:(int)arg1 minute:(int)arg2 second:(int)arg3 toDate:(id)arg4 options:(unsigned)arg5 ;
-(char)date:(id)arg1 matchesComponents:(id)arg2 ;
-(id)_copyLocale;
-(id)_copyTimeZone;
-(void)_setGregorianStartDate:(id)arg1 ;
-(id)_gregorianStartDate;
-(NSArray *)eraSymbols;
-(NSArray *)weekdaySymbols;
-(NSArray *)shortWeekdaySymbols;
-(NSArray *)longEraSymbols;
-(NSArray *)veryShortMonthSymbols;
-(NSArray *)veryShortStandaloneMonthSymbols;
-(NSArray *)veryShortWeekdaySymbols;
-(NSArray *)standaloneWeekdaySymbols;
-(NSArray *)shortStandaloneWeekdaySymbols;
-(NSArray *)veryShortStandaloneWeekdaySymbols;
-(NSArray *)quarterSymbols;
-(NSArray *)shortQuarterSymbols;
-(NSArray *)standaloneQuarterSymbols;
-(NSArray *)shortStandaloneQuarterSymbols;
-(SCD_Struct_NS11)_minimumRangeOfUnit:(unsigned)arg1 ;
-(SCD_Struct_NS11)_maximumRangeOfUnit:(unsigned)arg1 ;
-(SCD_Struct_NS11)_rangeOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forAT:(double)arg3 ;
-(long)_ordinalityOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forAT:(double)arg3 ;
-(unsigned char)_rangeOfUnit:(unsigned)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4 ;
-(unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char*)arg2 :(void*)arg3 ;
-(unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char*)arg2 :(void*)arg3 ;
-(unsigned char)_addComponents:(double*)arg1 :(unsigned long)arg2 :(const char*)arg3 :(void*)arg4 ;
-(unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long)arg3 :(const char*)arg4 :(void*)arg5 ;
-(NSRange)minimumRangeOfUnit:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned)arg3 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSString *)AMSymbol;
-(NSString *)PMSymbol;
-(NSTimeZone *)timeZone;
-(NSLocale *)locale;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(char)rangeOfUnit:(unsigned)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(unsigned)firstWeekday;
-(unsigned)minimumDaysInFirstWeek;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(NSRange)rangeOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned)arg1 ;
-(id)dateByAddingUnit:(unsigned)arg1 value:(int)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(void)getEra:(out int*)arg1 year:(out int*)arg2 month:(out int*)arg3 day:(out int*)arg4 fromDate:(id)arg5 ;
-(NSArray *)monthSymbols;
-(NSArray *)shortMonthSymbols;
-(NSArray *)standaloneMonthSymbols;
-(NSArray *)shortStandaloneMonthSymbols;
@end

