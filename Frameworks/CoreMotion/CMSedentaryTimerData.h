/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/NSSecureCoding.h>
#import <CoreMotion/NSCopying.h>

@class NSDate;

@interface CMSedentaryTimerData : NSObject <NSSecureCoding, NSCopying> {

	double fStartDate;
	double fFiredDate;
	int fAlarmType;
	char fDidWake;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * firedDate; 
@property (nonatomic,readonly) int alarmType; 
@property (nonatomic,readonly) char didWake; 
+(char)supportsSecureCoding;
-(id)initWithStartDate:(double)arg1 firedDate:(double)arg2 alarmType:(int)arg3 didWake:(char)arg4 ;
-(NSDate *)firedDate;
-(char)didWake;
-(int)alarmType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startDate;
@end

