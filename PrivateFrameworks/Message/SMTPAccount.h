/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/DeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount {

	Class _deliveryClass;
	MFSMTPConnection* _connection;
	NSTimer* _timer;
	long _lastTimerSetTime;
	unsigned _supportsPipelining : 1;
	unsigned _supportsOutboxCopy : 1;
	unsigned _useCellDataOnly : 1;

}
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(unsigned)defaultPortNumber;
+(id)displayedShortAccountTypeString;
+(void*)legacyKeychainProtocol;
+(char)isCommonPortNumber:(unsigned)arg1 ;
+(id)saslProfileName;
+(void)registerAppleServiceDeliveryHostname:(id)arg1 ;
+(id)newDefaultInstance;
-(void)dealloc;
-(id)serviceName;
-(void)releaseAllConnections;
-(id)preferredAuthScheme;
-(char)_shouldTryDirectSSLConnectionOnPort:(unsigned)arg1 ;
-(Class)connectionClass;
-(id)certUIService;
-(CFStringRef)connectionServiceType;
-(void)releaseAllForcedConnections;
-(void)setPreferredAuthScheme:(id)arg1 ;
-(id)alternateConnectionSettings;
-(id)insecureConnectionSettings;
-(id)secureConnectionSettings;
-(Class)deliveryClass;
-(char)canBeFallbackAccount;
-(char)supportsOutboxCopy;
-(id)authenticatedConnection:(char)arg1 ;
-(void)setSupportsOutboxCopy:(char)arg1 ;
-(id)errorForResponse:(id)arg1 ;
-(char)supportsPipelining;
-(id)_defaultSettingsWithPort:(unsigned)arg1 useSSL:(char)arg2 directSSL:(char)arg3 ;
-(id)connectionSettingsForAuthentication:(char)arg1 secure:(id)arg2 insecure:(id)arg3 ;
-(void)setSupportsPipelining:(char)arg1 ;
-(void)disconnect:(id)arg1 ;
-(void)connectionExpired:(id)arg1 ;
-(void)setTimer;
-(char)_isAppleServiceDeliveryHostname:(id)arg1 ;
-(void)setDeliveryClass:(Class)arg1 ;
-(id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2 ;
-(void)checkInConnection:(id)arg1 ;
@end
