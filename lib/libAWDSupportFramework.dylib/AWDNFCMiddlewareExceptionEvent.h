/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDNFCMiddlewareExceptionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _errorCode;
	unsigned _type;
	unsigned _version;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                        //@synthesize errorCode=_errorCode - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setType:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(unsigned)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasVersion:(char)arg1 ;
-(char)hasVersion;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
