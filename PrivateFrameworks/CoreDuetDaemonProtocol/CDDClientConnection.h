/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDDXPCConnection, CDDebug;

@interface CDDClientConnection : NSObject {

	CDDXPCConnection* _connection;
	CDDebug* _debug;
	unsigned long long _clientId;

}

@property (readonly) CDDXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) CDDebug * debug;                            //@synthesize debug=_debug - In the implementation block
@property (readonly) unsigned long long clientId;                //@synthesize clientId=_clientId - In the implementation block
-(CDDebug *)debug;
-(id)init;
-(CDDXPCConnection *)connection;
-(char)appsLaunchedSince:(id)arg1 butNotPrewarmedSince:(id)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)bundleIdEntriesOlderThanDate:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)readLiveAppsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)registerTrendableApp:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)readTrendingAppsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)deleteBundleId:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)deleteAllDatabaseEntriesOlderThanDate:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)readSystemDataFromDevice:(unsigned)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)requestSystemDataFromDevice:(unsigned)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)requestAdmissionLogFromDevice:(unsigned)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)attributeNamesWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)poolNamesWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)idForAttribute:(id)arg1 clientId:(long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)idForPool:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)registerAttribute:(id)arg1 withType:(int)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)deleteDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)getDevicesWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)getDeviceFromDescription:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)broadcastSystemDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)setNonAppBundlId:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)attributeId:(unsigned long long)arg1 occurredWithValue:(id)arg2 cost:(long long)arg3 onDate:(id)arg4 risingEdge:(char)arg5 fallingEdge:(char)arg6 type:(int)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(char)attributeId:(unsigned long long)arg1 setCategory:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)attributeId:(unsigned long long)arg1 associateToBudgetId:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)deleteAttributeId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)attributeId:(unsigned long long)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 cost:(long long)arg6 onDate:(id)arg7 risingEdge:(char)arg8 fallingEdge:(char)arg9 error:(id*)arg10 replyHandler:(/*^block*/id)arg11 ;
-(char)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)budgetsForAttributeId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)remoteFocalAppWithId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)getLocalAppBundleId:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)bundleIdChange:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)attributeId:(unsigned long long)arg1 meteredWithValue:(id)arg2 costDictionary:(id)arg3 onDate:(id)arg4 risingEdge:(char)arg5 fallingEdge:(char)arg6 type:(int)arg7 meterToken:(unsigned long long)arg8 error:(id*)arg9 replyHandler:(/*^block*/id)arg10 ;
-(char)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(int)arg3 historyWindow:(id)arg4 deviceIdentifier:(id)arg5 temporalLeeway:(double)arg6 limitCount:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(char)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 deviceIdentifier:(id)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(char)attributeId:(unsigned long long)arg1 historyOfValue:(id)arg2 forWindow:(id)arg3 filter:(int)arg4 maximumElements:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)resetAttributeId:(unsigned long long)arg1 type:(int)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)setAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)resetAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)requestForecastFromDevice:(unsigned)arg1 attributeId:(unsigned long long)arg2 value:(id)arg3 historyWindow:(id)arg4 format:(int)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)readRemoteRequestResult:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)requestStatisticFromDevice:(unsigned)arg1 attributeId:(unsigned long long)arg2 statistic:(int)arg3 historyWindow:(id)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(char)setManualType:(unsigned long long)arg1 type:(char)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)incrementPool:(unsigned long long)arg1 incrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)decrementPool:(unsigned long long)arg1 decrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)compareAndSwapPool:(unsigned long long)arg1 compareValue:(long long)arg2 swapValue:(long long)arg3 type:(unsigned long long)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(char)deletePool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 maxFraction:(double)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(id)messageWithError:(id*)arg1 ;
-(char)sendMessageWithType:(int)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)sendMessageWithType:(int)arg1 nameKey:(id)arg2 name:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)sendMessageWithType:(int)arg1 valueKey1:(id)arg2 uint64Value1:(unsigned long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)sendMessageWithType:(int)arg1 valueKey:(id)arg2 uint64Value:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)sendMessageWithType:(int)arg1 valueKey1:(id)arg2 int64Value1:(long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 valueKey3:(id)arg6 uint64Value3:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(char)sendMessageWithType:(int)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)sendMessageWithType:(int)arg1 nameKey:(id)arg2 name:(id)arg3 typeField:(unsigned long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)sendMessageWithType:(int)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 type:(unsigned long long)arg6 integerId:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(char)versionWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)message:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(char)deregisterTrendableApp:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)setDebugBitmap:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)idForAttribute:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(int)arg3 historyWindow:(id)arg4 limitCount:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)readPool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(unsigned long long)clientId;
@end
