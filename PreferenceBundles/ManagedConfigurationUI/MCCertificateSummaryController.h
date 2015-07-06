/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray, NSString, NSDate, MCDetailsHeaderCell, MCDetailsDescriptionTableCell, UITableViewCell;

@interface MCCertificateSummaryController : PSListController {

	SecTrustRef _trust;
	NSArray* _properties;
	NSString* _displayName;
	NSString* _organizationName;
	NSString* _purpose;
	NSDate* _expiration;
	MCDetailsHeaderCell* _configHeader;
	MCDetailsDescriptionTableCell* _configMiddle;
	UITableViewCell* _configBottom;
	char _backButtonWasHidden;

}
+(id)_dateFormatter;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)hideActionButton;
-(id)_valueAtPath:(id)arg1 ;
-(void)_setTrust:(SecTrustRef)arg1 ;
-(void)actionButtonPressed:(id)arg1 ;
-(id)specifiers;
@end

