/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationMatchInfo;

@interface CLLocationInternal : NSObject {

	SCD_Struct_CL2 fLocation;
	CLLocationMatchInfo* fMatchInfo;

}
-(id)initWithClientLocation:(SCD_Struct_CL11)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL11)arg1 matchInfo:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

