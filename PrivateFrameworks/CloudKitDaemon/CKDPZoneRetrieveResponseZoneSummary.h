/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, CKDPZone;

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying> {

	long long _assetQuotaUsage;
	long long _metadataQuotaUsage;
	NSData* _clientChangeToken;
	NSData* _currentServerContinuationToken;
	int _deviceCount;
	CKDPZone* _targetZone;
	SCD_Struct_CK11 _has;

}

@property (nonatomic,readonly) char hasTargetZone; 
@property (nonatomic,retain) CKDPZone * targetZone;                                 //@synthesize targetZone=_targetZone - In the implementation block
@property (nonatomic,readonly) char hasCurrentServerContinuationToken; 
@property (nonatomic,retain) NSData * currentServerContinuationToken;               //@synthesize currentServerContinuationToken=_currentServerContinuationToken - In the implementation block
@property (nonatomic,readonly) char hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                            //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (assign,nonatomic) char hasDeviceCount; 
@property (assign,nonatomic) int deviceCount;                                       //@synthesize deviceCount=_deviceCount - In the implementation block
@property (assign,nonatomic) char hasAssetQuotaUsage; 
@property (assign,nonatomic) long long assetQuotaUsage;                             //@synthesize assetQuotaUsage=_assetQuotaUsage - In the implementation block
@property (assign,nonatomic) char hasMetadataQuotaUsage; 
@property (assign,nonatomic) long long metadataQuotaUsage;                          //@synthesize metadataQuotaUsage=_metadataQuotaUsage - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)currentServerContinuationToken;
-(void)setTargetZone:(CKDPZone *)arg1 ;
-(void)setCurrentServerContinuationToken:(NSData *)arg1 ;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(char)hasTargetZone;
-(char)hasCurrentServerContinuationToken;
-(char)hasClientChangeToken;
-(void)setDeviceCount:(int)arg1 ;
-(void)setHasDeviceCount:(char)arg1 ;
-(char)hasDeviceCount;
-(void)setAssetQuotaUsage:(long long)arg1 ;
-(void)setHasAssetQuotaUsage:(char)arg1 ;
-(char)hasAssetQuotaUsage;
-(void)setMetadataQuotaUsage:(long long)arg1 ;
-(void)setHasMetadataQuotaUsage:(char)arg1 ;
-(char)hasMetadataQuotaUsage;
-(CKDPZone *)targetZone;
-(NSData *)clientChangeToken;
-(int)deviceCount;
-(long long)assetQuotaUsage;
-(long long)metadataQuotaUsage;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

