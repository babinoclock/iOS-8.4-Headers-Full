/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSData, CKDPProtectionInfo, CKDPShareIdentifier;

@interface CKDPShareTokenRetrieveResponse : PBCodable <NSCopying> {

	NSString* _container;
	int _containerEnvironment;
	NSString* _etag;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	int _participantState;
	int _participantType;
	int _permission;
	NSData* _protectedFullToken;
	CKDPProtectionInfo* _selfAddedPcs;
	CKDPShareIdentifier* _shareId;
	SCD_Struct_CK17 _has;

}

@property (nonatomic,readonly) char hasContainer; 
@property (nonatomic,retain) NSString * container;                           //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) char hasContainerEnvironment; 
@property (assign,nonatomic) int containerEnvironment;                       //@synthesize containerEnvironment=_containerEnvironment - In the implementation block
@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                  //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) char hasParticipantType; 
@property (assign,nonatomic) int participantType;                            //@synthesize participantType=_participantType - In the implementation block
@property (assign,nonatomic) char hasParticipantState; 
@property (assign,nonatomic) int participantState;                           //@synthesize participantState=_participantState - In the implementation block
@property (assign,nonatomic) char hasPermission; 
@property (assign,nonatomic) int permission;                                 //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) char hasSelfAddedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * selfAddedPcs;              //@synthesize selfAddedPcs=_selfAddedPcs - In the implementation block
@property (nonatomic,readonly) char hasProtectedFullToken; 
@property (nonatomic,retain) NSData * protectedFullToken;                    //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,readonly) char hasOwnerFirstName; 
@property (nonatomic,retain) NSString * ownerFirstName;                      //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,readonly) char hasOwnerLastName; 
@property (nonatomic,retain) NSString * ownerLastName;                       //@synthesize ownerLastName=_ownerLastName - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainer:(NSString *)arg1 ;
-(NSString *)container;
-(id)dictionaryRepresentation;
-(void)setEtag:(NSString *)arg1 ;
-(char)hasEtag;
-(NSString *)etag;
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(int)permission;
-(int)participantType;
-(NSData *)protectedFullToken;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(char)hasShareId;
-(char)hasProtectedFullToken;
-(CKDPShareIdentifier *)shareId;
-(void)setSelfAddedPcs:(CKDPProtectionInfo *)arg1 ;
-(char)hasSelfAddedPcs;
-(CKDPProtectionInfo *)selfAddedPcs;
-(void)setPermission:(int)arg1 ;
-(void)setHasPermission:(char)arg1 ;
-(char)hasPermission;
-(void)setOwnerFirstName:(NSString *)arg1 ;
-(void)setOwnerLastName:(NSString *)arg1 ;
-(char)hasContainer;
-(int)containerEnvironment;
-(void)setContainerEnvironment:(int)arg1 ;
-(void)setHasContainerEnvironment:(char)arg1 ;
-(char)hasContainerEnvironment;
-(void)setParticipantType:(int)arg1 ;
-(void)setHasParticipantType:(char)arg1 ;
-(char)hasParticipantType;
-(void)setParticipantState:(int)arg1 ;
-(void)setHasParticipantState:(char)arg1 ;
-(char)hasParticipantState;
-(char)hasOwnerFirstName;
-(char)hasOwnerLastName;
-(int)participantState;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
