/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, ObjectUpdates, NSArray;

@interface ClockManager : NSObject {

	char _performingUpgrade;
	NSMutableArray* _scheduledLocalNotifications;
	ObjectUpdates* _localNotificationUpdates;
	char runningInSpringBoard;
	char runningInAssistantPlugin;
	char ignoringNotificationPostRequests;

}

@property (assign,getter=isRunningInSpringBoard,nonatomic) char runningInSpringBoard; 
@property (assign,getter=isRunningInAssistantPlugin,nonatomic) char runningInAssistantPlugin; 
@property (assign,getter=isIgnoringNotificationPostRequests,nonatomic) char ignoringNotificationPostRequests; 
@property (nonatomic,readonly) NSArray * scheduledLocalNotificationsCache; 
@property (nonatomic,readonly) ObjectUpdates * updatesToLocalNotificationsCache; 
+(void)loadUserPreferences;
+(void)saveAndNotifyForUserPreferences:(char)arg1 localNotifications:(char)arg2 ;
+(id)urlForClockAppSection:(int)arg1 ;
+(int)sectionFromClockAppURL:(id)arg1 ;
+(id)sharedManager;
-(void)dealloc;
-(void)scheduleLocalNotification:(id)arg1 ;
-(void)cancelLocalNotification:(id)arg1 ;
-(void)postUserPreferencesChangedNotification;
-(NSArray *)scheduledLocalNotificationsCache;
-(void)resetUpdatesToLocalNotificationsCache;
-(char)upgrade;
-(char)discardOldVersion;
-(char)isIgnoringNotificationPostRequests;
-(char)isRunningInSpringBoard;
-(char)isRunningInAssistantPlugin;
-(char)upgradeIfNeverAttempted;
-(void)refreshScheduledLocalNotificationsCache;
-(ObjectUpdates *)updatesToLocalNotificationsCache;
-(void)setRunningInSpringBoard:(char)arg1 ;
-(void)setRunningInAssistantPlugin:(char)arg1 ;
-(void)setIgnoringNotificationPostRequests:(char)arg1 ;
@end

