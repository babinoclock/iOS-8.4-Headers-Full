/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol EKICSPreviewListDelegate;
@class EKICSPreviewModel, NSMutableArray;

@interface EKICSPreviewListController : UITableViewController {

	EKICSPreviewModel* _model;
	NSMutableArray* _sections;
	char _allowsImport;
	char _allowsSubitems;
	char _showWeekNumbers;
	id<EKICSPreviewListDelegate> _listDelegate;

}

@property (assign,nonatomic) char allowsImport;                                             //@synthesize allowsImport=_allowsImport - In the implementation block
@property (assign,nonatomic) char allowsSubitems;                                           //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic,__weak) id<EKICSPreviewListDelegate> listDelegate;              //@synthesize listDelegate=_listDelegate - In the implementation block
@property (assign,nonatomic) char showWeekNumbers;                                          //@synthesize showWeekNumbers=_showWeekNumbers - In the implementation block
-(void)setAllowsSubitems:(char)arg1 ;
-(void)setListDelegate:(id<EKICSPreviewListDelegate>)arg1 ;
-(void)setAllowsImport:(char)arg1 ;
-(char)allowsImport;
-(char)allowsSubitems;
-(void)_showWeekNumbersPreferenceChanged:(id)arg1 ;
-(char)showWeekNumbers;
-(void)setShowWeekNumbers:(char)arg1 ;
-(void)buildSections;
-(void)updateImportButton;
-(void)importAllPressed:(id)arg1 ;
-(id<EKICSPreviewListDelegate>)listDelegate;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithModel:(id)arg1 ;
@end

