/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMDaemonCore-Structs.h>
#import <IMDaemonCore/IMSystemMonitorListener.h>
#import <IMDaemonCore/IMConnectionMonitorDelegate.h>
#import <IMDaemonCore/IMServiceSessionProtocol.h>

@class NSRecursiveLock, IMDAccount, NSString, NSMutableDictionary, NSMutableSet, IMTimer, NSTimer, IMConnectionMonitor, IMSystemProxySettingsFetcher, IMDService, NSArray, NSDictionary;

@interface IMDServiceSession : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol> {

	NSRecursiveLock* _lock;
	IMDAccount* _account;
	NSString* _loginStatusMessage;
	NSMutableDictionary* _localProperties;
	NSMutableSet* _changedBuddies;
	NSMutableSet* _registeredChats;
	NSMutableDictionary* _groupChatIdentifierToChatRoomMap;
	NSMutableDictionary* _chatRoomToGroupChatIdentifierMap;
	NSMutableDictionary* _chatSuppressionFlagMap;
	NSMutableDictionary* _chatSuppressionTimerMap;
	NSMutableDictionary* _suppressedMessages;
	IMTimer* _messageRoutingTimer;
	IMTimer* _messageExpireStateTimer;
	NSTimer* _storageTimer;
	NSMutableSet* _messagesReceivedDuringStorage;
	unsigned _pendingReadReceiptFromStorageCount;
	IMConnectionMonitor* _connectionMonitor;
	NSTimer* _reconnectTimer;
	NSString* _loginID;
	NSString* _pwRequestID;
	IMSystemProxySettingsFetcher* _systemProxySettingsFetcher;
	int _buddyChangeLevel;
	unsigned _loginStatus;
	int _disconnectReason;
	char _activated;
	char _saveKeychainPassword;
	char _awaitingDataContext;
	char _shouldReconnect;
	char _badPass;
	IMDService* _service;
	NSMutableDictionary* _buddies;
	NSString* _proxyHost;
	NSString* _proxyAccount;
	NSString* _proxyPassword;
	NSString* _password;
	NSString* _serverHost;
	int _proxyType;
	unsigned short _proxyPort;
	char _useSSL;
	unsigned short _serverPort;

}

