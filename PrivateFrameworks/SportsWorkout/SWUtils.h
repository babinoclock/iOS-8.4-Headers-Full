/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SWUtils : NSObject
+(void)resetLogs;
+(void)forDefault:(id)arg1 log:(id)arg2 ;
+(char)nikeUserDefaultsBoolForKey:(id)arg1 ;
+(id)nikeUserDefaultsNumberForKey:(id)arg1 ;
+(id)nikeUserDefaultsStringForKey:(id)arg1 ;
+(void)nikeUserDefaultsRemoveObjectForKey:(id)arg1 ;
+(void)nikeUserDefaultsSetString:(id)arg1 forKey:(id)arg2 ;
+(void)__logToFileForMessageType:(id)arg1 message:(id)arg2 arguments:(void*)arg3 ;
+(id)__dateStringForDate:(id)arg1 ;
+(void)setShouldLogToFilesInDirectory:(id)arg1 ;
+(void)setShouldUseNikeAppPreferenceKeyForLogging:(char)arg1 ;
+(void)log:(id)arg1 ;
+(void)ensureDirectoryExists:(id)arg1 ;
@end

