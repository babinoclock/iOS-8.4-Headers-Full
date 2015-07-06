/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionActivity : CMLogItem {

	CLMotionActivity fState;

}

@property (nonatomic,readonly) int confidence; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) char unknown; 
@property (nonatomic,readonly) char stationary; 
@property (nonatomic,readonly) char walking; 
@property (nonatomic,readonly) char running; 
@property (nonatomic,readonly) char automotive; 
@property (nonatomic,readonly) char cycling; 
+(char)supportsSecureCoding;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
-(char)unknown;
-(char)stationary;
-(char)walking;
-(char)automotive;
-(char)cycling;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)confidence;
-(char)running;
-(NSDate *)startDate;
@end

