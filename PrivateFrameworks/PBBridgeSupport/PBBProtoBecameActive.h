/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <PBBridgeSupport/NSCopying.h>

@interface PBBProtoBecameActive : PBCodable <NSCopying> {

	char _wantsConfirmation;

}

@property (assign,nonatomic) char wantsConfirmation;              //@synthesize wantsConfirmation=_wantsConfirmation - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setWantsConfirmation:(char)arg1 ;
-(char)wantsConfirmation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

