/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _GEOPlaceDataCacheProxy <NSObject>
@required
-(void)setPlaceData:(id)arg1 forKey:(GEOTileKey)arg2;
-(void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2;
-(void)deletePhoneNumberMapping;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 onQueue:(id)arg3;
-(id)placeDataForMUID:(unsigned long long)arg1;
-(void)evictPlaceDataForMUID:(unsigned long long)arg1;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1;
-(id)allCacheEntries;
-(id)placeDataForKey:(GEOTileKey)arg1;
-(void)evictPlaceDataForKey:(GEOTileKey)arg1;
-(void)evictAllEntries;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2;

@end

