/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:57 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBBounceSettings : _UISettings {

	float _gravity;
	float _velocity;
	float _elasticity;
	float _friction;
	float _resistance;
	float _multiplier;
	float _minVelocityToAssist;
	float _maxVelocityToAssist;
	float _maxVelocityAssistance;

}

@property (assign) float gravity;                            //@synthesize gravity=_gravity - In the implementation block
@property (assign) float velocity;                           //@synthesize velocity=_velocity - In the implementation block
@property (assign) float elasticity;                         //@synthesize elasticity=_elasticity - In the implementation block
@property (assign) float friction;                           //@synthesize friction=_friction - In the implementation block
@property (assign) float resistance;                         //@synthesize resistance=_resistance - In the implementation block
@property (assign) float multiplier;                         //@synthesize multiplier=_multiplier - In the implementation block
@property (assign) float minVelocityToAssist;                //@synthesize minVelocityToAssist=_minVelocityToAssist - In the implementation block
@property (assign) float maxVelocityToAssist;                //@synthesize maxVelocityToAssist=_maxVelocityToAssist - In the implementation block
@property (assign) float maxVelocityAssistance;              //@synthesize maxVelocityAssistance=_maxVelocityAssistance - In the implementation block
-(float)minVelocityToAssist;
-(void)setMinVelocityToAssist:(float)arg1 ;
-(float)maxVelocityToAssist;
-(void)setMaxVelocityToAssist:(float)arg1 ;
-(float)maxVelocityAssistance;
-(void)setMaxVelocityAssistance:(float)arg1 ;
-(void)setMultiplier:(float)arg1 ;
-(void)setVelocity:(float)arg1 ;
-(void)setElasticity:(float)arg1 ;
-(void)setFriction:(float)arg1 ;
-(void)setResistance:(float)arg1 ;
-(void)setDefaultValues;
-(float)elasticity;
-(float)friction;
-(float)resistance;
-(float)velocity;
-(float)multiplier;
-(float)gravity;
-(void)setGravity:(float)arg1 ;
@end

