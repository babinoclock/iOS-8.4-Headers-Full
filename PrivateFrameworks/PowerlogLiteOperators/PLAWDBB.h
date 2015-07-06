/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition, NSDate;

@interface PLAWDBB : PLAWDAuxMetrics {

	PLEntryNotificationOperatorComposition* _bbProtocolRailCallback;
	PLEntryNotificationOperatorComposition* _bbEventCallback;
	PLEntryNotificationOperatorComposition* _accountingGroupEventCallback;
	PLEntryNotificationOperatorComposition* _iceStatsEventCallback;
	PLEntryNotificationOperatorComposition* _connectedPowerRailCallback;
	NSDate* _startTimeAppBB;
	NSDate* _startTimeBBLqm;
	unsigned _upBytes;
	unsigned _downBytes;
	PLEntryNotificationOperatorComposition* _bbLqmCellularActiveCallback;
	PLEntryNotificationOperatorComposition* _bbLqmCumulativeNetworkCallback;
	int _currQuality;
	int _newQuality;

}

@property (retain) PLEntryNotificationOperatorComposition * bbProtocolRailCallback;                      //@synthesize bbProtocolRailCallback=_bbProtocolRailCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbEventCallback;                             //@synthesize bbEventCallback=_bbEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * accountingGroupEventCallback;                //@synthesize accountingGroupEventCallback=_accountingGroupEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * iceStatsEventCallback;                       //@synthesize iceStatsEventCallback=_iceStatsEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * connectedPowerRailCallback;                  //@synthesize connectedPowerRailCallback=_connectedPowerRailCallback - In the implementation block
@property (retain) NSDate * startTimeAppBB;                                                              //@synthesize startTimeAppBB=_startTimeAppBB - In the implementation block
@property (retain) NSDate * startTimeBBLqm;                                                              //@synthesize startTimeBBLqm=_startTimeBBLqm - In the implementation block
@property (assign) unsigned upBytes;                                                                     //@synthesize upBytes=_upBytes - In the implementation block
@property (assign) unsigned downBytes;                                                                   //@synthesize downBytes=_downBytes - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbLqmCellularActiveCallback;                 //@synthesize bbLqmCellularActiveCallback=_bbLqmCellularActiveCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbLqmCumulativeNetworkCallback;              //@synthesize bbLqmCumulativeNetworkCallback=_bbLqmCumulativeNetworkCallback - In the implementation block
@property (assign) int currQuality;                                                                      //@synthesize currQuality=_currQuality - In the implementation block
@property (assign) int newQuality;                                                                       //@synthesize newQuality=_newQuality - In the implementation block
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitions;
+(id)entryAggregateDefinitionAwdBBQlm;
+(id)entryAggregateDefinitionAwdBBQlmCounter;
+(id)entryAggregateDefinitionAwdConnectedPower;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(char)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)startAppBB;
-(void)startConnectedPower;
-(void)startBBLqm;
-(void)startBBPower;
-(void)stopAppBB;
-(void)stopConnectedPower;
-(void)stopBBLqm;
-(void)submitAppBB:(id)arg1 withAwdConn:(id)arg2 ;
-(char)submitConnectedPower:(id)arg1 withAwdConn:(id)arg2 ;
-(void)submitBBLqm:(id)arg1 withAwdConn:(id)arg2 ;
-(void)resetAllBBLqmTables;
-(void)setStartTimeBBLqm:(NSDate *)arg1 ;
-(void)setUpBytes:(unsigned)arg1 ;
-(void)setDownBytes:(unsigned)arg1 ;
-(void)handleBBLqmCellularActiveCallback:(id)arg1 ;
-(void)setBbLqmCellularActiveCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleBBLqmCumulativeNetworkCallback:(id)arg1 ;
-(void)setBbLqmCumulativeNetworkCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)updateCurrLqmState;
-(PLEntryNotificationOperatorComposition *)bbLqmCellularActiveCallback;
-(PLEntryNotificationOperatorComposition *)bbLqmCumulativeNetworkCallback;
-(int)convertQualityWithLinkQuality:(double)arg1 ;
-(void)setNewQuality:(int)arg1 ;
-(int)newQuality;
-(void)setCurrQuality:(int)arg1 ;
-(void)updateLQMTableWithQuality:(int)arg1 withTime:(double)arg2 withRX:(double)arg3 withTX:(double)arg4 ;
-(double)getIntervalSinceLastUpdateWithEntryName:(id)arg1 ;
-(NSDate *)startTimeBBLqm;
-(void)finalizeTableWithEntry:(id)arg1 ;
-(int)currQuality;
-(unsigned)upBytes;
-(unsigned)downBytes;
-(void)resetBBLqmTable;
-(void)resetBBLqmCounterTable;
-(void)setStartTimeAppBB:(NSDate *)arg1 ;
-(NSDate *)startTimeAppBB;
-(void)resetConnectedPowerTable;
-(void)handleBBConnectedPowerRail:(id)arg1 ;
-(void)setConnectedPowerRailCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleBBRailCallbackWrapper:(id)arg1 ;
-(void)setBbProtocolRailCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleAcountGroupCallback:(id)arg1 ;
-(void)setAccountingGroupEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleIceStatsCallback:(id)arg1 ;
-(void)setIceStatsEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleBBRailCallbackBBProtocol:(id)arg1 ;
-(void)handleBBRailCallbackLTESleep:(id)arg1 ;
-(void)handleBBRailCallbackTxLte:(id)arg1 ;
-(void)handleBBRailCallbackTxCdma:(id)arg1 ;
-(void)handleBBRailCallbackTxEvdo:(id)arg1 ;
-(void)handleBBRailCallbackTxCdma2K:(id)arg1 ;
-(void)handleBBRailCallbackTxGsm:(id)arg1 ;
-(void)handleBBRailCallbackTxUtran:(id)arg1 ;
-(void)handleBBRailCallbackBBICE:(id)arg1 ;
-(void)handleBBRailCallbackBBTx:(id)arg1 ;
-(void)handleBBRailCallbackOos:(id)arg1 ;
-(void)stopBBPower;
-(PLEntryNotificationOperatorComposition *)bbProtocolRailCallback;
-(PLEntryNotificationOperatorComposition *)bbEventCallback;
-(void)setBbEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)accountingGroupEventCallback;
-(PLEntryNotificationOperatorComposition *)iceStatsEventCallback;
-(PLEntryNotificationOperatorComposition *)connectedPowerRailCallback;
@end
