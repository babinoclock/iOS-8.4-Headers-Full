/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEORating : PBCodable <NSCopying> {

	double _maxScore;
	double _score;
	int _numberOfRatings;
	int _numberOfReviews;
	NSString* _provider;
	NSMutableArray* _reviews;
	NSString* _uRL;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasScore; 
@property (assign,nonatomic) double score;                          //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) char hasMaxScore; 
@property (assign,nonatomic) double maxScore;                       //@synthesize maxScore=_maxScore - In the implementation block
@property (assign,nonatomic) char hasNumberOfRatings; 
@property (assign,nonatomic) int numberOfRatings;                   //@synthesize numberOfRatings=_numberOfRatings - In the implementation block
@property (nonatomic,readonly) char hasProvider; 
@property (nonatomic,retain) NSString * provider;                   //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) char hasURL; 
@property (nonatomic,retain) NSString * uRL;                        //@synthesize uRL=_uRL - In the implementation block
@property (nonatomic,retain) NSMutableArray * reviews;              //@synthesize reviews=_reviews - In the implementation block
@property (assign,nonatomic) char hasNumberOfReviews; 
@property (assign,nonatomic) int numberOfReviews;                   //@synthesize numberOfReviews=_numberOfReviews - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)provider;
-(char)hasURL;
-(NSString *)uRL;
-(void)setProvider:(NSString *)arg1 ;
-(void)setReviews:(NSMutableArray *)arg1 ;
-(void)addReview:(id)arg1 ;
-(unsigned)reviewsCount;
-(void)clearReviews;
-(id)reviewAtIndex:(unsigned)arg1 ;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(void)setHasMaxScore:(char)arg1 ;
-(char)hasMaxScore;
-(void)setNumberOfRatings:(int)arg1 ;
-(void)setHasNumberOfRatings:(char)arg1 ;
-(char)hasNumberOfRatings;
-(char)hasProvider;
-(void)setNumberOfReviews:(int)arg1 ;
-(void)setHasNumberOfReviews:(char)arg1 ;
-(char)hasNumberOfReviews;
-(int)numberOfRatings;
-(NSMutableArray *)reviews;
-(int)numberOfReviews;
-(id)initWithPlaceDataRating:(id)arg1 reviews:(id)arg2 ;
-(id)initWithSampleSizeForUserRatingScore:(unsigned)arg1 normalizedUserRatingScore:(float)arg2 ;
-(double)score;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(char)arg1 ;
-(char)hasScore;
@end

