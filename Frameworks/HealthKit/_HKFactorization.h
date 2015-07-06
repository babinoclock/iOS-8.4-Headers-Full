/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSCopying.h>
#import <HealthKit/NSSecureCoding.h>

@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {

	NSMapTable* _factors;

}
+(id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2 ;
+(id)factorization;
+(id)factorizationWithFactor:(id)arg1 exponent:(int)arg2 ;
+(id)factorizationWithFactorsAndExponents:(id)arg1 ;
+(char)supportsSecureCoding;
-(unsigned)factorCount;
-(id)anyFactor;
-(int)exponentForFactor:(id)arg1 ;
-(id)factorizationByRaisingToExponent:(int)arg1 ;
-(void)enumerateFactorsWithHandler:(/*^block*/id)arg1 ;
-(id)unitString;
-(void)_multiplyByFactor:(id)arg1 exponent:(int)arg2 ;
-(char)_hasSameFactorsAndExponentsAs:(id)arg1 ;
-(void)_multiplyByFactorization:(id)arg1 ;
-(id)reciprocal;
-(id)factorizationByMultiplying:(id)arg1 ;
-(void)_raiseToExponent:(int)arg1 ;
-(id)_allFactors;
-(int)_exponentForFactor:(id)arg1 ;
-(id)factorizationByDividing:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

