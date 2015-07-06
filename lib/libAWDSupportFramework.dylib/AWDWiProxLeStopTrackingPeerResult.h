/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDWiProxLeStopTrackingPeerResult : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _peerId;
	unsigned _result;
	NSString* _resultString;
	NSString* _sessionId;
	int _type;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) char hasPeerId; 
@property (nonatomic,retain) NSString * peerId;                         //@synthesize peerId=_peerId - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasResultString; 
@property (nonatomic,retain) NSString * resultString;                   //@synthesize resultString=_resultString - In the implementation block
@property (assign,nonatomic) char hasResult; 
@property (assign,nonatomic) unsigned result;                           //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)type;
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
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasResult:(char)arg1 ;
-(void)setPeerId:(NSString *)arg1 ;
-(void)setResultString:(NSString *)arg1 ;
-(char)hasPeerId;
-(char)hasResultString;
-(NSString *)peerId;
-(NSString *)resultString;
@end

