/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HKQueryClient <NSObject>
@optional
-(void)deliverHeartRate:(id)arg1 forQuery:(id)arg2;
-(void)deliverResultsBatch:(id)arg1 final:(char)arg2 error:(id)arg3 forQuery:(id)arg4;
-(void)dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
-(void)deliverStatistics:(id)arg1 forQuery:(id)arg2;
-(void)deliverCorrelations:(id)arg1 forQuery:(id)arg2;
-(void)deliverDataObjects:(id)arg1 withAnchor:(id)arg2 queryUUID:(id)arg3;
-(void)deliverSources:(id)arg1 forQuery:(id)arg2;
-(void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
-(void)deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
-(void)deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
-(void)deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
-(void)deliverSample:(id)arg1 forQuery:(id)arg2;

@required
-(void)deliverError:(id)arg1 forQuery:(id)arg2;

@end

