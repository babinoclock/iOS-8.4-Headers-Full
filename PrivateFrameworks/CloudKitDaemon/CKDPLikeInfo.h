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

@interface CKDPLikeInfo : PBCodable <NSCopying> {

	int _likeCount;
	char _likedByCurrentUser;
	SCD_Struct_CK5 _has;

}

@property (assign,nonatomic) char hasLikeCount; 
@property (assign,nonatomic) int likeCount;                           //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) char hasLikedByCurrentUser; 
@property (assign,nonatomic) char likedByCurrentUser;                 //@synthesize likedByCurrentUser=_likedByCurrentUser - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLikeCount:(int)arg1 ;
-(void)setHasLikeCount:(char)arg1 ;
-(char)hasLikeCount;
-(void)setLikedByCurrentUser:(char)arg1 ;
-(void)setHasLikedByCurrentUser:(char)arg1 ;
-(char)hasLikedByCurrentUser;
-(int)likeCount;
-(char)likedByCurrentUser;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

