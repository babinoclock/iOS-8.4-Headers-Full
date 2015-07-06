/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItem.h>
#import <MediaPlayer/NSCoding.h>
#import <MediaPlayer/NSCopying.h>
#import <MediaPlayer/MPMediaItemArrayPIDEncodableItem.h>
#import <MediaPlayer/MPCacheableConcreteMediaEntity.h>

@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary, NSString;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying, MPMediaItemArrayPIDEncodableItem, MPCacheableConcreteMediaEntity> {

	MPMediaLibrary* _library;
	unsigned long long _persistentID;
	MPConcreteMediaEntityPropertiesCache* _propertiesCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues; 
+(id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2 ;
+(id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 ;
+(char)supportsSecureCoding;
-(id)mediaLibrary;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)cachedValueForProperty:(id)arg1 isCached:(char*)arg2 ;
-(id)valuesForProperties:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(char)arg2 ;
-(char)didSkipWithPlayedToTime:(double)arg1 ;
-(void)incrementPlayCountForPlayingToEnd;
-(char)incrementPlayCountForStopTime:(double)arg1 ;
-(void)invalidateCachedProperties;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(Class)itemArrayCoderPIDDataCodingClass;
-(void)markNominalAmountHasBeenPlayed;
-(void)incrementSkipCount;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(double)nominalHasBeenPlayedThreshold;
-(id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3 ;
-(id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(char*)arg2 ;
-(void)reallyIncrementPlayCount;
-(id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 ;
-(MPConcreteMediaEntityPropertiesCache *)cachedPropertyValues;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)valueForProperty:(id)arg1 ;
-(unsigned long long)persistentID;
-(char)existsInLibrary;
-(char)setValue:(id)arg1 forProperty:(id)arg2 ;
@end

