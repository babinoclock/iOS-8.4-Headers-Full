/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:52 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBDaemonHandler : NSObject
+(id)stateDescription;
+(char)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3 ;
+(void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2 ;
+(void)noteDaemonCanceled:(id)arg1 ;
+(void)initialize;
@end

