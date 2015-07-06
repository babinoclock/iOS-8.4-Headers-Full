/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MultipeerConnectivity/NSNetServiceDelegate.h>

@protocol MCNearbyServiceAdvertiserDelegate, OS_dispatch_queue;
@class MCPeerID, NSDictionary, NSString, NSNetService, NSData, NSMutableDictionary, NSObject;

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate> {

	id<MCNearbyServiceAdvertiserDelegate> _delegate;
	char _isAdvertising;
	char _wasAdvertising;
	MCPeerID* _myPeerID;
	NSDictionary* _discoveryInfo;
	NSString* _serviceType;
	NSString* _formattedServiceType;
	NSNetService* _networkServer;
	NSData* _TXTRecordData;
	NSMutableDictionary* _peers;
	int _outgoingInviteID;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _invites;

}

@property (assign,nonatomic,__weak) id<MCNearbyServiceAdvertiserDelegate> delegate; 
@property (nonatomic,readonly) MCPeerID * myPeerID;                                              //@synthesize myPeerID=_myPeerID - In the implementation block
@property (nonatomic,copy) NSDictionary * discoveryInfo;                                         //@synthesize discoveryInfo=_discoveryInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                               //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * formattedServiceType;                                      //@synthesize formattedServiceType=_formattedServiceType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peers;                                        //@synthesize peers=_peers - In the implementation block
@property (nonatomic,retain) NSNetService * networkServer;                                       //@synthesize networkServer=_networkServer - In the implementation block
@property (nonatomic,retain) NSData * TXTRecordData;                                             //@synthesize TXTRecordData=_TXTRecordData - In the implementation block
@property (assign,nonatomic) int outgoingInviteID;                                               //@synthesize outgoingInviteID=_outgoingInviteID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                             //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invites;                                      //@synthesize invites=_invites - In the implementation block
@property (assign,nonatomic) char isAdvertising;                                                 //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign,nonatomic) char wasAdvertising;                                                //@synthesize wasAdvertising=_wasAdvertising - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)setTXTRecordData:(NSData *)arg1 ;
-(NSData *)TXTRecordData;
-(void)netServiceDidPublish:(id)arg1 ;
-(MCPeerID *)myPeerID;
-(id)txtRecordDataWithDiscoveryInfo:(id)arg1 ;
-(void)applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)applicationWillTerminateNotification:(id)arg1 ;
-(NSDictionary *)discoveryInfo;
-(id)makeTXTRecordDataWithDiscoveryInfo:(id)arg1 ;
-(char)isAdvertising;
-(NSNetService *)networkServer;
-(NSString *)formattedServiceType;
-(void)setNetworkServer:(NSNetService *)arg1 ;
-(void)setIsAdvertising:(char)arg1 ;
-(void)syncStartAdvertisingPeer;
-(void)syncStopAdvertisingPeer;
-(void)setWasAdvertising:(char)arg1 ;
-(void)stopAdvertisingPeer;
-(char)wasAdvertising;
-(void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)syncCloseConnectionForPeer:(id)arg1 ;
-(void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2 ;
-(void)parseIDString:(id*)arg1 displayName:(id*)arg2 fromIdentifier:(id)arg3 ;
-(void)syncReceivedData:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncAttachConnection:(id)arg1 toPeer:(id)arg2 ;
-(void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2 ;
-(id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3 ;
-(void)startAdvertisingPeer;
-(void)setDiscoveryInfo:(NSDictionary *)arg1 ;
-(void)setFormattedServiceType:(NSString *)arg1 ;
-(int)outgoingInviteID;
-(void)setOutgoingInviteID:(int)arg1 ;
-(NSMutableDictionary *)invites;
-(void)setInvites:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MCNearbyServiceAdvertiserDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<MCNearbyServiceAdvertiserDelegate>)delegate;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(NSMutableDictionary *)peers;
-(void)setPeers:(NSMutableDictionary *)arg1 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
@end

