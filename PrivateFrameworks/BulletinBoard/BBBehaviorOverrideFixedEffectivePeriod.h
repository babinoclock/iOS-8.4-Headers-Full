/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/BBBehaviorOverrideEffectivePeriod.h>

@class NSDate, NSUUID, NSString;

@interface BBBehaviorOverrideFixedEffectivePeriod : NSObject <BBBehaviorOverrideEffectivePeriod> {

	NSDate* _startDate;
	NSUUID* _identifier;
	double _effectiveInterval;

}

@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double effectiveInterval;              //@synthesize effectiveInterval=_effectiveInterval - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(char)containsDate:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)nextTransitionDateAfterDate:(id)arg1 ;
-(void)setEffectiveInterval:(double)arg1 ;
-(double)effectiveInterval;
-(id)initWithStartDate:(id)arg1 effectiveInterval:(double)arg2 identifier:(id)arg3 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
@end

