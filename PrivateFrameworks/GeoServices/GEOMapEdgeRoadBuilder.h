/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {

	deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> >* _edges;

}
-(void)dealloc;
-(SCD_Struct_GE110*)_firstJunction;
-(Matrix<float, 2, 1>)_firstPoint;
-(id)_firstTile;
-(SCD_Struct_GE110*)_lastJunction;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)_lastTile;
-(void)_buildCompleteEdge;
-(id)_tileFinderForMap:(id)arg1 center:(SCD_Struct_GE15)arg2 radius:(double)arg3 ;
-(char)_findEdgeAheadInTile:(id)arg1 ;
-(char)_findEdgeBehindInTile:(id)arg1 ;
-(id)initWithMap:(id)arg1 firstEdge:(const SCD_Struct_GE157*)arg2 ;
@end

