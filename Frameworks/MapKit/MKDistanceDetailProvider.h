/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKLocationManagerObserver.h>

@class GEOPlace, NSString;

@interface MKDistanceDetailProvider : NSObject <MKLocationManagerObserver> {

	GEOPlace* _place;
	NSString* _distanceToPlace;
	char _useMetric;
	char _useYardsForShortDistances;
	/*^block*/id _updateHandler;

}

@property (retain) GEOPlace * place;                                //@synthesize place=_place - In the implementation block
@property (copy) id updateHandler;                                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)infoAvailable;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)beginUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)_handleLocaleChangeNotification:(id)arg1 ;
-(void)_updateDistanceToPlace;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)dealloc;
-(void)endUpdates;
-(void)setPlace:(GEOPlace *)arg1 ;
-(GEOPlace *)place;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end

