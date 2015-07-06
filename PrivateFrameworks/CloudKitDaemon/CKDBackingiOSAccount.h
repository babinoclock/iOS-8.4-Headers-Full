/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDBackingAccount.h>

@class ACAccountStore, ACAccount;

@interface CKDBackingiOSAccount : CKDBackingAccount {

	ACAccountStore* _accountStore;
	ACAccount* _parentAppleAccount;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccount * ckAccount; 
@property (nonatomic,retain) ACAccount * parentAppleAccount;               //@synthesize parentAppleAccount=_parentAppleAccount - In the implementation block
+(id)primaryAccountInStore:(id)arg1 ;
+(id)accountWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)identifier;
-(char)allowsCellularAccess;
-(ACAccountStore *)accountStore;
-(char)cloudPhotosIsEnabled;
-(char)cloudKitIsEnabled;
-(id)dsid;
-(id)cloudKitAuthToken;
-(id)iCloudAuthToken;
-(id)primaryEmail;
-(ACAccount *)ckAccount;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(id)_initWithParentAccount:(id)arg1 inStore:(id)arg2 ;
-(ACAccount *)parentAppleAccount;
-(void)setParentAppleAccount:(ACAccount *)arg1 ;
@end

