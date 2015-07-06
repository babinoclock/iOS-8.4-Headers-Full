/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDPushKeepAliveFailed : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _dualChannelState;
	int _error;
	NSString* _guid;
	int _linkQuality;
	SCD_Struct_AW9 _has;

}

@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) char hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) char hasError; 
@property (assign,nonatomic) int error;                                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                 //@synthesize dualChannelState=_dualChannelState - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)error;
-(char)hasTimestamp;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(char)hasGuid;
-(NSString *)guid;
-(void)setError:(int)arg1 ;
-(char)hasError;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasConnectionType:(char)arg1 ;
-(char)hasConnectionType;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(char)arg1 ;
-(char)hasLinkQuality;
-(void)setHasError:(char)arg1 ;
-(void)setDualChannelState:(unsigned)arg1 ;
-(void)setHasDualChannelState:(char)arg1 ;
-(char)hasDualChannelState;
-(int)linkQuality;
-(unsigned)dualChannelState;
@end

