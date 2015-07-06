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

@protocol CBCentralManagerDelegate;
@class NSMapTable, CBXpcConnection, CBPairingAgent, NSString;

@interface CBCentralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {

	id<CBCentralManagerDelegate> _delegate;
	struct {
		unsigned willRestoreState : 1;
		unsigned didRetrievePeripherals : 1;
		unsigned didRetrieveConnectedPeripherals : 1;
		unsigned didDiscoverPeripheral : 1;
		unsigned didConnectPeripheral : 1;
		unsigned didFailToConnectPeripheral : 1;
		unsigned didDisconnectPeripheral : 1;
		unsigned didUpdatePeripheralConnectionState : 1;
		unsigned didLoseZone : 1;
		unsigned didUpdateConnectionParameters : 1;
	}  _delegateFlags;
	int _state;
	char _isScanning;
	NSMapTable* _peripherals;
	CBXpcConnection* _connection;
	CBPairingAgent* _pairingAgent;

}

@property (assign,nonatomic,__weak) id<CBCentralManagerDelegate> delegate; 
@property (assign) int state;                                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) CBPairingAgent * sharedPairingAgent;                     //@synthesize pairingAgent=_pairingAgent - In the implementation block
@property (assign) char isScanning;                                                     //@synthesize isScanning=_isScanning - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isMsgAllowedWhenOff:(int)arg1 ;
-(char)isMsgAllowedAlways:(int)arg1 ;
-(char)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(id)peripheralWithInfo:(id)arg1 ;
-(void)forEachPeripheral:(/*^block*/id)arg1 ;
-(void)orphanPeripherals;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(char)arg2 ;
-(void)setIsScanning:(char)arg1 ;
-(id)dataArrayToUUIDArray:(id)arg1 ;
-(id)peripheralWithIdentifier:(id)arg1 ;
-(void)handleStateUpdated:(id)arg1 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handlePeripheralDiscovered:(id)arg1 ;
-(void)handlePeripheralsRetrieved:(id)arg1 ;
-(void)handleConnectedPeripheralsRetrieved:(id)arg1 ;
-(void)handlePeripheralConnectionCompleted:(id)arg1 ;
-(void)handlePeripheralDisconnectionCompleted:(id)arg1 ;
-(void)handlePeripheralConnectionStateUpdated:(id)arg1 ;
-(void)handleZoneLost:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(void)handlePeripheralMsg:(int)arg1 args:(id)arg2 ;
-(id)peerWithInfo:(id)arg1 ;
-(void)xpcConnectionDidReset:(id)arg1 ;
-(void)xpcConnectionIsInvalid:(id)arg1 ;
-(void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3 ;
-(void)xpcConnectionDidFinalize:(id)arg1 ;
-(void)retrievePeripherals:(id)arg1 ;
-(void)retrieveConnectedPeripherals;
-(void)setDesiredConnectionLatency:(int)arg1 forPeripheral:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<CBCentralManagerDelegate>)arg1 ;
-(id<CBCentralManagerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 ;
-(CBPairingAgent *)sharedPairingAgent;
-(char)isScanning;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 ;
-(void)cancelPeripheralConnection:(id)arg1 force:(char)arg2 ;
-(void)connectPeripheral:(id)arg1 options:(id)arg2 ;
-(void)cancelPeripheralConnection:(id)arg1 ;
-(void)stopScan;
-(void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)retrievePeripheralsWithIdentifiers:(id)arg1 ;
-(oneway void)release;
@end

