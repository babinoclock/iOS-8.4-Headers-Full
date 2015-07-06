/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSArray;

@interface IMDAccountController : NSObject {

	NSMutableDictionary* _accounts;
	NSMutableDictionary* _activeAccounts;
	char _isLoading;
	char _isFirstLoad;

}

@property (nonatomic,readonly) NSDictionary * loadOldStatusStore; 
@property (nonatomic,readonly) char isLoading;                                 //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) NSArray * accounts; 
@property (nonatomic,readonly) NSArray * activeAccounts; 
@property (nonatomic,readonly) NSArray * connectedAccounts; 
@property (nonatomic,readonly) NSArray * connectingAccounts; 
@property (nonatomic,readonly) NSArray * activeSessions; 
+(id)sharedInstance;
+(id)sharedAccountController;
-(void)save;
-(void)dealloc;
-(id)init;
-(char)isLoading;
-(void)load;
-(id)accountsForService:(id)arg1 ;
-(NSArray *)accounts;
-(id)activeAccountsForService:(id)arg1 ;
-(id)connectedAccountsForService:(id)arg1 ;
-(NSArray *)connectedAccounts;
-(void)activateAccounts:(id)arg1 ;
-(void)deactivateAccounts:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)deactivateAccount:(id)arg1 ;
-(void)activateAccount:(id)arg1 ;
-(char)isAccountActive:(id)arg1 ;
-(void)_daemonWillShutdown:(id)arg1 ;
-(id)accountForAccountID:(id)arg1 ;
-(NSDictionary *)loadOldStatusStore;
-(void)_checkPowerAssertion;
-(void)deactivateAccounts:(id)arg1 force:(char)arg2 ;
-(char)_isAccountActive:(id)arg1 forService:(id)arg2 ;
-(void)deactivateAccount:(id)arg1 force:(char)arg2 ;
-(void)deferredSave;
-(void)setupAccount:(id)arg1 ;
-(id)accountsForLoginID:(id)arg1 onService:(id)arg2 ;
-(NSArray *)connectingAccounts;
-(id)connectingAccountsForService:(id)arg1 ;
-(id)accountForIDSAccountUniqueID:(id)arg1 ;
-(NSArray *)activeSessions;
-(id)sessionForAccount:(id)arg1 ;
-(id)anySessionForServiceName:(id)arg1 ;
-(id)_superFormatFromAIML:(id)arg1 ;
-(NSArray *)activeAccounts;
-(void)addAccount:(id)arg1 ;
@end

