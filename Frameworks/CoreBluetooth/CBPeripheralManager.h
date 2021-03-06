/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBPairingAgentParentDelegate.h>
#import <CoreBluetooth/CBXpcConnectionDelegate.h>

@protocol CBPeripheralManagerDelegate;
@class CBXpcConnection, CBPairingAgent, NSMapTable, NSMutableArray, NSMutableDictionary, NSLock, NSString;

@interface CBPeripheralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {

	id<CBPeripheralManagerDelegate> _delegate;
	struct {
		unsigned willRestoreState : 1;
		unsigned didAddService : 1;
		unsigned didReceiveReadRequest : 1;
		unsigned didReceiveWriteRequests : 1;
		unsigned centralDidSubscribeToCharacteristic : 1;
		unsigned centralDidUnsubscribeFromCharacteristic : 1;
		unsigned didStartAdvertising : 1;
		unsigned isReadyToUpdate : 1;
		unsigned centralDidConnect : 1;
		unsigned centralDidUpdateConnectionParameters : 1;
	}  _delegateFlags;
	CBXpcConnection* _connection;
	CBPairingAgent* _pairingAgent;
	int _state;
	char _isAdvertising;
	NSMapTable* _centrals;
	NSMutableArray* _services;
	NSMutableDictionary* _characteristicIDs;
	NSLock* _updateLock;
	char _readyForUpdates;
	char _waitingForReady;

}

@property (assign,nonatomic,__weak) id<CBPeripheralManagerDelegate> delegate; 
@property (assign) int state;                                                              //@synthesize state=_state - In the implementation block
@property (assign) char isAdvertising;                                                     //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (nonatomic,readonly) CBPairingAgent * sharedPairingAgent;                        //@synthesize pairingAgent=_pairingAgent - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)authorizationStatus;
-(char)isMsgAllowedWhenOff:(int)arg1 ;
-(char)isMsgAllowedAlways:(int)arg1 ;
-(char)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(void)handleStateUpdated:(id)arg1 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(id)peerWithInfo:(id)arg1 ;
-(void)xpcConnectionDidReset:(id)arg1 ;
-(void)xpcConnectionIsInvalid:(id)arg1 ;
-(void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3 ;
-(void)xpcConnectionDidFinalize:(id)arg1 ;
-(void)handleMTUChanged:(id)arg1 ;
-(id)centralWithInfo:(id)arg1 ;
-(void)forEachCentral:(/*^block*/id)arg1 ;
-(void)handleServiceAdded:(id)arg1 ;
-(void)handleGetAttributeValue:(id)arg1 ;
-(void)handleSetAttributeValues:(id)arg1 ;
-(void)handleNotificationAdded:(id)arg1 ;
-(void)handleNotificationRemoved:(id)arg1 ;
-(void)handleAdvertisingStarted:(id)arg1 ;
-(void)handleAdvertisingStopped:(id)arg1 ;
-(void)handleReadyForUpdates:(id)arg1 ;
-(void)handleSolicitedServicesFound:(id)arg1 ;
-(void)handleCentralMsg:(int)arg1 args:(id)arg2 ;
-(void)setDesiredConnectionLatency:(int)arg1 forCentral:(id)arg2 ;
-(char)isAdvertising;
-(void)setIsAdvertising:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CBPeripheralManagerDelegate>)arg1 ;
-(id<CBPeripheralManagerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 ;
-(CBPairingAgent *)sharedPairingAgent;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeAllServices;
-(void)addService:(id)arg1 ;
-(void)startAdvertising:(id)arg1 ;
-(void)respondToRequest:(id)arg1 withResult:(int)arg2 ;
-(char)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3 ;
-(void)stopAdvertising;
-(void)removeService:(id)arg1 ;
-(oneway void)release;
@end

