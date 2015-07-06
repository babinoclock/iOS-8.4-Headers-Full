/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBXpcConnectionDelegate.h>

@protocol CBScalablePipeManagerDelegate;
@class CBXpcConnection, NSMutableSet, NSHashTable, NSSet, NSString;

@interface CBScalablePipeManager : NSObject <CBXpcConnectionDelegate> {

	id<CBScalablePipeManagerDelegate> _delegate;
	CBXpcConnection* _connection;
	int _state;
	NSMutableSet* _identifiers;
	NSHashTable* _pipes;

}

@property (readonly) int state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) NSSet * identifiers;                           //@synthesize identifiers=_identifiers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isMsgAllowedWhenOff:(int)arg1 ;
-(char)sendMsg:(int)arg1 args:(id)arg2 ;
-(void)handleStateUpdated:(id)arg1 ;
-(void)xpcConnectionDidReset:(id)arg1 ;
-(void)xpcConnectionIsInvalid:(id)arg1 ;
-(void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3 ;
-(void)xpcConnectionDidFinalize:(id)arg1 ;
-(void)orphanPipes;
-(id)pipeForName:(id)arg1 identifier:(id)arg2 ;
-(void)handleEndpointAdded:(id)arg1 ;
-(void)handleEndpointRemoved:(id)arg1 ;
-(void)handlePipeConnected:(id)arg1 ;
-(void)handlePipeDisconnected:(id)arg1 ;
-(void)handleDataAvailable:(id)arg1 ;
-(void)handleHostStateUpdated:(id)arg1 ;
-(void)registerEndpoint:(id)arg1 type:(int)arg2 priority:(int)arg3 ;
-(void)unregisterEndpoint:(id)arg1 ;
-(void)unregisterAllEndpoints;
-(void)dealloc;
-(int)state;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSSet *)identifiers;
-(oneway void)release;
@end

