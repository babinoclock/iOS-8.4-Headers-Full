/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface _UIDocumentPickerManagementViewController : UITableViewController {

	NSArray* _allPickers;

}

@property (nonatomic,retain) NSArray * allPickers;              //@synthesize allPickers=_allPickers - In the implementation block
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)_doneButtonPressed;
-(NSArray *)allPickers;
-(void)setAllPickers:(NSArray *)arg1 ;
-(void)switchToggled:(id)arg1 ;
@end

