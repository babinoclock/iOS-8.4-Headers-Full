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

@class NSString;

@interface AWDWiProxLeAddServiceResult : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _result;
	NSString* _resultString;
	NSString* _serviceUUID;
	NSString* _sessionId;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) char hasServiceUUID; 
@property (nonatomic,retain) NSString * serviceUUID;                    //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,readonly) char hasResultString; 
@property (nonatomic,retain) NSString * resultString;                   //@synthesize resultString=_resultString - In the implementation block
@property (assign,nonatomic) char hasResult; 
@property (assign,nonatomic) unsigned result;                           //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)result;
-(char)hasResult;
-(void)setResult:(unsigned)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(NSString *)sessionId;
-(char)hasSessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasResult:(char)arg1 ;
-(void)setServiceUUID:(NSString *)arg1 ;
-(char)hasServiceUUID;
-(NSString *)serviceUUID;
-(void)setResultString:(NSString *)arg1 ;
-(char)hasResultString;
-(NSString *)resultString;
@end

