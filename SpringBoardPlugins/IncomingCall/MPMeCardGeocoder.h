/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PCPersistentTimer;

@interface MPMeCardGeocoder : NSObject {

	void* _addressBook;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _addresses;
	PCPersistentTimer* _networkPreferencesTimeoutTimer;

}

@property (assign) char isActivelyUsing; 
+(id)sharedMeCardGeocoder;
-(void)dealloc;
-(id)init;
-(void)_addressBookChanged;
-(void*)addressBook;
-(char)isActivelyUsing;
-(char)_unschedulePerformGeocodesWakeTaskIfEarlierThan:(id)arg1 ;
-(char)_isNetworkAvailable;
-(void)_doWork;
-(void)_scheduleNextGeocode;
-(void)_unscheduleLongTermRebuild;
-(void)_rebuildAddressArray;
-(void)_networkPreferencesLoaded;
-(void)scheduleNextGeocode;
-(void)_saveGeoCache;
-(void)_schedulePerformGeocodesTaskWithStartWakeTime:(id)arg1 dropDeadWakeTime:(id)arg2 ;
-(id)_dateOfOldestAddress;
-(void)_scheduleLongTermRebuild;
-(void)scheduleImmediateGeocode;
-(id)currentValidLocations;
-(void)setIsActivelyUsing:(char)arg1 ;
@end

