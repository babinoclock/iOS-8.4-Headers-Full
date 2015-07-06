/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDLBEndpointsFetchReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _connectionCellularFallbackCount;
	int _endpointsFetchTaskBadReplyCount;
	int _endpointsFetchTaskCount;
	int _endpointsFetchTaskFailureCount;
	int _endpointsFetchTaskSuccessCount;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasEndpointsFetchTaskCount; 
@property (assign,nonatomic) int endpointsFetchTaskCount;                          //@synthesize endpointsFetchTaskCount=_endpointsFetchTaskCount - In the implementation block
@property (assign,nonatomic) char hasEndpointsFetchTaskSuccessCount; 
@property (assign,nonatomic) int endpointsFetchTaskSuccessCount;                   //@synthesize endpointsFetchTaskSuccessCount=_endpointsFetchTaskSuccessCount - In the implementation block
@property (assign,nonatomic) char hasEndpointsFetchTaskFailureCount; 
@property (assign,nonatomic) int endpointsFetchTaskFailureCount;                   //@synthesize endpointsFetchTaskFailureCount=_endpointsFetchTaskFailureCount - In the implementation block
@property (assign,nonatomic) char hasEndpointsFetchTaskBadReplyCount; 
@property (assign,nonatomic) int endpointsFetchTaskBadReplyCount;                  //@synthesize endpointsFetchTaskBadReplyCount=_endpointsFetchTaskBadReplyCount - In the implementation block
@property (assign,nonatomic) char hasConnectionCellularFallbackCount; 
@property (assign,nonatomic) int connectionCellularFallbackCount;                  //@synthesize connectionCellularFallbackCount=_connectionCellularFallbackCount - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConnectionCellularFallbackCount:(int)arg1 ;
-(void)setHasConnectionCellularFallbackCount:(char)arg1 ;
-(char)hasConnectionCellularFallbackCount;
-(int)connectionCellularFallbackCount;
-(void)setEndpointsFetchTaskCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskCount:(char)arg1 ;
-(char)hasEndpointsFetchTaskCount;
-(void)setEndpointsFetchTaskSuccessCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskSuccessCount:(char)arg1 ;
-(char)hasEndpointsFetchTaskSuccessCount;
-(void)setEndpointsFetchTaskFailureCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskFailureCount:(char)arg1 ;
-(char)hasEndpointsFetchTaskFailureCount;
-(void)setEndpointsFetchTaskBadReplyCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskBadReplyCount:(char)arg1 ;
-(char)hasEndpointsFetchTaskBadReplyCount;
-(int)endpointsFetchTaskCount;
-(int)endpointsFetchTaskSuccessCount;
-(int)endpointsFetchTaskFailureCount;
-(int)endpointsFetchTaskBadReplyCount;
@end

