/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <Foundation/NSOperation.h>

@class NSError;

@interface RCTrimTimeRangeOperation : NSOperation {

	char _canSimulateTrimmingProgress;
	float _simulatedProgress;
	char _trimMode;
	/*^block*/id _progressUpdateBlock;
	SCD_Struct_RC4 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_RC4 timeRange;                         //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) char trimMode;                                    //@synthesize trimMode=_trimMode - In the implementation block
@property (nonatomic,copy) id progressUpdateBlock;                               //@synthesize progressUpdateBlock=_progressUpdateBlock - In the implementation block
@property (nonatomic,readonly) char success; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) double exportedDuration; 
@property (nonatomic,readonly) char progressShouldContinueUpdating; 
@property (nonatomic,readonly) double progress; 
-(void)start;
-(double)progress;
-(void)main;
-(SCD_Struct_RC4)timeRange;
-(float)_progress;
-(id)initWithTimeRange:(SCD_Struct_RC4)arg1 trimMode:(int)arg2 ;
-(char)trimMode;
-(id)progressUpdateBlock;
-(void)simulateTrimmingProgress;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(void)setCanSimulateTrimmingProgress:(char)arg1 ;
-(void)updateExportSessionProgressWithInterval:(double)arg1 ;
-(void)_postFinalProgressUpdateNotification;
-(char)progressShouldContinueUpdating;
@end

