/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsSupport/NSCopying.h>

@class PBUnknownFields, MSPDroppedPin, NSString;

@interface MSPPinStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	MSPDroppedPin* _droppedPin;
	NSString* _identifier;
	int _type;
	SCD_Struct_MS1 _has;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasPosition; 
@property (assign,nonatomic) double position;                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasDroppedPin; 
@property (nonatomic,retain) MSPDroppedPin * droppedPin;                     //@synthesize droppedPin=_droppedPin - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasIdentifier;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(PBUnknownFields *)unknownFields;
-(char)hasPosition;
-(void)setDroppedPin:(MSPDroppedPin *)arg1 ;
-(void)setHasPosition:(char)arg1 ;
-(char)hasDroppedPin;
-(MSPDroppedPin *)droppedPin;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

