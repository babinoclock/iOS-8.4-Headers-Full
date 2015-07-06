/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@interface CKDPUserAvailableQuotaResponse : PBCodable <NSCopying> {

	unsigned long long _storageAvailableBytes;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) char hasStorageAvailableBytes; 
@property (assign,nonatomic) unsigned long long storageAvailableBytes;              //@synthesize storageAvailableBytes=_storageAvailableBytes - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStorageAvailableBytes:(unsigned long long)arg1 ;
-(void)setHasStorageAvailableBytes:(char)arg1 ;
-(char)hasStorageAvailableBytes;
-(unsigned long long)storageAvailableBytes;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

