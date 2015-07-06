/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetAdmissionControlLog.framework/CoreDuetAdmissionControlLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WeakPowerLogInterface : NSObject {

	void* _PLLib;
	/*function pointer*/void* _PLBatteryLifeMonitorLogCoreDuetEvent;
	/*function pointer*/void* _PLBatteryLifeMonitorLogCoreDuetAdmissionEvent;
	/*function pointer*/void* _PLBatteryLifeMonitorLogCoreDuetPredictionEvents;

}

@property (assign) void* PLLib;                                                                            //@synthesize PLLib=_PLLib - In the implementation block
@property (assign) /*function pointer*/void* PLBatteryLifeMonitorLogCoreDuetEvent;                         //@synthesize PLBatteryLifeMonitorLogCoreDuetEvent=_PLBatteryLifeMonitorLogCoreDuetEvent - In the implementation block
@property (assign) /*function pointer*/void* PLBatteryLifeMonitorLogCoreDuetAdmissionEvent;                //@synthesize PLBatteryLifeMonitorLogCoreDuetAdmissionEvent=_PLBatteryLifeMonitorLogCoreDuetAdmissionEvent - In the implementation block
@property (assign) /*function pointer*/void* PLBatteryLifeMonitorLogCoreDuetPredictionEvents;              //@synthesize PLBatteryLifeMonitorLogCoreDuetPredictionEvents=_PLBatteryLifeMonitorLogCoreDuetPredictionEvents - In the implementation block
-(void)dealloc;
-(id)init;
-(void)logCoreDuetEventForClient:(unsigned long long)arg1 attributeID:(unsigned long long)arg2 attribute:(id)arg3 updateType:(unsigned)arg4 sequenceNumber:(unsigned long long)arg5 event:(unsigned)arg6 value:(id)arg7 cellIn:(unsigned long long)arg8 cellOut:(unsigned long long)arg9 wifiIn:(unsigned long long)arg10 wifiOut:(unsigned long long)arg11 ;
-(void)logCoreDuetAdmissionCheckForClient:(unsigned long long)arg1 attributeID:(unsigned long long)arg2 attribute:(id)arg3 value:(id)arg4 sequenceNumber:(unsigned long long)arg5 probability:(double)arg6 threshold:(double)arg7 BON:(unsigned long long)arg8 reason:(id)arg9 admitted:(char)arg10 ableID:(unsigned long long)arg11 ;
-(void*)PLLib;
-(void)setPLLib:(void*)arg1 ;
-(/*function pointer*/void*)PLBatteryLifeMonitorLogCoreDuetEvent;
-(void)setPLBatteryLifeMonitorLogCoreDuetEvent:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)PLBatteryLifeMonitorLogCoreDuetAdmissionEvent;
-(void)setPLBatteryLifeMonitorLogCoreDuetAdmissionEvent:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)PLBatteryLifeMonitorLogCoreDuetPredictionEvents;
-(void)setPLBatteryLifeMonitorLogCoreDuetPredictionEvents:(/*function pointer*/void*)arg1 ;
@end

