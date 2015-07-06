/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/NSSecureCoding.h>

@class NSDate, CLLocation;

@interface EKTravelPrediction : NSObject <NSSecureCoding> {

	NSDate* _departureDate;
	NSDate* _arrivalDate;
	CLLocation* _startingLocation;
	double _validRadius;
	NSDate* _predictionDate;
	double _ttl;

}

@property (nonatomic,readonly) NSDate * departureDate;                     //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                       //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) id<EKTravelAdvice> advice; 
@property (nonatomic,readonly) CLLocation * startingLocation;              //@synthesize startingLocation=_startingLocation - In the implementation block
@property (nonatomic,readonly) double validRadius;                         //@synthesize validRadius=_validRadius - In the implementation block
@property (nonatomic,readonly) NSDate * predictionDate;                    //@synthesize predictionDate=_predictionDate - In the implementation block
@property (nonatomic,readonly) double ttl;                                 //@synthesize ttl=_ttl - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 predictionDate:(id)arg4 pollAggressively:(char)arg5 ;
-(id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 validRadius:(double)arg4 predictionDate:(id)arg5 ttl:(double)arg6 ;
-(id<EKTravelAdvice>)advice;
-(NSDate *)predictionDate;
-(CLLocation *)startingLocation;
-(double)validRadius;
-(char)isExpiredWithLocation:(id)arg1 date:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)ttl;
-(NSDate *)departureDate;
-(NSDate *)arrivalDate;
@end

