/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/NSXPCConnectionDelegate.h>
#import <GameCenterFoundation/GKClientProtocol.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue, GKDaemonProxyDataUpdateDelegate, GKDaemonProxyNetworkActivityIndicatorDelegate;
@class NSXPCConnection, NSObject, NSDictionary, GKThreadsafeDictionary, NSString;

@interface GKDaemonProxy : NSObject <NSXPCConnectionDelegate, GKClientProtocol> {

	int _hostPID;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_semaphore> _serviceSemaphore;
	NSDictionary* _serviceLookup;
	NSDictionary* _interfaceLookup;
	NSObject*<OS_dispatch_queue> _invocationQueue;
	NSObject*<OS_dispatch_semaphore> _concurrentRequestSemaphore;
	GKThreadsafeDictionary* _pendingRequests;
	id<GKDaemonProxyDataUpdateDelegate> _dataUpdateDelegate;
	id<GKDaemonProxyNetworkActivityIndicatorDelegate> _networkActivityIndicatorDelegate;

}

@property (assign,nonatomic) id<GKDaemonProxyDataUpdateDelegate> dataUpdateDelegate;                                          //@synthesize dataUpdateDelegate=_dataUpdateDelegate - In the implementation block
@property (assign,nonatomic) id<GKDaemonProxyNetworkActivityIndicatorDelegate> networkActivityIndicatorDelegate;              //@synthesize networkActivityIndicatorDelegate=_networkActivityIndicatorDelegate - In the implementation block
@property (assign,nonatomic) NSXPCConnection * connection;                                                                    //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gameServicePrivateProxy;
+(id)gameStatServiceProxy;
+(id)profileServicePrivateProxy;
+(id)friendServiceProxy;
+(id)friendServicePrivateProxy;
+(id)multiplayerServiceProxy;
+(id)accountServiceProxy;
+(id)analyticsServiceProxy;
+(id)profileServiceProxy;
+(id)turnBasedServiceProxy;
+(id)turnBasedServicePrivateProxy;
+(id)daemonProxy;
+(id)gameServiceProxy;
+(id)challengeServiceProxy;
+(id)challengeServicePrivateProxy;
+(id)multiplayerServicePrivateProxy;
+(id)bulletinServiceProxy;
+(id)bulletinServicePrivateProxy;
+(id)linkedAccountsServiceProxy;
+(id)analyticsServicePrivateProxy;
+(id)linkedAccountsServicePrivateProxy;
+(id)gameStatServicePrivateProxy;
+(id)accountServicePrivateProxy;
+(id)utilityServiceProxy;
+(id)utilityServicePrivateProxy;
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(char)arg3 ;
-(void)setHostPID:(int)arg1 ;
-(oneway void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)addInterface:(id)arg1 toLookup:(id)arg2 ;
-(void)_resetServiceLookup;
-(void)buildServiceLookup;
-(void)addService:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3 ;
-(void)resetServiceLookup;
-(void)buildInterfaceLookup;
-(oneway void)getAuthenticatedPlayerIDWithHandler:(/*^block*/id)arg1 ;
-(oneway void)getAccountNameWithHandler:(/*^block*/id)arg1 ;
-(oneway void)beginNetworkActivity;
-(oneway void)endNetworkActivity;
-(oneway void)resetNetworkActivity;
-(oneway void)receivedChallengeSelected:(id)arg1 ;
-(oneway void)completedChallengeSelected:(id)arg1 ;
-(void)dispatchCompletedChallenge:(id)arg1 ;
-(oneway void)challengeReceived:(id)arg1 ;
-(oneway void)challengeCompleted:(id)arg1 ;
-(oneway void)setBadgeCount:(unsigned)arg1 forType:(unsigned)arg2 ;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(void)buildServiceLookupIfNeccessary;
-(id)replyQueueForRequestSelector:(SEL)arg1 ;
-(void)_replyToDuplicatesForRequest:(id)arg1 withInvocation:(id)arg2 queue:(id)arg3 ;
-(oneway void)setPreferencesValues:(id)arg1 ;
-(oneway void)setCurrentGame:(id)arg1 serverEnvironment:(int)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)setLocalPlayer:(id)arg1 authenticated:(char)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)respondedToNearbyInvite:(id)arg1 ;
-(oneway void)scoreSelected:(id)arg1 ;
-(oneway void)achievementSelected:(id)arg1 ;
-(oneway void)setLogBits:(int)arg1 ;
-(id)authenticatedPlayerID;
-(void)getAccountURLsWithHandler:(/*^block*/id)arg1 ;
-(char)hasAuthenticatedAccount;
-(id)authenticatedPlayerInfo;
-(id<GKDaemonProxyNetworkActivityIndicatorDelegate>)networkActivityIndicatorDelegate;
-(void)setNetworkActivityIndicatorDelegate:(id<GKDaemonProxyNetworkActivityIndicatorDelegate>)arg1 ;
-(id<GKDaemonProxyDataUpdateDelegate>)dataUpdateDelegate;
-(void)setDataUpdateDelegate:(id<GKDaemonProxyDataUpdateDelegate>)arg1 ;
-(id)accountName;
@end

