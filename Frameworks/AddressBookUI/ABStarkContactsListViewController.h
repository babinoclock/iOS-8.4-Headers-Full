/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <AddressBookUI/ABMembersDataSourceDelegate.h>
#import <AddressBookUI/ABContactViewControllerDelegate.h>

@protocol ABStarkContactsListViewControllerDelegate;
@class ABMembersDataSource, ABModel, ABStarkNoContentBannerView, AVExternalDevice, NSString;

@interface ABStarkContactsListViewController : UITableViewController <ABMembersDataSourceDelegate, ABContactViewControllerDelegate> {

	ABMembersDataSource* _dataSource;
	ABModel* _model;
	char _limitedUI;
	id<ABStarkContactsListViewControllerDelegate> _peoplePickerDelegate;
	ABStarkNoContentBannerView* _overlayView;
	AVExternalDevice* _externalDevice;

}

@property (assign,nonatomic) id<ABStarkContactsListViewControllerDelegate> peoplePickerDelegate;              //@synthesize peoplePickerDelegate=_peoplePickerDelegate - In the implementation block
@property (nonatomic,retain) ABStarkNoContentBannerView * overlayView;                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) AVExternalDevice * externalDevice;                                               //@synthesize externalDevice=_externalDevice - In the implementation block
@property (assign,nonatomic) char limitedUI;                                                                  //@synthesize limitedUI=_limitedUI - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(char)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(char)arg5 ;
-(char)abDataSourceAllowsShowingPersonsCards:(id)arg1 ;
-(char)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(id<ABStarkContactsListViewControllerDelegate>)peoplePickerDelegate;
-(void)limitedUINotification:(id)arg1 ;
-(AVExternalDevice *)externalDevice;
-(void)setLimitedUI:(char)arg1 ;
-(void)postMessageOverlayIfNecessary;
-(void)setExternalDevice:(AVExternalDevice *)arg1 ;
-(char)limitedUI;
-(ABStarkNoContentBannerView *)overlayView;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setPeoplePickerDelegate:(id<ABStarkContactsListViewControllerDelegate>)arg1 ;
-(void)setOverlayView:(ABStarkNoContentBannerView *)arg1 ;
@end

