/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXSubsystem : NSObject
+(char)shouldProcessMessageForLogs;
+(char)shouldIncludeBacktraceInLogs;
+(char)shouldLogToFile;
+(id)identifier;
+(void)initialize;
+(int)defaultLogLevel;
+(id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2 ;
+(int)effectiveLogLevel;
+(id)subsystems;
+(id)errorWithDescription:(id)arg1 ;
+(id)wrapError:(id)arg1 description:(id)arg2 ;
+(void)setPreferredLogLevel:(int)arg1 ;
+(void)resetPreferredLogLevel;
+(char)willLog;
+(void)setShouldLogToFile:(char)arg1 ;
@end

