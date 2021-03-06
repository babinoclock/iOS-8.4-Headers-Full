/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SyndromeHandlerProtocol.h>
#import <SymptomEvaluator/ManagedEventInfoProtocol.h>

@class NSString, ManagedEventHandler, NSDate, DecisionDetails, NSArray;

@interface WiFiTriggerHandler : NSObject <ConfigurableObjectProtocol, SyndromeHandlerProtocol, ManagedEventInfoProtocol> {

	NSString* _syndromeName;
	char* _syndromeUTF8Name;
	ManagedEventHandler* _eventHandler;
	double _lastReportTime;
	NSString* _baseName;
	float _baseRTTAvg;
	float _baseRTTVar;
	float _baseRTTMin;
	float _newRTTAvg;
	float _newRTTVar;
	NSDate* _RTTTimestamp;
	id _wifiEpochObserver;
	id _cellEpochObserver;
	id _primaryInterfaceObserver;
	DecisionDetails* _detailsAwaitingRefuter;
	NSArray* _baselineDefaultRouteData;
	NSDate* _baslineDefaultRouteTimestamp;
	int _refuterAcitvationId;
	int _lastRefutePeriodTraffic;
	double _lastRefutePeriodDuration;
	NSDate* _lastRefutePeriodTimestamp;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
+(id)configure:(id)arg1 ;
+(void)_triggerAllowedByRSSI:(BOOL)arg1 receiptTimestamp:(id)arg2 ;
+(id)getHandlerByName:(id)arg1 ;
+(void)triggerAllowedByRSSI:(BOOL)arg1 receiptTimestamp:(id)arg2 ;
+(id)getNetScoreInfo;
-(id)init;
-(NSString *)description;
-(void)_reset;
-(int)configure:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)didReceiveSyndrome:(id)arg1 ;
-(int)_getARPFailureCount;
-(id)_getARPInfo;
-(id)_getDNSInfo;
-(id)_getAWDInfo:(id)arg1 ;
-(int)combineScoreARP:(int)arg1 DNS:(int)arg2 RTT:(int)arg3 flows:(int)arg4 polledFlows:(int)arg5 ;
-(id)_getNetScoreInfo;
-(int)_impactFromFlags:(unsigned)arg1 andFlows:(unsigned)arg2 ;
-(BOOL)insufficientRxTrafficDetectedFrom:(id)arg1 atTime:(id)arg2 To:(id)arg3 ;
-(void)dampeningStage:(id)arg1 ;
-(void)refuteStage:(id)arg1 ;
-(void)generateInfo:(/*^block*/id)arg1 ;
-(BOOL)noteSymptom:(id)arg1 ;
@end

