/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPConfigurationFieldValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _longValue;
	NSData* _bytesValue;
	NSMutableArray* _fieldValues;
	NSMutableArray* _listValues;
	NSString* _stringValue;
	int _type;
	char _boolValue;
	SCD_Struct_CK17 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                       //@synthesize bytesValue=_bytesValue - In the implementation block
@property (assign,nonatomic) char hasBoolValue; 
@property (assign,nonatomic) char boolValue;                            //@synthesize boolValue=_boolValue - In the implementation block
@property (assign,nonatomic) char hasLongValue; 
@property (assign,nonatomic) long long longValue;                       //@synthesize longValue=_longValue - In the implementation block
@property (assign,nonatomic) char hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                        //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * fieldValues;              //@synthesize fieldValues=_fieldValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * listValues;               //@synthesize listValues=_listValues - In the implementation block
-(char)boolValue;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)doubleValue;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(long long)longValue;
-(void)setBytesValue:(NSData *)arg1 ;
-(unsigned)listValuesCount;
-(void)clearListValues;
-(char)hasBytesValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(char)arg1 ;
-(char)hasDoubleValue;
-(char)hasStringValue;
-(NSData *)bytesValue;
-(NSMutableArray *)listValues;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(void)addFieldValues:(id)arg1 ;
-(void)addListValues:(id)arg1 ;
-(unsigned)fieldValuesCount;
-(void)clearFieldValues;
-(id)fieldValuesAtIndex:(unsigned)arg1 ;
-(id)listValuesAtIndex:(unsigned)arg1 ;
-(void)setBoolValue:(char)arg1 ;
-(void)setHasBoolValue:(char)arg1 ;
-(char)hasBoolValue;
-(void)setLongValue:(long long)arg1 ;
-(void)setHasLongValue:(char)arg1 ;
-(char)hasLongValue;
-(NSMutableArray *)fieldValues;
-(void)setFieldValues:(NSMutableArray *)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

