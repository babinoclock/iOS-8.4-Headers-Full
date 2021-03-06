/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FTServices/FTServices-Structs.h>
@interface FTEmbeddedReachability : NSObject {

	char localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
-(void)dealloc;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(char)connectionRequired;
-(int)currentReachabilityStatus;
@end

