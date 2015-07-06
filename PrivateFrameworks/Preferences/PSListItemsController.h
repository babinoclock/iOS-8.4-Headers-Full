/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSListItemsController : PSListController {

	int _rowToSelect;
	char _deferItemSelection;
	char _restrictionList;
	PSSpecifier* _lastSelectedSpecifier;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)suspend;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)specifiers;
-(void)prepareSpecifiersMetadata;
-(void)didLock;
-(void)scrollToSelectedCell;
-(void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2 ;
-(void)setRowToSelect;
-(void)listItemSelected:(id)arg1 ;
-(void)_addStaticText:(id)arg1 ;
-(id)itemsFromParent;
-(id)itemsFromDataSource;
-(char)isRestrictionList;
-(void)setIsRestrictionList:(char)arg1 ;
@end

