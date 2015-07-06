/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSSecureCoding.h>
#import <HealthKit/NSCopying.h>

@class NSDate;

@interface _HKTimePeriod : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(char)supportsSecureCoding;
+(id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(char)containsDate:(id)arg1 ;
-(char)endsBeforeDate:(id)arg1 ;
-(char)startsAfterDate:(id)arg1 ;
-(char)containsTimePeriod:(id)arg1 ;
-(char)overlapsTimePeriod:(id)arg1 ;
-(int)compareByStartDate:(id)arg1 ;
-(int)compareByEndDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end
