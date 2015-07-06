/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeFinder.h>

@interface GEOMapEdgeRoadFinder : GEOMapEdgeFinder {

	unordered_set<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge> >* _roadsConsidered;

}
-(char)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE15)arg2 radius:(double)arg3 ;
@end

