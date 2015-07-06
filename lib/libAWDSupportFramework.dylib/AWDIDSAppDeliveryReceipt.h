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

@class NSString;

@interface AWDIDSAppDeliveryReceipt : PBCodable <NSCopying> {

	unsigned long long _isToDefaultPairedDevice;
	unsigned long long _messageSize;
	unsigned long long _priority;
	unsigned long long _rTT;
	unsigned long long _timestamp;
	NSString* _service;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasService; 
@property (nonatomic,retain) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) char hasIsToDefaultPairedDevice; 
@property (assign,nonatomic) unsigned long long isToDefaultPairedDevice;              //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) char hasMessageSize; 
@property (assign,nonatomic) unsigned long long messageSize;                          //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) char hasRTT; 
@property (assign,nonatomic) unsigned long long rTT;                                  //@synthesize rTT=_rTT - In the implementation block
@property (assign,nonatomic) char hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                             //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)priority;
-(char)hasTimestamp;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(unsigned long long)messageSize;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasService;
-(void)setIsToDefaultPairedDevice:(unsigned long long)arg1 ;
-(void)setHasIsToDefaultPairedDevice:(char)arg1 ;
-(char)hasIsToDefaultPairedDevice;
-(void)setHasPriority:(char)arg1 ;
-(char)hasPriority;
-(unsigned long long)isToDefaultPairedDevice;
-(void)setHasMessageSize:(char)arg1 ;
-(char)hasMessageSize;
-(void)setRTT:(unsigned long long)arg1 ;
-(void)setHasRTT:(char)arg1 ;
-(char)hasRTT;
-(unsigned long long)rTT;
@end

