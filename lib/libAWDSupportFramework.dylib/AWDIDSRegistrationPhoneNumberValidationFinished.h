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

@interface AWDIDSRegistrationPhoneNumberValidationFinished : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _numberOfSMSSent;
	int _registrationError;
	unsigned _validationDuration;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasRegistrationError; 
@property (assign,nonatomic) int registrationError;                     //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) char hasValidationDuration; 
@property (assign,nonatomic) unsigned validationDuration;               //@synthesize validationDuration=_validationDuration - In the implementation block
@property (assign,nonatomic) char hasNumberOfSMSSent; 
@property (assign,nonatomic) unsigned numberOfSMSSent;                  //@synthesize numberOfSMSSent=_numberOfSMSSent - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(char)hasGuid;
-(NSString *)guid;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRegistrationError:(int)arg1 ;
-(void)setHasRegistrationError:(char)arg1 ;
-(char)hasRegistrationError;
-(int)registrationError;
-(void)setValidationDuration:(unsigned)arg1 ;
-(void)setHasValidationDuration:(char)arg1 ;
-(char)hasValidationDuration;
-(void)setNumberOfSMSSent:(unsigned)arg1 ;
-(void)setHasNumberOfSMSSent:(char)arg1 ;
-(char)hasNumberOfSMSSent;
-(unsigned)validationDuration;
-(unsigned)numberOfSMSSent;
@end

