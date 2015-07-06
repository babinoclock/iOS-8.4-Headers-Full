/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
+(id)createTableSQL;
+(int)protectionClass;
+(id)insertWorkoutEventWithWorkoutID:(id)arg1 date:(id)arg2 eventType:(int)arg3 database:(id)arg4 ;
+(id)workoutEventsWithWorkoutID:(id)arg1 database:(id)arg2 ;
+(char)insertWorkoutEventsFromWorkout:(id)arg1 entity:(id)arg2 database:(id)arg3 ;
+(id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1 ;
+(id)workoutEventsWithWorkoutID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)databaseTable;
@end

