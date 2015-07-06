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

@interface AWDEventKitSyncCompletedNightlySync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _eventsSynced;
	char _success;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasSuccess; 
@property (assign,nonatomic) char success;                              //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) char hasEventsSynced; 
@property (assign,nonatomic) unsigned eventsSynced;                     //@synthesize eventsSynced=_eventsSynced - In the implementation block
-(char)success;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setSuccess:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSuccess:(char)arg1 ;
-(char)hasSuccess;
-(void)setEventsSynced:(unsigned)arg1 ;
-(void)setHasEventsSynced:(char)arg1 ;
-(char)hasEventsSynced;
-(unsigned)eventsSynced;
@end

