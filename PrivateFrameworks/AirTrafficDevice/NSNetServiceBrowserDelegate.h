/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSNetServiceBrowserDelegate <NSObject>
@optional
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
-(void)netServiceBrowserWillSearch:(id)arg1;
-(void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(char)arg3;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3;
-(void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(char)arg3;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(char)arg3;
-(void)netServiceBrowserDidStopSearch:(id)arg1;

@end
