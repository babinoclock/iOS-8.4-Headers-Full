/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString;

@interface CKDPIdentifier : PBCodable <NSCopying> {

	NSString* _name;
	int _type;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                     //@synthesize type=_type - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
@end

