/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <UIKit/UIActionSheetDelegate.h>

@class PSSpecifier, NSArray, NSMutableDictionary, NSString;

@interface SafariStorageSettingsController : PSEditableListController <UIActionSheetDelegate> {

	id _modalAlert;
	PSSpecifier* _totalUsageSpecifier;
	NSArray* _deleteButtonSpecifiers;
	NSMutableDictionary* _domainSpecifiers;
	NSArray* _sortedDomains;
	char _cancelDomainSpecifierUpdate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)deleteAllData;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setEditable:(char)arg1 ;
-(id)_getSpecifierDiskUsage:(id)arg1 ;
-(void)_deleteOriginData:(id)arg1 ;
-(void)_addDomain:(id)arg1 withUsage:(unsigned long long)arg2 toDictionary:(id)arg3 ;
-(id)_totalUsageString;
-(void)showAllDomainSpecifiers;
-(void)_addCookieDomainsToDictionary:(id)arg1 ;
-(void)_updateTotalUsageSpecifier;
-(void)_addDomainSpecifiers;
-(void)_addWebSecurityDomainsToDictionary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_createDomainSpecifiers;
-(void)_showDeleteAllOriginsAlert;
-(void)_deleteAllOrigins;
-(id)specifiers;
@end

