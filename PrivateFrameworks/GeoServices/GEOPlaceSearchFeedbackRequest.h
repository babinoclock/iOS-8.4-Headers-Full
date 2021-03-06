/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {

	SCD_Struct_GE2 _sessionGUID;
	long long _businessID;
	double _timestamp;
	int _feedbackType;
	int _localSearchProviderID;
	int _numberOfResults;
	int _positionInResults;
	int _sequenceNumber;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasSessionGUID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionGUID;                 //@synthesize sessionGUID=_sessionGUID - In the implementation block
@property (assign,nonatomic) char hasBusinessID; 
@property (assign,nonatomic) long long businessID;                       //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) char hasFeedbackType; 
@property (assign,nonatomic) int feedbackType;                           //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic) char hasNumberOfResults; 
@property (assign,nonatomic) int numberOfResults;                        //@synthesize numberOfResults=_numberOfResults - In the implementation block
@property (assign,nonatomic) char hasPositionInResults; 
@property (assign,nonatomic) int positionInResults;                      //@synthesize positionInResults=_positionInResults - In the implementation block
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                         //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) char hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                  //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(char)hasTimestamp;
-(char)hasFeedbackType;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(int)sequenceNumber;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(char)arg1 ;
-(char)hasLocalSearchProviderID;
-(int)localSearchProviderID;
-(void)setSessionGUID:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionGUID:(char)arg1 ;
-(char)hasSessionGUID;
-(SCD_Struct_GE2)sessionGUID;
-(void)setBusinessID:(long long)arg1 ;
-(void)setHasBusinessID:(char)arg1 ;
-(void)setFeedbackType:(int)arg1 ;
-(void)setHasFeedbackType:(char)arg1 ;
-(void)setNumberOfResults:(int)arg1 ;
-(void)setHasNumberOfResults:(char)arg1 ;
-(char)hasNumberOfResults;
-(void)setPositionInResults:(int)arg1 ;
-(void)setHasPositionInResults:(char)arg1 ;
-(char)hasPositionInResults;
-(int)feedbackType;
-(int)numberOfResults;
-(int)positionInResults;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasBusinessID;
-(long long)businessID;
@end

