/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBSLocalNotificationClient : NSObject
+(id)currentUserNotificationSettings;
+(void)registerUserNotificationSettings:(id)arg1 ;
+(void)scheduleLocalNotification:(id)arg1 ;
+(void)cancelLocalNotification:(id)arg1 ;
+(void)cancelAllLocalNotifications;
+(void)setScheduledLocalNotifications:(id)arg1 ;
+(id)scheduledLocalNotifications;
+(void)migrateUserNotificationSettingsForBundleIdentifierPushSettingsPairs:(id)arg1 ;
+(void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(char)arg3 ;
+(void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(char)arg3 ;
+(id)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 ;
+(id)currentUserNotificationSettingsForBundleID:(id)arg1 ;
+(void)_scheduleLocalNotifications:(id)arg1 cancel:(char)arg2 replace:(char)arg3 optionalBundleIdentifier:(id)arg4 waitUntilDone:(char)arg5 ;
+(void)_scheduleLocalNotifications:(id)arg1 cancel:(char)arg2 replace:(char)arg3 optionalBundleIdentifier:(id)arg4 ;
+(void)registerUserNotificationSettings:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)getPendingNotification;
+(void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 ;
+(void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 ;
+(void)cancelAllLocalNotificationsForBundleIdentifier:(id)arg1 ;
+(void)setScheduledLocalNotifications:(id)arg1 bundleIdentifier:(id)arg2 ;
+(unsigned)currentAllowedNotificationTypesForBundleID:(id)arg1 ;
@end

