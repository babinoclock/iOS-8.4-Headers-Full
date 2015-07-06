/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <StoreServices/NSCopying.h>

@class NSString, NSData;

@interface SSVPBPlayActivityEvent : PBCodable <NSCopying> {

	double _eventDateTimestamp;
	double _eventSecondsFromGMT;
	double _itemDuration;
	double _itemEndTime;
	double _itemStartTime;
	long long _persistentID;
	unsigned long long _storeAccountID;
	NSString* _containerID;
	int _containerType;
	NSString* _deviceName;
	int _endReasonType;
	NSString* _externalID;
	NSString* _featureName;
	int _itemType;
	int _mediaType;
	NSString* _personalizedContainerID;
	NSData* _recommendationData;
	int _sourceType;
	NSString* _storeID;
	NSData* _timedMetadata;
	NSData* _trackInfo;
	char _offline;
	char _sBEnabled;
	SCD_Struct_SS23 _has;

}

@property (nonatomic,readonly) char hasContainerID; 
@property (nonatomic,retain) NSString * containerID;                          //@synthesize containerID=_containerID - In the implementation block
@property (assign,nonatomic) char hasContainerType; 
@property (assign,nonatomic) int containerType;                               //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,readonly) char hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                           //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) char hasEndReasonType; 
@property (assign,nonatomic) int endReasonType;                               //@synthesize endReasonType=_endReasonType - In the implementation block
@property (assign,nonatomic) char hasEventDateTimestamp; 
@property (assign,nonatomic) double eventDateTimestamp;                       //@synthesize eventDateTimestamp=_eventDateTimestamp - In the implementation block
@property (assign,nonatomic) char hasEventSecondsFromGMT; 
@property (assign,nonatomic) double eventSecondsFromGMT;                      //@synthesize eventSecondsFromGMT=_eventSecondsFromGMT - In the implementation block
@property (nonatomic,readonly) char hasExternalID; 
@property (nonatomic,retain) NSString * externalID;                           //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) char hasFeatureName; 
@property (nonatomic,retain) NSString * featureName;                          //@synthesize featureName=_featureName - In the implementation block
@property (assign,nonatomic) char hasItemDuration; 
@property (assign,nonatomic) double itemDuration;                             //@synthesize itemDuration=_itemDuration - In the implementation block
@property (assign,nonatomic) char hasItemEndTime; 
@property (assign,nonatomic) double itemEndTime;                              //@synthesize itemEndTime=_itemEndTime - In the implementation block
@property (assign,nonatomic) char hasItemStartTime; 
@property (assign,nonatomic) double itemStartTime;                            //@synthesize itemStartTime=_itemStartTime - In the implementation block
@property (assign,nonatomic) char hasItemType; 
@property (assign,nonatomic) int itemType;                                    //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) char hasMediaType; 
@property (assign,nonatomic) int mediaType;                                   //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) char hasOffline; 
@property (assign,nonatomic) char offline;                                    //@synthesize offline=_offline - In the implementation block
@property (assign,nonatomic) char hasPersistentID; 
@property (assign,nonatomic) long long persistentID;                          //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) char hasPersonalizedContainerID; 
@property (nonatomic,retain) NSString * personalizedContainerID;              //@synthesize personalizedContainerID=_personalizedContainerID - In the implementation block
@property (assign,nonatomic) char hasSBEnabled; 
@property (assign,nonatomic) char sBEnabled;                                  //@synthesize sBEnabled=_sBEnabled - In the implementation block
@property (assign,nonatomic) char hasSourceType; 
@property (assign,nonatomic) int sourceType;                                  //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) char hasStoreAccountID; 
@property (assign,nonatomic) unsigned long long storeAccountID;               //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,readonly) char hasStoreID; 
@property (nonatomic,retain) NSString * storeID;                              //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) char hasTimedMetadata; 
@property (nonatomic,retain) NSData * timedMetadata;                          //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,readonly) char hasTrackInfo; 
@property (nonatomic,retain) NSData * trackInfo;                              //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,readonly) char hasRecommendationData; 
@property (nonatomic,retain) NSData * recommendationData;                     //@synthesize recommendationData=_recommendationData - In the implementation block
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSData *)timedMetadata;
-(NSString *)storeID;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(NSString *)containerID;
-(void)setContainerID:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSData *)recommendationData;
-(long long)persistentID;
-(void)setHasMediaType:(char)arg1 ;
-(char)hasMediaType;
-(unsigned long long)storeAccountID;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(void)setItemType:(int)arg1 ;
-(int)mediaType;
-(int)itemType;
-(void)setMediaType:(int)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(int)containerType;
-(double)itemEndTime;
-(int)endReasonType;
-(double)itemDuration;
-(NSString *)personalizedContainerID;
-(double)itemStartTime;
-(NSData *)trackInfo;
-(char)hasContainerID;
-(char)hasContainerType;
-(char)hasDeviceName;
-(char)hasEndReasonType;
-(char)hasEventDateTimestamp;
-(double)eventDateTimestamp;
-(char)hasEventSecondsFromGMT;
-(double)eventSecondsFromGMT;
-(char)hasExternalID;
-(char)hasFeatureName;
-(char)hasItemDuration;
-(char)hasItemEndTime;
-(char)hasItemStartTime;
-(char)hasItemType;
-(char)hasOffline;
-(char)offline;
-(char)hasPersistentID;
-(char)hasPersonalizedContainerID;
-(char)hasRecommendationData;
-(char)hasSBEnabled;
-(char)sBEnabled;
-(char)hasSourceType;
-(char)hasStoreAccountID;
-(char)hasStoreID;
-(char)hasTimedMetadata;
-(char)hasTrackInfo;
-(void)setContainerType:(int)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setEndReasonType:(int)arg1 ;
-(void)setEventDateTimestamp:(double)arg1 ;
-(void)setEventSecondsFromGMT:(double)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setItemDuration:(double)arg1 ;
-(void)setItemEndTime:(double)arg1 ;
-(void)setItemStartTime:(double)arg1 ;
-(void)setOffline:(char)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setPersonalizedContainerID:(NSString *)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(void)setSBEnabled:(char)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSData *)arg1 ;
-(void)setHasContainerType:(char)arg1 ;
-(void)setHasEndReasonType:(char)arg1 ;
-(void)setHasEventDateTimestamp:(char)arg1 ;
-(void)setHasEventSecondsFromGMT:(char)arg1 ;
-(void)setHasItemDuration:(char)arg1 ;
-(void)setHasItemEndTime:(char)arg1 ;
-(void)setHasItemStartTime:(char)arg1 ;
-(void)setHasItemType:(char)arg1 ;
-(void)setHasOffline:(char)arg1 ;
-(void)setHasPersistentID:(char)arg1 ;
-(void)setHasSBEnabled:(char)arg1 ;
-(void)setHasSourceType:(char)arg1 ;
-(void)setHasStoreAccountID:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)featureName;
@end

