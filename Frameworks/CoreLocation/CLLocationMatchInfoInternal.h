/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/NSCopying.h>

@interface CLLocationMatchInfoInternal : NSObject <NSCopying> {

	int fMatchQuality;
	SCD_Struct_CL1 fMatchCoordinate;
	double fMatchCourse;
	int fMatchFormOfWay;
	int fMatchRoadClass;
	char fMatchShifted;

}
-(id)initWithMatchQuality:(int)arg1 matchCoordinate:(SCD_Struct_CL1)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(char)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

