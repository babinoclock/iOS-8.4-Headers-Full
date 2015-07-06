/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FALogging : NSObject {

	NSObject*<OS_dispatch_queue> _logQueue;
	char _logToFile;
	char _logToSyslog;

}
+(id)sharedLogger;
-(id)init;
-(void)logMessageWithFormat:(id)arg1 args:(void*)arg2 ;
-(void)_reloadLogPreferences;
@end

