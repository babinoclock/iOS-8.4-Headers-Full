/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCJCOPRestrictedModeEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _log;
	char _contactless;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasContactless; 
@property (assign,nonatomic) char contactless;                          //@synthesize contactless=_contactless - In the implementation block
@property (nonatomic,readonly) char hasLog; 
@property (nonatomic,retain) NSData * log;                              //@synthesize log=_log - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)log;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLog:(NSData *)arg1 ;
-(void)setContactless:(char)arg1 ;
-(void)setHasContactless:(char)arg1 ;
-(char)hasContactless;
-(char)hasLog;
-(char)contactless;
@end

