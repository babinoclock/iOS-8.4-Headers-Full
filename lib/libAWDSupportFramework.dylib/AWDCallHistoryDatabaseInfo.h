/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDCallHistoryDatabaseInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _fetchLimit;
	unsigned _schema;
	unsigned _size;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasSize; 
@property (assign,nonatomic) unsigned size;                             //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) char hasFetchLimit; 
@property (assign,nonatomic) unsigned fetchLimit;                       //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) char hasSchema; 
@property (assign,nonatomic) unsigned schema;                           //@synthesize schema=_schema - In the implementation block
-(unsigned)schema;
-(unsigned)fetchLimit;
-(unsigned)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setFetchLimit:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasSize;
-(void)setHasSize:(char)arg1 ;
-(void)setHasFetchLimit:(char)arg1 ;
-(char)hasFetchLimit;
-(void)setSchema:(unsigned)arg1 ;
-(void)setHasSchema:(char)arg1 ;
-(char)hasSchema;
@end

