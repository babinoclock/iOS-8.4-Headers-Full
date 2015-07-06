/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, CKDPProtectionInfo, CKDPShareIdentifier;

@interface CKDPShareDeleteRequest : PBRequest <NSCopying> {

	NSString* _etag;
	CKDPProtectionInfo* _selfAddedPcs;
	CKDPShareIdentifier* _shareId;

}

@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                  //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) char hasSelfAddedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * selfAddedPcs;              //@synthesize selfAddedPcs=_selfAddedPcs - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEtag:(NSString *)arg1 ;
-(char)hasEtag;
-(NSString *)etag;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(char)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(void)setSelfAddedPcs:(CKDPProtectionInfo *)arg1 ;
-(char)hasSelfAddedPcs;
-(CKDPProtectionInfo *)selfAddedPcs;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

