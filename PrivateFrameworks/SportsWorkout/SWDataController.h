/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSPersistentStoreCoordinator, NSManagedObjectContext, NSDictionary;

@interface SWDataController : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _isPerformingMigration;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	int _priorMigrationVersionKey;

}

@property (nonatomic,readonly) NSDictionary * achievements; 
+(id)sharedDataController;
-(void)dealloc;
-(id)init;
-(void)performMigrationIfNecessary;
-(NSDictionary *)achievements;
-(id)calibrationDataForSensorSerialNumber:(id)arg1 walkCalibrationDate:(id*)arg2 runCalibrationDate:(id*)arg3 ;
-(void)setCalibrationData:(id)arg1 forSensorSerialNumber:(id)arg2 date:(id)arg3 isWalk:(char)arg4 ;
-(id)allWorkouts;
-(id)_snapshotForDictionary:(id)arg1 ;
-(void)_removeSnapshotForWorkout:(id)arg1 ;
-(id)_runWorkoutFileName;
-(void)_saveRunWorkoutToDatabase:(id)arg1 xmlFileName:(id)arg2 ;
-(void)_saveRunAchievementsToDatabase:(id)arg1 forPreset:(id)arg2 sensorSerialNumber:(id)arg3 ;
-(void)_saveRunWorkout:(id)arg1 preset:(id)arg2 ;
-(void)_notifyDataStoreChanged;
-(id)_entitiesOfTypeName:(id)arg1 forPropertyName:(id)arg2 values:(id)arg3 ;
-(void)_deleteXMLFileForWorkout:(id)arg1 ;
-(char)_workoutIsSynced:(id)arg1 ;
-(id)_dictionaryForWorkoutRecord:(id)arg1 ;
-(id)_allWorkoutsWithSyncState:(int)arg1 ;
-(id)_pathOfSnapshotForWorkout:(id)arg1 ;
-(id)_achievementsForName:(id)arg1 sensorSerialNumber:(id)arg2 ;
-(void)_setAchievementWithAchievementList:(id)arg1 entryName:(id)arg2 achievementName:(id)arg3 sensorSerialNumber:(id)arg4 value:(id)arg5 ;
-(void)_replaceValueIfSmaller:(id)arg1 forAchievementName:(id)arg2 sensorSerialNumber:(id)arg3 ;
-(void)_replaceValueIfLarger:(id)arg1 forAchievementName:(id)arg2 sensorSerialNumber:(id)arg3 ;
-(void)_addValue:(id)arg1 toAchievementName:(id)arg2 sensorSerialNumber:(id)arg3 ;
-(id)_onQueue_achievements;
-(id)_onQueue_calibrationDataForSensorSerialNumber:(id)arg1 walkCalibrationDate:(id*)arg2 runCalibrationDate:(id*)arg3 ;
-(void)_setCalibrationData:(id)arg1 forSensorSerialNumber:(id)arg2 walkCalibrationDate:(id)arg3 runCalibrationDate:(id)arg4 ;
-(id)_databasePropertiesForName:(id)arg1 ;
-(id)_plistForDatabaseProperty:(id)arg1 ;
-(void)_databaseProperty:(id)arg1 setName:(id)arg2 andIntegerValue:(int)arg3 ;
-(void)_fixupDatabase;
-(void)_migrateCalibrationData;
-(void)_migrateWorkoutData;
-(void)_migrateBests;
-(void)_migrateTotals;
-(id)_entitiesOfTypeName:(id)arg1 forPropertyName:(id)arg2 isNull:(char)arg3 ;
-(void)_importWorkoutFilesFromDirectory:(id)arg1 ;
-(void)saveRunWorkout:(id)arg1 preset:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)deleteWorkoutForGUID:(id)arg1 ;
-(void)deleteAllWorkouts;
-(id)syncedWorkouts;
-(id)unsyncedWorkouts;
-(id)latestWorkout;
-(void)saveWorkoutSnapshot:(id)arg1 preset:(id)arg2 ;
-(void)importExistingWorkoutSnapshotsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)clearAchievementForName:(id)arg1 ;
@end

