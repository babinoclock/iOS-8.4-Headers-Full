/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData;

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {

	unsigned _maxChanges;
	NSData* _serverChangeToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasServerChangeToken; 
@property (nonatomic,retain) NSData * serverChangeToken;               //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) char hasMaxChanges; 
@property (assign,nonatomic) unsigned maxChanges;                      //@synthesize maxChanges=_maxChanges - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)serverChangeToken;
-(void)setServerChangeToken:(NSData *)arg1 ;
-(char)hasServerChangeToken;
-(void)setMaxChanges:(unsigned)arg1 ;
-(void)setHasMaxChanges:(char)arg1 ;
-(char)hasMaxChanges;
-(unsigned)maxChanges;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

