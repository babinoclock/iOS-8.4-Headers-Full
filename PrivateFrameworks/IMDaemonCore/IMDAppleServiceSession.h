/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMDServiceSession.h>

@class NSString, IDSAccount, NSArray;

@interface IMDAppleServiceSession : IMDServiceSession {

	NSString* _serviceName;
	NSString* _GUID;

}

@property (nonatomic,retain,readonly) IDSAccount * idsAccount; 
@property (nonatomic,retain,readonly) NSArray * aliases; 
@property (nonatomic,retain,readonly) NSArray * vettedAliases; 
@property (nonatomic,retain,readonly) NSString * callerID; 
@property (nonatomic,readonly) NSString * serviceType; 
@property (nonatomic,retain,readonly) NSString * callerURI; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (getter=UID,nonatomic,retain,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
-(void)dealloc;
-(NSString *)serviceType;
-(NSArray *)aliases;
-(NSArray *)vettedAliases;
-(id)_aliases;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(int)validationStatusForAlias:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactive;
-(IDSAccount *)idsAccount;
-(void)logoutServiceSession;
-(void)passwordUpdated;
-(void)loginServiceSession;
-(void)refreshRegistration;
-(NSArray *)registeredURIs;
-(void)_updateAccountStatusToUnregistered:(char)arg1 ;
-(void)deactivateAndPurgeIdentify;
-(char)_isDeviceRegistered;
-(void)clearCallerID;
-(id)certForURI:(id)arg1 ;
-(id)_aliasStrings;
-(int)_validationStatusForAlias:(id)arg1 ;
-(NSString *)callerURI;
-(void)activeDevicesUpdated;
-(void)reregister;
-(void)reIdentify;
-(NSString *)callerID;
-(NSString *)GUID;
@end

