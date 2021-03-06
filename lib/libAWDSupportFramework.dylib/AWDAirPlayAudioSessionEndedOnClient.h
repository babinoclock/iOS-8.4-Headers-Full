/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDAirPlayAudioSessionEndedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _duration;
	unsigned _futileRetransmits;
	int _reason;
	unsigned _retransmits;
	NSString* _sessionUUID;
	unsigned _slowKeepAlives;
	SCD_Struct_AW10 _has;

}

@property (nonatomic,readonly) char hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasSlowKeepAlives; 
@property (assign,nonatomic) unsigned slowKeepAlives;                   //@synthesize slowKeepAlives=_slowKeepAlives - In the implementation block
@property (assign,nonatomic) char hasRetransmits; 
@property (assign,nonatomic) unsigned retransmits;                      //@synthesize retransmits=_retransmits - In the implementation block
@property (assign,nonatomic) char hasFutileRetransmits; 
@property (assign,nonatomic) unsigned futileRetransmits;                //@synthesize futileRetransmits=_futileRetransmits - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)reason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setReason:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSessionUUID:(NSString *)arg1 ;
-(char)hasSessionUUID;
-(NSString *)sessionUUID;
-(void)setHasReason:(char)arg1 ;
-(char)hasReason;
-(void)setSlowKeepAlives:(unsigned)arg1 ;
-(void)setHasSlowKeepAlives:(char)arg1 ;
-(char)hasSlowKeepAlives;
-(void)setRetransmits:(unsigned)arg1 ;
-(void)setHasRetransmits:(char)arg1 ;
-(char)hasRetransmits;
-(void)setFutileRetransmits:(unsigned)arg1 ;
-(void)setHasFutileRetransmits:(char)arg1 ;
-(char)hasFutileRetransmits;
-(unsigned)slowKeepAlives;
-(unsigned)retransmits;
-(unsigned)futileRetransmits;
@end

