/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogFullOperators/PowerlogFullOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition;

@interface PLSyslogAgent : PLAgent {

	int kq;
	unsigned lastMessageID;
	unsigned syslogdPid;
	CFRunLoopSourceRef fileDescriptorSource;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;

}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;              //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
+(void)load;
+(id)defaults;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryAggregateDefinitions;
-(id)init;
-(void)log;
-(void)enumerateResultsOfASLQuery:(asl_object_sRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)logEventPointLogLine;
-(void)listenForSyslogDeath;
-(void)resetMessageIndex;
-(void)initOperatorDependancies;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
@end

