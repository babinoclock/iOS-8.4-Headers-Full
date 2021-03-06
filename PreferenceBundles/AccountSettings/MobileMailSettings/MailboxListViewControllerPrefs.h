/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMailSettings/MailboxListViewControllerBase.h>

@interface MailboxListViewControllerPrefs : MailboxListViewControllerBase {

	int _pickingForType;

}
+(int)tableViewStyle;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)setViewingContext:(id)arg1 ;
-(void)_loadMailboxes;
-(void)refreshDisplay;
-(id)mailboxForIndexPath:(id)arg1 ;
-(id)_ntsMailboxesForAccount:(id)arg1 ;
-(id)indexPathForMailbox:(id)arg1 ;
-(void)_updateSelection;
@end

