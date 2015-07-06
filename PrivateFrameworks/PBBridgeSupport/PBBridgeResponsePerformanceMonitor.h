/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface PBBridgeResponsePerformanceMonitor : NSObject {

	NSMutableArray* _measurements;
	NSMutableDictionary* _milestones;
	NSMutableDictionary* _macroActivities;
	NSArray* _remoteMeasurements;
	NSDictionary* _remoteMilestones;
	NSDictionary* _remoteMacroActivities;

}

@property (nonatomic,readonly) NSMutableArray * measurements;                      //@synthesize measurements=_measurements - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * milestones;                   //@synthesize milestones=_milestones - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * macroActivities;              //@synthesize macroActivities=_macroActivities - In the implementation block
@property (nonatomic,retain) NSArray * remoteMeasurements;                         //@synthesize remoteMeasurements=_remoteMeasurements - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteMilestones;                      //@synthesize remoteMilestones=_remoteMilestones - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteMacroActivities;                 //@synthesize remoteMacroActivities=_remoteMacroActivities - In the implementation block
+(id)shareMonitor;
-(void)_logMeasurements;
-(void)_logMacroActivitiesLocal:(char)arg1 ;
-(void)_logMilestones;
-(void)_logLocalMeasurements:(char)arg1 ;
-(void)beginMonitorTransaction;
-(void)endMonitorTransaction;
-(void)addMeasurement:(double)arg1 timeSent:(double)arg2 activityType:(id)arg3 activityIdentifier:(id)arg4 ;
-(void)addMilestone:(double)arg1 activityType:(id)arg2 activityIdentifier:(id)arg3 ;
-(void)beginMacroActivity:(id)arg1 beginTime:(double)arg2 ;
-(double)endMacroActivity:(id)arg1 beginTime:(double)arg2 ;
-(NSMutableArray *)measurements;
-(NSMutableDictionary *)milestones;
-(NSMutableDictionary *)macroActivities;
-(NSArray *)remoteMeasurements;
-(void)setRemoteMeasurements:(NSArray *)arg1 ;
-(NSDictionary *)remoteMilestones;
-(void)setRemoteMilestones:(NSDictionary *)arg1 ;
-(NSDictionary *)remoteMacroActivities;
-(void)setRemoteMacroActivities:(NSDictionary *)arg1 ;
@end

