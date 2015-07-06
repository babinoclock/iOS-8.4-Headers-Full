/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol EKShareeViewControllerDelegate;
@class UIAlertController, EKSharee;

@interface EKShareeViewController : UITableViewController {

	UIAlertController* _removeAlertController;
	char _allowEditing;
	char _allowStopSharing;
	char _allowResendInvitations;
	EKSharee* _sharee;
	id<EKShareeViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) EKSharee * sharee;                                               //@synthesize sharee=_sharee - In the implementation block
@property (assign,nonatomic) char allowEditing;                                               //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) char allowStopSharing;                                           //@synthesize allowStopSharing=_allowStopSharing - In the implementation block
@property (assign,nonatomic) char allowResendInvitations;                                     //@synthesize allowResendInvitations=_allowResendInvitations - In the implementation block
@property (assign,nonatomic,__weak) id<EKShareeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSharee:(id)arg1 ;
-(void)setAllowStopSharing:(char)arg1 ;
-(void)setAllowResendInvitations:(char)arg1 ;
-(EKSharee *)sharee;
-(int)_rowForSubitem:(int)arg1 ;
-(void)setSharee:(EKSharee *)arg1 ;
-(void)setAllowEditing:(char)arg1 ;
-(char)_shouldDisplayResendInvitationButton;
-(void)_reloadTitle;
-(char)allowEditing;
-(char)_shouldDisplayStopSharingButton;
-(int)_subitemAtRow:(int)arg1 ;
-(void)_allowEditingChanged:(id)arg1 ;
-(void)removeClicked:(id)arg1 ;
-(char)allowStopSharing;
-(char)allowResendInvitations;
-(void)setDelegate:(id<EKShareeViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<EKShareeViewControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
@end
