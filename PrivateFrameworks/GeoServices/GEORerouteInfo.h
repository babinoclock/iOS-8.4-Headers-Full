/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate;

@interface GEORerouteInfo : NSObject {

	double _distancePenalty;
	double _throttledReroutesPenalty;
	double _penalty;
	NSDate* _time;
	double _distanceFromDestination;

}

@property (nonatomic,readonly) double penalty;                            //@synthesize penalty=_penalty - In the implementation block
@property (nonatomic,retain) NSDate * time;                               //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double distanceFromDestination;              //@synthesize distanceFromDestination=_distanceFromDestination - In the implementation block
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
-(void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(char)arg3 destinationCoordinate:(SCD_Struct_GE15)arg4 numThrottledReroutes:(unsigned)arg5 ;
-(double)penalty;
-(double)distanceFromDestination;
-(void)setDistanceFromDestination:(double)arg1 ;
@end

