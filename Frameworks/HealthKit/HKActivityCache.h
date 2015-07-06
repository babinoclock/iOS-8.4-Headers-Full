/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <HealthKit/NSCopying.h>

@class NSDateComponents, HKQuantity, NSDate;

@interface HKActivityCache : HKSample <NSCopying> {

	long long _cacheIndex;
	NSDateComponents* _dateComponents;
	int _stepCount;
	HKQuantity* _energyBurned;
	double _briskMinutes;
	double _activeHours;
	HKQuantity* _energyBurnedGoal;
	NSDate* _energyBurnedGoalDate;
	HKQuantity* _walkingAndRunningDistance;
	long long _activeEnergyBurnedAnchor;
	long long _activeHoursAnchor;
	long long _briskMinutesAnchor;
	long long _energyBurnedGoalAnchor;
	long long _stepCountAnchor;
	long long _walkingAndRunningDistanceAnchor;
	long long _workoutAnchor;
	unsigned _knownFields;

}

@property (readonly) NSDateComponents * dateComponents; 
@property (readonly) char hasDateComponents; 
@property (retain) HKQuantity * energyBurned; 
@property (readonly) char hasEnergyBurned; 
@property (assign) double briskMinutes; 
@property (readonly) char hasBriskMinutes; 
@property (assign) double activeHours; 
@property (readonly) char hasActiveHours; 
@property (retain) HKQuantity * energyBurnedGoal; 
@property (readonly) NSDate * energyBurnedGoalDate; 
@property (readonly) char hasEnergyBurnedGoal; 
@property (readonly) double briskMinutesGoal; 
@property (readonly) char hasBriskMinutesGoal; 
@property (readonly) double activeHoursGoal; 
@property (readonly) char hasActiveHoursGoal; 
@property (readonly) double energyBurnedGoalPercentage; 
@property (readonly) char hasEnergyBurnedGoalPercentage; 
@property (readonly) double briskMinutesGoalPercentage; 
@property (readonly) char hasBriskMinutesGoalPercentage; 
@property (readonly) double activeHoursGoalPercentage; 
@property (readonly) char hasActiveHoursGoalPercentage; 
@property (assign) int stepCount; 
@property (readonly) char hasStepCount; 
@property (retain) HKQuantity * walkingAndRunningDistance; 
@property (readonly) char hasWalkingAndRunningDistance; 
@property (assign) long long activeEnergyBurnedAnchor; 
@property (assign) long long activeHoursAnchor; 
@property (assign) long long briskMinutesAnchor; 
@property (assign) long long energyBurnedGoalAnchor; 
@property (assign) long long stepCountAnchor; 
@property (assign) long long walkingAndRunningDistanceAnchor; 
@property (assign) long long workoutAnchor; 
@property (assign) unsigned knownFields; 
@property (setter=_setCacheIndex:) long long cacheIndex; 
+(char)_isConcreteObjectClass;
+(id)_newActivityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 energyBurned:(id)arg4 energyBurnedGoal:(id)arg5 walkingAndRunningDistance:(id)arg6 metadata:(id)arg7 ;
+(id)_newActivityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 energyBurned:(id)arg4 briskMinutes:(double)arg5 activeHours:(double)arg6 energyBurnedGoal:(id)arg7 stepCount:(int)arg8 walkingAndRunningDistance:(id)arg9 metadata:(id)arg10 ;
+(id)_newActivityCacheWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 dateComponents:(id)arg4 ;
+(id)_activityCacheWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 cacheIndex:(long long)arg7 energyBurned:(id)arg8 briskMinutes:(double)arg9 activeHours:(double)arg10 stepCount:(int)arg11 walkingAndRunningDistance:(id)arg12 energyBurnedGoal:(id)arg13 ;
+(char)supportsSecureCoding;
+(id)_activityCacheWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 cacheIndex:(long long)arg7 energyBurned:(id)arg8 walkingAndRunningDistance:(id)arg9 energyBurnedGoal:(id)arg10 ;
-(id)_valueDescription;
-(char)_isEqualToActivityCache:(id)arg1 ;
-(void)_setEnergyBurnedGoal:(id)arg1 ;
-(double)energyBurnedGoalPercentage;
-(char)hasEnergyBurnedGoalPercentage;
-(double)briskMinutesGoalPercentage;
-(char)hasBriskMinutesGoalPercentage;
-(double)activeHoursGoalPercentage;
-(char)hasActiveHoursGoalPercentage;
-(char)hasDateComponents;
-(long long)_minAnchor;
-(void)_setAllAnchors:(long long)arg1 ;
-(unsigned)knownFields;
-(void)_setKnownFields:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDateComponents *)dateComponents;
-(int)stepCount;
-(void)_setCacheIndex:(long long)arg1 ;
-(void)_setActiveHours:(double)arg1 ;
-(void)_setEnergyBurned:(id)arg1 ;
-(void)_setEnergyBurnedGoalOnly:(id)arg1 ;
-(void)_setEnergyBurnedGoalDateOnly:(id)arg1 ;
-(void)_setBriskMinutes:(double)arg1 ;
-(void)_setStepCount:(int)arg1 ;
-(void)_setWalkingAndRunningDistance:(id)arg1 ;
-(void)_setActiveEnergyBurnedAnchor:(long long)arg1 ;
-(void)_setActiveHoursAnchor:(long long)arg1 ;
-(void)_setBriskMinutesAnchor:(long long)arg1 ;
-(void)_setEnergyBurnedGoalAnchor:(long long)arg1 ;
-(void)_setStepCountAnchor:(long long)arg1 ;
-(void)_setWalkingAndRunningDistanceAnchor:(long long)arg1 ;
-(void)_setWorkoutAnchor:(long long)arg1 ;
-(long long)cacheIndex;
-(char)hasActiveHoursGoal;
-(double)activeHoursGoal;
-(char)hasEnergyBurned;
-(HKQuantity *)energyBurned;
-(char)hasEnergyBurnedGoal;
-(HKQuantity *)energyBurnedGoal;
-(NSDate *)energyBurnedGoalDate;
-(char)hasBriskMinutesGoal;
-(double)briskMinutesGoal;
-(char)hasWalkingAndRunningDistance;
-(HKQuantity *)walkingAndRunningDistance;
-(char)hasActiveHours;
-(double)activeHours;
-(char)hasBriskMinutes;
-(double)briskMinutes;
-(char)hasStepCount;
-(long long)activeEnergyBurnedAnchor;
-(long long)activeHoursAnchor;
-(long long)briskMinutesAnchor;
-(long long)energyBurnedGoalAnchor;
-(long long)stepCountAnchor;
-(long long)walkingAndRunningDistanceAnchor;
-(long long)workoutAnchor;
-(double)_energyBurnedInKilocalories;
-(double)_energyBurnedGoalInKilocalories;
-(double)_walkingAndRunningDistanceInMeters;
-(void)_setEnergyBurnedGoal:(id)arg1 date:(id)arg2 ;
@end

