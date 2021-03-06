/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMDService.h>
#import <IMDaemonCore/IDSAccountControllerDelegate.h>
#import <IMDaemonCore/IDSAccountRegistrationDelegate.h>

@class IDSAccountController, NSArray, NSString;

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate> {

	IDSAccountController* _accountController;
	char _activatingAccount;
	char _deactivatingAccount;

}

@property (nonatomic,retain,readonly) IDSAccountController * idsAccountController;               //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain,readonly) NSArray * accountsLoadedFromIdentityServices; 
@property (nonatomic,readonly) NSArray * activeAccountsFromIdentityServices; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
-(void)accountAdded:(id)arg1 ;
-(void)accountRemoved:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(NSArray *)accountsLoadedFromIdentityServices;
-(NSArray *)activeAccountsFromIdentityServices;
-(void)enableAccount:(id)arg1 ;
-(id)_serviceDomain;
-(id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2 ;
-(id)imdAccountLoginFromIDSAccountWithType:(int)arg1 login:(id)arg2 ;
-(void)_loadIDSAccountController;
-(id)accountFromIDSAccountWithUniqueID:(id)arg1 ;
-(void)accountController:(id)arg1 accountAdded:(id)arg2 ;
-(void)accountController:(id)arg1 accountUpdated:(id)arg2 ;
-(void)accountController:(id)arg1 accountRemoved:(id)arg2 ;
-(void)accountController:(id)arg1 accountEnabled:(id)arg2 ;
-(void)accountController:(id)arg1 accountDisabled:(id)arg2 ;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2 ;
-(IDSAccountController *)idsAccountController;
-(Class)accountClass;
@end

