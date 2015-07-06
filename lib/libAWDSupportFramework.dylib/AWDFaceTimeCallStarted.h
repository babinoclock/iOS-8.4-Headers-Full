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

@interface AWDFaceTimeCallStarted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _isCallUpgrade;
	unsigned _isToEmail;
	unsigned _isToPhoneNumber;
	unsigned _isVideo;
	unsigned _onLockScreen;
	SCD_Struct_AW10 _has;

}

@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasIsToPhoneNumber; 
@property (assign,nonatomic) unsigned isToPhoneNumber;                  //@synthesize isToPhoneNumber=_isToPhoneNumber - In the implementation block
@property (assign,nonatomic) char hasIsToEmail; 
@property (assign,nonatomic) unsigned isToEmail;                        //@synthesize isToEmail=_isToEmail - In the implementation block
@property (assign,nonatomic) char hasIsCallUpgrade; 
@property (assign,nonatomic) unsigned isCallUpgrade;                    //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,nonatomic) char hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                          //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) char hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                     //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)isVideo;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(char)hasGuid;
-(NSString *)guid;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasIsVideo:(char)arg1 ;
-(char)hasIsVideo;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(void)setHasOnLockScreen:(char)arg1 ;
-(char)hasOnLockScreen;
-(unsigned)onLockScreen;
-(void)setIsCallUpgrade:(unsigned)arg1 ;
-(void)setHasIsCallUpgrade:(char)arg1 ;
-(char)hasIsCallUpgrade;
-(unsigned)isCallUpgrade;
-(void)setIsToPhoneNumber:(unsigned)arg1 ;
-(void)setHasIsToPhoneNumber:(char)arg1 ;
-(char)hasIsToPhoneNumber;
-(void)setIsToEmail:(unsigned)arg1 ;
-(void)setHasIsToEmail:(char)arg1 ;
-(char)hasIsToEmail;
-(unsigned)isToPhoneNumber;
-(unsigned)isToEmail;
@end

