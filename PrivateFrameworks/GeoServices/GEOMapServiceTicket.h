/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEOMapServiceTraits, GEOMapRegion;


@protocol GEOMapServiceTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@required
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(int)arg2 networkActivity:(/*^block*/id)arg3;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(int)arg2 networkActivity:(/*^block*/id)arg3;
-(void)applyToCorrectedSearch:(id)arg1;
-(GEOMapRegion *)resultBoundingRegion;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;

@end

