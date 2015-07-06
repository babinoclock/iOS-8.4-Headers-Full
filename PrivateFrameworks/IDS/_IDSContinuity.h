/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class CUTWeakReference, NSObject, NSString;

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol> {

	id _delegateContext;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	int _state;

}

@property (readonly) int state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)state;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 delegateContext:(id)arg3 ;
-(void)startAdvertisingOfType:(int)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopAdvertisingOfType:(int)arg1 ;
-(void)startScanningForType:(int)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 ;
-(void)startScanningForType:(int)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopScanningForType:(int)arg1 ;
-(void)startTrackingPeer:(id)arg1 forType:(int)arg2 ;
-(void)stopTrackingPeer:(id)arg1 forType:(int)arg2 ;
-(void)continuityDidUpdateState:(int)arg1 ;
-(void)continuityDidLosePeer:(id)arg1 ;
-(void)continuityDidLosePeer:(id)arg1 forType:(int)arg2 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 forType:(int)arg2 error:(id)arg3 ;
-(void)continuityDidStopTrackingPeer:(id)arg1 ;
-(void)continuityDidStopTrackingPeer:(id)arg1 forType:(int)arg2 ;
-(void)continuityDidStartAdvertisingOfType:(int)arg1 ;
-(void)continuityDidStopAdvertisingOfType:(int)arg1 ;
-(void)continuityDidFailToStartAdvertisingOfType:(int)arg1 withError:(id)arg2 ;
-(void)continuityDidStartScanningForType:(int)arg1 ;
-(void)continuityDidStopScanningForType:(int)arg1 ;
-(void)continuityDidFailToStartScanningForType:(int)arg1 withError:(id)arg2 ;
-(void)continuityDidDiscoverType:(int)arg1 withData:(id)arg2 fromPeer:(id)arg3 ;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)_handleReconnect;
-(void)_daemonDied:(id)arg1 ;
@end

