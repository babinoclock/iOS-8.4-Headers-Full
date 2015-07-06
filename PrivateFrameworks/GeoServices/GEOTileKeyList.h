/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/NSFastEnumeration.h>
#import <GeoServices/NSCopying.h>

@class GEOTileKeyMap;

@interface GEOTileKeyList : NSObject <NSFastEnumeration, NSCopying> {

	void* _head;
	void* _tail;
	GEOTileKeyMap* _map;
	unsigned _count;
	unsigned _maxCount;
	unsigned long _mutationsCount;

}
+(id)listFromXPCData:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_GE33*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addKey:(const GEOTileKey*)arg1 ;
-(char)intersectsList:(id)arg1 ;
-(id)sublistWithRange:(NSRange)arg1 ;
-(id)newXPCData;
-(char)removeKey:(const GEOTileKey*)arg1 ;
-(char)containsKey:(const GEOTileKey*)arg1 ;
-(id)initWithMaxCapacity:(unsigned)arg1 ;
-(void)_addKeyToBack:(const GEOTileKey*)arg1 ;
-(char)addKey:(const GEOTileKey*)arg1 lostKey:(GEOTileKey*)arg2 ;
-(id)copyWithMaxCapacity:(unsigned)arg1 ;
-(GEOTileKey*)firstKey;
-(unsigned)capacity;
-(id)listWithout:(id)arg1 ;
-(void)sort:(/*^block*/id)arg1 ;
-(void)removeKeysMatchingPredicate:(/*^block*/id)arg1 ;
@end

