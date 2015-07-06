/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class HKQuantity, HKQuantityType;

@interface _HKQuantityFilter : _HKFilter {

	HKQuantity* _comparisonQuantity;
	HKQuantityType* _dataType;
	unsigned _operatorType;

}

@property (nonatomic,readonly) HKQuantity * comparisonQuantity;              //@synthesize comparisonQuantity=_comparisonQuantity - In the implementation block
@property (nonatomic,readonly) HKQuantityType * dataType;                    //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned operatorType;                        //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithOperatorType:(unsigned)arg1 comparisonQuantity:(id)arg2 dataType:(id)arg3 ;
+(char)supportsSecureCoding;
-(HKQuantityType *)dataType;
-(unsigned)operatorType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)acceptsDataObject:(id)arg1 ;
-(HKQuantity *)comparisonQuantity;
@end

