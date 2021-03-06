/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLRevGeoPlace : NSObject {

	NSMutableArray* _placeTypeInfoMap[15];
	char _isHome;

}

@property (assign,nonatomic) char isHome;              //@synthesize isHome=_isHome - In the implementation block
+(/*^block*/id)sortedAdditionalPlaceInfoComparator;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithGEOMapItem:(id)arg1 ;
-(id)bestPlaceInfoForOrderType:(unsigned)arg1 ;
-(id)placeInfosForOrderType:(unsigned)arg1 ;
-(char)isHome;
-(void)setIsHome:(char)arg1 ;
-(void)_mergeGEOMapItem:(id)arg1 ;
-(unsigned)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned)arg2 ;
-(void)_addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned)arg3 ;
-(void)_removePlacesInPlaceInfos:(id)arg1 fromOrderType:(unsigned)arg2 ;
-(id)_placeInfosForOrderType:(unsigned)arg1 createIfNeeded:(char)arg2 ;
@end

