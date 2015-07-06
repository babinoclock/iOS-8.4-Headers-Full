/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLService.h>

@class PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition, NSMutableDictionary;

@interface PLBLMDebugService : PLService {

	PLXPCListenerOperatorComposition* _xpcListenerBLMDebugTrigger;
	PLXPCResponderOperatorComposition* _xpcResponderBLMDebugQuery;
	PLEntryNotificationOperatorComposition* _ioreportCallback;
	PLEntryNotificationOperatorComposition* _processmonitorCallback;
	PLEntryNotificationOperatorComposition* _processnetworkCallback;
	PLEntryNotificationOperatorComposition* _wifiCallback;
	PLEntryNotificationOperatorComposition* _bbCallback;
	NSMutableDictionary* _triggers;

}

@property (retain) PLXPCListenerOperatorComposition * xpcListenerBLMDebugTrigger;                //@synthesize xpcListenerBLMDebugTrigger=_xpcListenerBLMDebugTrigger - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * xpcResponderBLMDebugQuery;                //@synthesize xpcResponderBLMDebugQuery=_xpcResponderBLMDebugQuery - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * ioreportCallback;                    //@synthesize ioreportCallback=_ioreportCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * processmonitorCallback;              //@synthesize processmonitorCallback=_processmonitorCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * processnetworkCallback;              //@synthesize processnetworkCallback=_processnetworkCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * wifiCallback;                        //@synthesize wifiCallback=_wifiCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbCallback;                          //@synthesize bbCallback=_bbCallback - In the implementation block
@property (retain) NSMutableDictionary * triggers;                                               //@synthesize triggers=_triggers - In the implementation block
+(void)load;
+(id)entryEventNoneDefinitions;
+(id)entryEventNoneDefinitionBLMDebug;
-(id)init;
-(NSMutableDictionary *)triggers;
-(void)setTriggers:(NSMutableDictionary *)arg1 ;
-(void)initOperatorDependancies;
-(void)registerTrigger:(id)arg1 ;
-(void)setXpcListenerBLMDebugTrigger:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setIoreportCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setProcessmonitorCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setProcessnetworkCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setWifiCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setBbCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)triggerLoggersNow:(id)arg1 ;
-(void)triggerSelectorAtDate:(id)arg1 withSelector:(SEL)arg2 withUseInfo:(id)arg3 ;
-(id)respondBLMDDebugQuery:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)wifiCallback;
-(PLEntryNotificationOperatorComposition *)ioreportCallback;
-(PLEntryNotificationOperatorComposition *)processmonitorCallback;
-(PLEntryNotificationOperatorComposition *)processnetworkCallback;
-(PLEntryNotificationOperatorComposition *)bbCallback;
-(id)logRailData:(id)arg1 withTriggerName:(id)arg2 inTimeRange:(PLTimeIntervalRange)arg3 ;
-(id)Testservice:(id)arg1 ;
-(PLXPCListenerOperatorComposition *)xpcListenerBLMDebugTrigger;
-(PLXPCResponderOperatorComposition *)xpcResponderBLMDebugQuery;
-(void)setXpcResponderBLMDebugQuery:(PLXPCResponderOperatorComposition *)arg1 ;
@end

