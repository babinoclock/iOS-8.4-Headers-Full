/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDHealthDataCollector <NSObject>
@property (assign) char disabled; 
@required
-(char)disabled;
-(void)setDisabled:(char)arg1;
-(void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
-(void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
-(void)collectionStoppedForType:(id)arg1;
-(void)updateHistoricalData;
-(id)dataCollectorDiagnosticDescription;

@end