@property (nonatomic,retain,readonly) NSArray * allBuddies; 
@property (retain,readonly) NSDictionary * buddyProperties; 
@property (nonatomic,retain,readonly) NSDictionary * buddyPictures; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,retain,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,retain,readonly) IMDAccount * account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain,readonly) IMDService * service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountID; 
@property (nonatomic,retain,readonly) NSString * password;                               //@synthesize password=_password - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * accountDefaults; 
@property (nonatomic,retain,readonly) NSString * serverHost;                             //@synthesize serverHost=_serverHost - In the implementation block
@property (nonatomic,readonly) unsigned short serverPort;                                //@synthesize serverPort=_serverPort - In the implementation block
@property (nonatomic,readonly) int proxyType;                                            //@synthesize proxyType=_proxyType - In the implementation block
@property (nonatomic,retain,readonly) NSString * proxyHost;                              //@synthesize proxyHost=_proxyHost - In the implementation block
@property (nonatomic,readonly) unsigned short proxyPort;                                 //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,retain,readonly) NSString * proxyAccount;                           //@synthesize proxyAccount=_proxyAccount - In the implementation block
@property (nonatomic,retain,readonly) NSString * proxyPassword;                          //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,readonly) char useSSL;                                              //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) char accountNeedsLogin; 
@property (nonatomic,readonly) char accountNeedsPassword; 
@property (nonatomic,readonly) char accountShouldBeAlwaysLoggedIn; 
@property (nonatomic,readonly) char allowedAsChild; 
@property (nonatomic,readonly) char networkConditionsAllowLogin; 
@property (nonatomic,readonly) char overrideNetworkAvailability; 
@property (nonatomic,readonly) unsigned serviceLoginStatus;                              //@synthesize loginStatus=_loginStatus - In the implementation block
@property (nonatomic,readonly) int serviceDisconnectReason;                              //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (nonatomic,retain,readonly) NSString * serviceLoginStatusMessage;              //@synthesize loginStatusMessage=_loginStatusMessage - In the implementation block
+(void)initialize;
+(id)_firewallUserNotificationForService:(id)arg1 ;
-(NSString *)serverHost;
-(unsigned short)serverPort;
-(void)dealloc;
-(char)isActive;
-(id)server;
-(NSString *)displayName;
-(void)systemDidUnlock;
-(NSString *)accountID;
-(IMDAccount *)account;
-(NSString *)password;
-(IMDService *)service;
-(char)useSSL;
-(unsigned long long)capabilities;
-(id)groups;
-(void)login;
-(void)logout;
-(id)canonicalFormOfID:(id)arg1 ;
-(char)equalID:(id)arg1 andID:(id)arg2 ;
-(char)blockIdleStatus;
-(void)setBlockIdleStatus:(char)arg1 ;
-(unsigned)blockingMode;
-(id)blockList;
-(id)allowList;
-(void)setBlockList:(id)arg1 ;
-(void)setBlockingMode:(unsigned)arg1 ;
-(void)setAllowList:(id)arg1 ;
-(void)requestGroups;
-(id)defaultChatSuffix;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)autoLogin;
-(void)renameGroup:(id)arg1 to:(id)arg2 ;
-(void)holdBuddyUpdates;
-(void)resumeBuddyUpdates;
-(void)registerAccount;
-(void)unregisterAccount;
-(FZChatRoomValidity)validityOfChatRoomName:(id)arg1 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(void)_managedPrefsNotification:(id)arg1 ;
-(NSDictionary *)accountDefaults;
-(void)accountDefaultsChanged:(id)arg1 ;
-(unsigned)serviceLoginStatus;
-(NSString *)serviceLoginStatusMessage;
-(NSDictionary *)buddyProperties;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)changeMyStatus:(id)arg1 changedKeys:(id)arg2 ;
-(void)sessionWillBecomeInactive;
-(void)setIdleTime:(unsigned long)arg1 ;
-(void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3 ;
-(id)loginID;
-(NSDictionary *)registrationAlertInfo;
-(void)_setAutoReconnectTimer;
-(id)_newHashForChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)_networkChanged:(id)arg1 ;
-(void)_callMonitorStateChanged:(id)arg1 ;
-(void)_processConnectionMonitorUpdate;
-(void)_abandonSystemProxySettingsFetcher;
-(void)_abandonPWFetcher;
-(void)_clearAutoReconnectTimer;
-(void)_clearConnectionMonitor;
-(void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(char)arg1 ;
-(void)_updateRoutingTimerWithInterval:(double)arg1 ;
-(void)_updateExpireStateTimerWithInterval:(double)arg1 ;
-(void)leaveAllChats;
-(void)_updateConnectionMonitorWithRemoteHost:(id)arg1 ;
-(char)accountShouldBeAlwaysLoggedIn;
-(void)_doLoginIgnoringProxy:(char)arg1 ;
-(char)overrideNetworkAvailability;
-(void)logoutServiceSession;
-(void)_reconnectIfNecessary;
-(void)_setPendingConnectionMonitorUpdate;
-(void)_processPotentialNetworkChange;
-(void)autoReconnect;
-(char)allowedAsChild;
-(id)broadcaster;
-(id)broadcasterForListenersWithCapabilities:(unsigned)arg1 ;
-(void)endMessageSuppression;
-(id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(id)broadcasterForChatListeners;
-(void)changeGroups:(id)arg1 ;
-(void)changeGroup:(id)arg1 changes:(id)arg2 ;
-(void)acceptSubscriptionRequest:(char)arg1 from:(id)arg2 ;
-(void)requestSubscriptionTo:(id)arg1 ;
-(void)startWatchingBuddy:(id)arg1 ;
-(void)stopWatchingBuddy:(id)arg1 ;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2 ;
-(void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3 ;
-(void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 joinProperties:(id)arg6 ;
-(void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)removeChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)removePersonInfo:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)updateDisplayName:(id)arg1 fromDisplayName:(id)arg2 forChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1 ;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)passwordUpdated;
-(void)sendFileTransfer:(id)arg1 toPerson:(id)arg2 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 ;
-(void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3 ;
-(void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned)arg2 type:(unsigned)arg3 userInfo:(id)arg4 conference:(id)arg5 ;
-(void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3 ;
-(void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3 ;
-(void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3 ;
-(char)accountNeedsLogin;
-(char)accountNeedsPassword;
-(void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(char)networkConditionsAllowLogin;
-(id)canonicalFormOfChatRoom:(id)arg1 ;
-(void)refreshServiceCapabilities;
-(id)broadcasterForChatObserverListeners;
-(id)broadcasterForAVConferenceListeners;
-(id)broadcasterForACConferenceListeners;
-(id)broadcasterForVCConferenceListeners;
-(void)_clearDowngradeMarkersForChat:(id)arg1 ;
-(NSString *)proxyHost;
-(NSString *)proxyAccount;
-(int)serviceDisconnectReason;
-(void)sendLocationSharingInfo:(id)arg1 toID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 ;
-(void)canonicalizeChatIdentifier:(id*)arg1 style:(unsigned char*)arg2 ;
-(char)shouldImitateGroupChatUsingChatRooms;
-(id)chatRoomForGroupChatIdentifier:(id)arg1 ;
-(id)groupChatIdentifierForChatRoom:(id)arg1 ;
-(void)_mapRoomChatToGroupChat:(id*)arg1 style:(unsigned char*)arg2 ;
-(void)didSendMessageReadReceiptForMessageID:(id)arg1 ;
-(void)didSendMessagePlayedReceiptForMessageID:(id)arg1 ;
-(void)didSendMessageSavedReceiptForMessageID:(id)arg1 ;
-(void)didLeaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 handleInfo:(id)arg4 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 ;
-(char)isAwaitingStorageTimer;
-(void)noteSuppressedMessageUpdate:(id)arg1 ;
-(void)_updateExpireStateForMessageGUID:(id)arg1 ;
-(char)_didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 attempts:(int)arg2 date:(id)arg3 ;
-(char)_hasSuppressedMessageID:(id)arg1 chatGUID:(id)arg2 ;
-(void)_didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 useMessageSuppression:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(char)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 useMessageSuppression:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(char)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(char)arg5 date:(id)arg6 attempts:(int)arg7 useMessageSuppression:(char)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(char)arg5 date:(id)arg6 useMessageSuppression:(char)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 forceDate:(id)arg4 ;
-(char)canMakeDowngradeRoutingChecks;
-(void)_updateRoutingForMessageGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned)arg3 ;
-(void)notifyDidSendMessageID:(id)arg1 shouldNotify:(char)arg2 ;
-(void)_endMessageSuppressionForChatGUID:(id)arg1 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 ;
-(void)_suppresionTimerFired:(id)arg1 ;
-(void)_setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 ;
-(void)useChatRoom:(id)arg1 forGroupChatIdentifier:(id)arg2 ;
-(void)unregisterChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 unformattedNumber:(id)arg3 countryCode:(id)arg4 forChat:(id)arg5 style:(unsigned char)arg6 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)_markChatAsDowngraded:(id)arg1 ;
-(void)_handleRoutingWithDictionary:(id)arg1 ;
-(void)_routingTimerFired;
-(char)canMakeExpireStateChecks;
-(void)_handleExpireStateDictionary:(id)arg1 ;
-(void)_expireStateTimerFired;
-(void)_storageTimerFired;
-(unsigned)pendingReadReceiptFromStorageCount;
-(void)setPendingReadReceiptFromStorageCount:(unsigned)arg1 ;
-(void)_updateStorageTimerWithInterval:(double)arg1 ;
-(void)registerChat:(id)arg1 groupID:(id)arg2 style:(unsigned char)arg3 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 ;
-(char)isChatRegistered:(id)arg1 style:(unsigned char)arg2 ;
-(void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didReceiveReplaceMessageID:(int)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveErrorMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveError:(unsigned)arg1 forMessageID:(id)arg2 forceError:(char)arg3 ;
-(char)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2 ;
-(void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(char)arg5 date:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)notifyDidSendMessageID:(id)arg1 ;
-(void)didReceiveDisplayNameChange:(id)arg1 fromID:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveInvitation:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)noteItemFromStorage:(id)arg1 ;
-(void)noteLastItemFromStorage:(id)arg1 ;
-(void)incrementPendingReadReceiptFromStorageCount;
-(void)decrementPendingReadReceiptFromStorageCount;
-(void)beginBuddyChanges;
-(void)endBuddyChanges;
-(id)localPropertiesOfBuddy:(id)arg1 ;
-(NSDictionary *)buddyPictures;
-(id)pictureOfBuddy:(id)arg1 ;
-(id)pictureKeyForBuddy:(id)arg1 ;
-(NSArray *)allBuddies;
-(void)markBuddiesAsChanged:(id)arg1 ;
-(void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3 ;
-(void)clearPropertiesOfBuddy:(id)arg1 ;
-(id)property:(id)arg1 ofBuddy:(id)arg2 ;
-(id)localProperty:(id)arg1 ofBuddy:(id)arg2 ;
-(void)clearLocalProperties;
-(void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3 ;
-(void)disallowReconnection;
-(void)joinChat:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 joinProperties:(id)arg4 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 joinProperties:(id)arg5 ;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)removeChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)noteBadPassword;
-(void)loginServiceSession;
-(void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3 ;
-(void)_handleFirewallUserNotificationDidFinish:(id)arg1 ;
-(char)warnIfPortBlocked:(int)arg1 forAction:(id)arg2 ;
-(void)_login_serverSettingsReady;
-(void)_forceSetLoginStatus:(unsigned)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(void)_data_connection_ready;
-(void)_login_usernameAndPasswordReady;
-(void)_login_checkUsernameAndPassword;
-(void)setLoginStatus:(unsigned)arg1 message:(id)arg2 ;
-(void)setLoginStatus:(unsigned)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(void)_wentOffline;
-(void)serviceSessionDidLogin;
-(void)serviceSessionDidLogout;
-(void)serviceSessionDidLogoutWithMessage:(id)arg1 reason:(int)arg2 properties:(id)arg3 ;
-(void)_autoReconnectTimer:(id)arg1 ;
-(void)systemProxySettingsFetcher:(id)arg1 retrievedHost:(id)arg2 port:(unsigned short)arg3 protocol:(int)arg4 ;
-(void)systemProxySettingsFetcher:(id)arg1 retrievedAccount:(id)arg2 password:(id)arg3 ;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(void)userNotificationDidFinish:(id)arg1 ;
-(unsigned short)proxyPort;
-(NSString *)proxyPassword;
-(int)registrationStatus;
-(int)proxyType;
-(char)hasCapability:(unsigned long long)arg1 ;
-(int)registrationError;
@end

