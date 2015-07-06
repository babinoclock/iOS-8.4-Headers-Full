/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@class NSHashTable;

@interface SUNetworkMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	NSHashTable* _observers;
	int _currentNetworkType;
	char _roaming;

}
+(id)sharedInstance;
+(char)holdsWiFiAssertion;
+(void)setHoldsWiFiAssertion:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(char)isCellularDataRoamingEnabled;
-(char)_isCurrentlyRoaming;
-(void)_initNetworkObservation;
-(int)_networkTypeFromFlags:(unsigned)arg1 ;
-(void)setCurrentNetworkType:(int)arg1 ;
-(int)currentNetworkType;
-(int)_networkTypeFromCurrentCellularData;
-(char)isNetworkTypeCellular:(int)arg1 ;
-(void)setCellularRoaming:(char)arg1 ;
-(void)_carrierBundleChanged;
-(void)_operatorBundleChanged;
-(char)isCellularRoaming;
@end
