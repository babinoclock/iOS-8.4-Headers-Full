/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDEventKitSyncIsNotifiableEvent : PBCodable <NSCopying> {

	unsigned long long _deltaProcessingTime;
	unsigned long long _deltaTransitTime;
	unsigned long long _timestamp;
	NSString* _reason;
	char _willTriggerNotification;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDeltaTransitTime; 
@property (assign,nonatomic) unsigned long long deltaTransitTime;                 //@synthesize deltaTransitTime=_deltaTransitTime - In the implementation block
@property (assign,nonatomic) char hasDeltaProcessingTime; 
@property (assign,nonatomic) unsigned long long deltaProcessingTime;              //@synthesize deltaProcessingTime=_deltaProcessingTime - In the implementation block
@property (assign,nonatomic) char hasWillTriggerNotification; 
@property (assign,nonatomic) char willTriggerNotification;                        //@synthesize willTriggerNotification=_willTriggerNotification - In the implementation block
@property (nonatomic,readonly) char hasReason; 
@property (nonatomic,retain) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)reason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDeltaTransitTime:(unsigned long long)arg1 ;
-(void)setHasDeltaTransitTime:(char)arg1 ;
-(char)hasDeltaTransitTime;
-(unsigned long long)deltaTransitTime;
-(char)hasReason;
-(void)setDeltaProcessingTime:(unsigned long long)arg1 ;
-(void)setHasDeltaProcessingTime:(char)arg1 ;
-(char)hasDeltaProcessingTime;
-(void)setWillTriggerNotification:(char)arg1 ;
-(void)setHasWillTriggerNotification:(char)arg1 ;
-(char)hasWillTriggerNotification;
-(unsigned long long)deltaProcessingTime;
-(char)willTriggerNotification;
@end

