/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {

	unsigned _badgeCount;
	char _forDevice;
	SCD_Struct_CK5 _has;

}

@property (assign,nonatomic) char hasBadgeCount; 
@property (assign,nonatomic) unsigned badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) char hasForDevice; 
@property (assign,nonatomic) char forDevice;                   //@synthesize forDevice=_forDevice - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBadgeCount:(unsigned)arg1 ;
-(void)setHasBadgeCount:(char)arg1 ;
-(char)hasBadgeCount;
-(void)setForDevice:(char)arg1 ;
-(void)setHasForDevice:(char)arg1 ;
-(char)hasForDevice;
-(unsigned)badgeCount;
-(char)forDevice;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

