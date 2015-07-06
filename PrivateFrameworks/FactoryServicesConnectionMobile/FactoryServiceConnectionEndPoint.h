/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FactoryServicesConnectionMobile.framework/FactoryServicesConnectionMobile
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FactoryServicesConnectionMobile/NSXPCListenerDelegate.h>
#import <FactoryServicesConnectionMobile/FactoryServiceXPCInterfaceCommon.h>

@protocol FactoryServiceConnectionEndPointMessageHandlingProtocol;
@class NSString, NSXPCConnection, NSXPCListener;

@interface FactoryServiceConnectionEndPoint : NSObject <NSXPCListenerDelegate, FactoryServiceXPCInterfaceCommon> {

	char _isConnected;
	NSXPCConnection* _xpcConnection;
	id<FactoryServiceConnectionEndPointMessageHandlingProtocol> _delegate;
	NSString* _name;
	/*^block*/id _connectionInterruptionHandler;
	/*^block*/id _connectionInvalidationHandler;
	NSXPCListener* _Listener;
	NSString* _serviceName;

}

@property (assign) char isConnected;                                                                  //@synthesize isConnected=_isConnected - In the implementation block
@property (retain) NSXPCConnection * xpcConnection;                                                   //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) id<FactoryServiceConnectionEndPointMessageHandlingProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * name;                                                                   //@synthesize name=_name - In the implementation block
@property (copy) id connectionInterruptionHandler;                                                    //@synthesize connectionInterruptionHandler=_connectionInterruptionHandler - In the implementation block
@property (copy) id connectionInvalidationHandler;                                                    //@synthesize connectionInvalidationHandler=_connectionInvalidationHandler - In the implementation block
@property (retain) NSXPCListener * Listener;                                                          //@synthesize Listener=_Listener - In the implementation block
@property (retain) NSString * serviceName;                                                            //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<FactoryServiceConnectionEndPointMessageHandlingProtocol>)arg1 ;
-(id)init;
-(id<FactoryServiceConnectionEndPointMessageHandlingProtocol>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)cleanUp;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setIsConnected:(char)arg1 ;
-(void)setConnectionInterruptionHandler:(id)arg1 ;
-(void)setConnectionInvalidationHandler:(id)arg1 ;
-(void)handleMessageFromConnectedEndPoint:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)sendMessageToConnectedEndPoint:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(id)connectionInterruptionHandler;
-(id)connectionInvalidationHandler;
-(NSXPCListener *)Listener;
-(int)initConnectionWithService:(id)arg1 ;
-(int)startServiceWithName:(id)arg1 ;
-(char)isConnected;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end
