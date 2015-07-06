/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDWifiAssociation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _bssidOui;
	int _channel;
	int _deauthReason;
	NSData* _deauthSourceOui;
	unsigned _error;
	NSString* _security;
	int _signal;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char hasChannel; 
@property (assign,nonatomic) int channel;                               //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) char hasSignal; 
@property (assign,nonatomic) int signal;                                //@synthesize signal=_signal - In the implementation block
@property (nonatomic,readonly) char hasBssidOui; 
@property (nonatomic,retain) NSData * bssidOui;                         //@synthesize bssidOui=_bssidOui - In the implementation block
@property (nonatomic,readonly) char hasSecurity; 
@property (nonatomic,retain) NSString * security;                       //@synthesize security=_security - In the implementation block
@property (assign,nonatomic) char hasDeauthReason; 
@property (assign,nonatomic) int deauthReason;                          //@synthesize deauthReason=_deauthReason - In the implementation block
@property (nonatomic,readonly) char hasDeauthSourceOui; 
@property (nonatomic,retain) NSData * deauthSourceOui;                  //@synthesize deauthSourceOui=_deauthSourceOui - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)signal;
-(unsigned)error;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setError:(unsigned)arg1 ;
-(char)hasError;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasError:(char)arg1 ;
-(void)setBssidOui:(NSData *)arg1 ;
-(void)setSecurity:(NSString *)arg1 ;
-(void)setDeauthSourceOui:(NSData *)arg1 ;
-(void)setChannel:(int)arg1 ;
-(void)setHasChannel:(char)arg1 ;
-(char)hasChannel;
-(void)setSignal:(int)arg1 ;
-(void)setHasSignal:(char)arg1 ;
-(char)hasSignal;
-(char)hasBssidOui;
-(char)hasSecurity;
-(void)setDeauthReason:(int)arg1 ;
-(void)setHasDeauthReason:(char)arg1 ;
-(char)hasDeauthReason;
-(char)hasDeauthSourceOui;
-(int)channel;
-(NSData *)bssidOui;
-(NSString *)security;
-(int)deauthReason;
-(NSData *)deauthSourceOui;
@end
