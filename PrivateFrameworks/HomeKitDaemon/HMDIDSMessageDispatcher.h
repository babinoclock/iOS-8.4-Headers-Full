/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMMessageDispatcher.h>

@class HMMessageDispatcher, NSMutableDictionary, HMDMessageFilterChain, HMDAdminEnforcementMessageFilter, HMDIdentityRegistry, HMDNotificationRelay, NSArray;

@interface HMDIDSMessageDispatcher : HMMessageDispatcher {

	HMMessageDispatcher* _recvDispatcher;
	NSMutableDictionary* _remoteGateways;
	HMDMessageFilterChain* _msgFilterChain;
	HMDAdminEnforcementMessageFilter* _adminMsgFilter;
	NSMutableDictionary* _activeClientSecureSessions;
	NSMutableDictionary* _activeServerSecureSessions;
	HMDIdentityRegistry* _identityRegistry;
	HMDNotificationRelay* _notificationRelay;
	HMMessageDispatcher* _notificationDispatcher;

}

@property (nonatomic,readonly) NSArray * residentDevices; 
@property (nonatomic,readonly) NSArray * transientDevices; 
@property (nonatomic,retain) HMMessageDispatcher * recvDispatcher;                           //@synthesize recvDispatcher=_recvDispatcher - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteGateways;                           //@synthesize remoteGateways=_remoteGateways - In the implementation block
@property (nonatomic,retain) HMDMessageFilterChain * msgFilterChain;                         //@synthesize msgFilterChain=_msgFilterChain - In the implementation block
@property (nonatomic,retain) HMDAdminEnforcementMessageFilter * adminMsgFilter;              //@synthesize adminMsgFilter=_adminMsgFilter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeClientSecureSessions;               //@synthesize activeClientSecureSessions=_activeClientSecureSessions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeServerSecureSessions;               //@synthesize activeServerSecureSessions=_activeServerSecureSessions - In the implementation block
@property (nonatomic,retain) HMDIdentityRegistry * identityRegistry;                         //@synthesize identityRegistry=_identityRegistry - In the implementation block
@property (nonatomic,retain) HMDNotificationRelay * notificationRelay;                       //@synthesize notificationRelay=_notificationRelay - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * notificationDispatcher;                   //@synthesize notificationDispatcher=_notificationDispatcher - In the implementation block
+(id)whitelistedCommands;
+(char)isWhitelistedLocalMessage:(id)arg1 ;
+(id)remappedRemotePrepareWriteCommands;
-(void)deregisterReceiver:(id)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)setMsgFilterChain:(HMDMessageFilterChain *)arg1 ;
-(void)setIdentityRegistry:(HMDIdentityRegistry *)arg1 ;
-(HMDMessageFilterChain *)msgFilterChain;
-(HMDIdentityRegistry *)identityRegistry;
-(id)initWithIDSTransport:(id)arg1 messageFilterChain:(id)arg2 identityRegistry:(id)arg3 notificationRelayDispatcher:(id)arg4 ;
-(void)configureNotificationDispatcher:(id)arg1 ;
-(HMMessageDispatcher *)recvDispatcher;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setRecvDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(HMDNotificationRelay *)notificationRelay;
-(HMMessageDispatcher *)notificationDispatcher;
-(void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 ;
-(void)setNotificationDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)setNotificationRelay:(HMDNotificationRelay *)arg1 ;
-(NSArray *)residentDevices;
-(NSArray *)transientDevices;
-(void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)_sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)_sendSecureMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)electDeviceForUser:(id)arg1 destination:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_setRemoteAccessPeer:(id)arg1 forHome:(id)arg2 sendNotification:(char)arg3 ;
-(void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)activeClientSecureSessions;
-(NSMutableDictionary *)remoteGateways;
-(HMDAdminEnforcementMessageFilter *)adminMsgFilter;
-(char)_checkAuthorizationForMessage:(id)arg1 errorReason:(id*)arg2 ;
-(char)_handleInternalIDSMessage:(id)arg1 fromID:(id)arg2 ;
-(void)_handleSecureClientMessage:(id)arg1 fromID:(id)arg2 ;
-(void)_handleSecureServerMessage:(id)arg1 fromID:(id)arg2 ;
-(void)_handleElectDeviceForIDSSession:(id)arg1 ;
-(NSMutableDictionary *)activeServerSecureSessions;
-(void)setRemoteAccessPeer:(id)arg1 forHome:(id)arg2 ;
-(void)setRemoteGateways:(NSMutableDictionary *)arg1 ;
-(void)setAdminMsgFilter:(HMDAdminEnforcementMessageFilter *)arg1 ;
-(void)setActiveClientSecureSessions:(NSMutableDictionary *)arg1 ;
-(void)setActiveServerSecureSessions:(NSMutableDictionary *)arg1 ;
@end

