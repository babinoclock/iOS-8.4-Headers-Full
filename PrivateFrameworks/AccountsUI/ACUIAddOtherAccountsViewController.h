/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <AccountsUI/ACUISetupViewControllerDelegate.h>

@class NSString;

@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupViewControllerDidDismiss:(id)arg1 ;
-(id)_specifiersForOtherMailAccounts;
-(id)_specifiersForOtherContactsAccounts;
-(id)_specifiersForOtherCalendarAccounts;
-(id)_viewProvidersManager;
-(id)specifiers;
@end
