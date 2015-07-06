/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:51 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBHarmonicOscillator : NSObject {

	float A;
	float Z;
	float k;
	float dk;
	float mink;
	float m;
	float dm;
	float minm;
	float psi_n;
	float psi_d;
	float zeta;

}

@property (assign,nonatomic) float startingAmplitude; 
@property (assign,nonatomic) float endingAmplitude; 
@property (assign,nonatomic) float springStrength; 
@property (assign,nonatomic) float springDecay; 
@property (assign,nonatomic) float minimumSpringStrength; 
@property (assign,nonatomic) float mass; 
@property (assign,nonatomic) float massDecay; 
@property (assign,nonatomic) float minimumMass; 
-(void)updateParameters;
-(void)setSpringConstant:(float)arg1 ;
-(float)amplitudeForElapsedTime:(double)arg1 ;
-(float)startingAmplitude;
-(void)setStartingAmplitude:(float)arg1 ;
-(float)endingAmplitude;
-(void)setEndingAmplitude:(float)arg1 ;
-(float)springStrength;
-(void)setSpringStrength:(float)arg1 ;
-(float)springDecay;
-(void)setSpringDecay:(float)arg1 ;
-(float)minimumSpringStrength;
-(void)setMinimumSpringStrength:(float)arg1 ;
-(float)massDecay;
-(void)setMassDecay:(float)arg1 ;
-(float)minimumMass;
-(void)setMinimumMass:(float)arg1 ;
-(id)init;
-(void)setMass:(float)arg1 ;
-(float)mass;
@end

