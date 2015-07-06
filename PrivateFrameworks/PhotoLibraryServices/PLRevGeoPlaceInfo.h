/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSString, NSSet;

@interface PLRevGeoPlaceInfo : NSObject {

	NSMutableSet* _geoPlaceInfos;
	NSString* _placeName;

}

@property (nonatomic,copy,readonly) NSString * placeName;                 //@synthesize placeName=_placeName - In the implementation block
@property (nonatomic,retain,readonly) NSSet * geoPlaceInfos;              //@synthesize geoPlaceInfos=_geoPlaceInfos - In the implementation block
-(void)dealloc;
-(NSString *)placeName;
-(NSSet *)geoPlaceInfos;
-(id)initWithPlaceName:(id)arg1 ;
-(void)addPlaceInfo:(id)arg1 ;
@end

