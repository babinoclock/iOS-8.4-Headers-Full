/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>

@class NSArray, RadioTrack, RadioStation, NSString;

@interface RURadioAVItem : MPAVItem {

	NSArray* _buyOffers;
	RadioTrack* _radioTrack;
	char _isInWishList;
	char _heartbeatInvalid;
	RadioStation* _station;
	NSString* _stationHash;
	NSString* _stationName;
	NSString* _stationStringID;
	long long _stationID;

}

@property (assign,nonatomic) char isInWishList;                                            //@synthesize isInWishList=_isInWishList - In the implementation block
@property (nonatomic,retain) RadioStation * station;                                       //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;                                     //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                                        //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationName;                                     //@synthesize stationName=_stationName - In the implementation block
@property (nonatomic,readonly) NSString * stationStringID;                                 //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,getter=isHeartbeatInvalid,nonatomic) char heartbeatInvalid;              //@synthesize heartbeatInvalid=_heartbeatInvalid - In the implementation block
@property (nonatomic,readonly) char _canUseStoreAdamIDForSubscriptionAdamID; 
-(long long)storeItemInt64ID;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(char)isCloudItem;
-(char)isValidPlayerSubstituteForItem:(id)arg1 ;
-(char)isExplicitTrack;
-(char)isStreamable;
-(id)mainTitle;
-(char)supportsSettingCurrentTime;
-(id)titlesForTime:(double)arg1 ;
-(id)chapterTimeMarkerForTime:(double)arg1 ;
-(id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2 ;
-(id)localizedPositionInPlaylistString;
-(void)_loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reevaluateType;
-(long long)albumStoreID;
-(id)buyOffers;
-(id)copyrightText;
-(char)isLikedStateEnabled;
-(char)supportsLikedState;
-(long long)storeSubscriptionAdamID;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(char)usesSubscriptionLease;
-(RadioStation *)station;
-(NSString *)stationStringID;
-(NSString *)stationHash;
-(long long)stationID;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)type;
-(id)title;
-(void)setStation:(RadioStation *)arg1 ;
-(void)setIsInWishList:(char)arg1 ;
-(char)isInWishList;
-(char)isRadioItem;
-(id)radioTrack;
-(unsigned long long)persistentID;
-(id)artist;
-(id)mediaItem;
-(id)album;
-(id)initWithRadioTrack:(id)arg1 ;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(void)_internalIsInWishlistDidChangeNotification:(id)arg1 ;
-(void)_applyLoudnessInfoForVolumeNormalization;
-(char)_canUseStoreAdamIDForSubscriptionAdamID;
-(id)aggregateDictionaryItemType;
-(unsigned)mpuReporting_itemType;
-(char)mpuReporting_shouldReportPlayEventsToStore;
-(id)mpuReporting_trackInfo;
-(void)addDerivedStationForArtist:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_beginUsingPlaybackLease;
-(char)isHeartbeatInvalid;
-(void)setHeartbeatInvalid:(char)arg1 ;
-(NSString *)stationName;
-(id)MPU_contentItemIdentifierCollection;
@end

