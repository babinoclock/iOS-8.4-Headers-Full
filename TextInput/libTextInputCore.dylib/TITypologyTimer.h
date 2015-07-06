/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TITypologyTimer : NSObject {

	char _foundFirstInput;
	double _elapsedTime;
	double _mostRecentTimestamp;
	double _maxTimeIntervalBetweenInputs;

}

@property (assign,nonatomic) double elapsedTime;                               //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double mostRecentTimestamp;                       //@synthesize mostRecentTimestamp=_mostRecentTimestamp - In the implementation block
@property (assign,nonatomic) double maxTimeIntervalBetweenInputs;              //@synthesize maxTimeIntervalBetweenInputs=_maxTimeIntervalBetweenInputs - In the implementation block
@property (assign,nonatomic) char foundFirstInput;                             //@synthesize foundFirstInput=_foundFirstInput - In the implementation block
-(double)elapsedTime;
-(char)foundFirstInput;
-(void)setMostRecentTimestamp:(double)arg1 ;
-(void)setFoundFirstInput:(char)arg1 ;
-(double)mostRecentTimestamp;
-(double)maxTimeIntervalBetweenInputs;
-(void)setElapsedTime:(double)arg1 ;
-(void)addInputEventWithTimestamp:(double)arg1 ;
-(void)setMaxTimeIntervalBetweenInputs:(double)arg1 ;
@end

