/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ContactsSettings.bundle/ContactsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray;

@interface ContactsShortNameController : PSListController {

	PSSpecifier* _shortNameEnabledSpecifier;
	PSSpecifier* _shortNameFormatsGroup;
	NSMutableArray* _shortNameFormatsSpecifiers;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_synchronizeNanoUserDefault:(id)arg1 ;
-(void)setShortNameEnabled:(id)arg1 ;
-(id)shortNameEnabled;
-(void)setPreferNicknames:(id)arg1 ;
-(id)preferNicknames;
-(void)setShortNameFormat:(id)arg1 ;
-(id)shortNameFormat;
-(id)specifiers;
@end
