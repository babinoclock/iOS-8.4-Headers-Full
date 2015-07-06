/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLNSTimerOperatorComposition;

@interface PLConfigAgent : PLAgent {

	PLNSTimerOperatorComposition* _timedTrigger;

}

@property (retain) PLNSTimerOperatorComposition * timedTrigger;              //@synthesize timedTrigger=_timedTrigger - In the implementation block
+(void)load;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
-(id)init;
-(void)log;
-(id)buildVersion;
-(id)deviceName;
-(void)initOperatorDependancies;
-(void)logEventNoneConfig;
-(id)hardwareModel;
-(id)crashReporterKey;
-(id)bootArgs;
-(int)autolockTime;
-(id)baseband;
-(id)basebandFirmware;
-(char)noWatchdogs;
-(char)disableCABlanking;
-(id)logAutomatedDeviceGroup;
-(id)trimmingConditionsForRolloverAtDate:(id)arg1 ;
-(PLNSTimerOperatorComposition *)timedTrigger;
-(void)setTimedTrigger:(PLNSTimerOperatorComposition *)arg1 ;
@end

