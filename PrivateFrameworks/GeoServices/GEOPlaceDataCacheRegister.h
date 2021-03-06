/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOPlaceDataCacheRegister : NSObject {

	NSMutableDictionary* _caches;

}
+(void)setDiskCachePath:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)deletePhoneNumberMapping;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(id)cacheForProviderID:(int)arg1 ;
-(id)allCaches;
-(id)allCacheEntries;
-(void)evictAllEntries;
@end

