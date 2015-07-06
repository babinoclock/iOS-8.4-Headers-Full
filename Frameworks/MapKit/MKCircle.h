/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <MapKit/MKOverlay.h>

@class NSString;

@interface MKCircle : MKShape <MKOverlay> {

	SCD_Struct_MK1 _coordinate;
	double _radius;
	SCD_Struct_MK2 _boundingMapRect;

}

@property (nonatomic,readonly) SCD_Struct_MK1 coordinate;                   //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                               //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK2 boundingMapRect;              //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(id)circleWithCenterCoordinate:(SCD_Struct_MK1)arg1 radius:(double)arg2 ;
+(id)circleWithMapRect:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)boundingMapRect;
-(char)intersectsMapRect:(SCD_Struct_MK2)arg1 ;
-(id)_initWithCenterCoordinate:(SCD_Struct_MK1)arg1 radius:(double)arg2 ;
-(double)radius;
-(SCD_Struct_MK1)coordinate;
@end

