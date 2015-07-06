/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TIDebugValue : NSObject {

	float defaultValue;
	float sweepValue;
	float sweepMin;
	float sweepMax;
	float stepSize;

}

@property (assign,nonatomic) float defaultValue; 
@property (assign,nonatomic) float sweepValue; 
@property (assign,nonatomic) float sweepMin; 
@property (assign,nonatomic) float sweepMax; 
@property (assign,nonatomic) float stepSize; 
-(float)defaultValue;
-(void)setDefaultValue:(float)arg1 ;
-(float)sweepValue;
-(void)setSweepValue:(float)arg1 ;
-(float)sweepMin;
-(void)setSweepMin:(float)arg1 ;
-(float)sweepMax;
-(void)setSweepMax:(float)arg1 ;
-(float)stepSize;
-(void)setStepSize:(float)arg1 ;
@end

