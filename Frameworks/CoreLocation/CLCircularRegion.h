/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion

@property (nonatomic,readonly) SCD_Struct_CL1 center; 
@property (nonatomic,readonly) double radius; 
+(id)circularRegionFromMapRegion:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithCenter:(SCD_Struct_CL1)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CL1)center;
-(double)radius;
-(char)containsCoordinate:(SCD_Struct_CL1)arg1 ;
@end

