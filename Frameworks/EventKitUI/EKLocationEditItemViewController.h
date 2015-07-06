/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <EventKitUI/EKUILocationSearchModelDelegate.h>

@class UISearchBar, UITableView, _UINavigationControllerPalette, EKUILocationSearchModel, EKCalendarItem, EKStructuredLocation, EKUIConferenceRoom, NSString;

@interface EKLocationEditItemViewController : EKEditItemViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, EKUILocationSearchModelDelegate> {

	UISearchBar* _searchBar;
	UITableView* _tableView;
	_UINavigationControllerPalette* _palette;
	EKUILocationSearchModel* _searchModel;
	EKCalendarItem* _calendarItem;
	CGSize _preferredContentSize;
	char _supportsStructuredLocations;
	char _needsSave;
	char _onlyDisplayMapLocations;
	EKStructuredLocation* _structuredLocation;
	EKStructuredLocation* _selectedLocation;
	EKUIConferenceRoom* _selectedConferenceRoom;

}

@property (assign,nonatomic) char needsSave;                                           //@synthesize needsSave=_needsSave - In the implementation block
@property (assign,nonatomic) char onlyDisplayMapLocations;                             //@synthesize onlyDisplayMapLocations=_onlyDisplayMapLocations - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * structuredLocation;                //@synthesize structuredLocation=_structuredLocation - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * selectedLocation;                  //@synthesize selectedLocation=_selectedLocation - In the implementation block
@property (nonatomic,retain) EKUIConferenceRoom * selectedConferenceRoom;              //@synthesize selectedConferenceRoom=_selectedConferenceRoom - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sectionNameForSection:(unsigned)arg1 ;
-(EKStructuredLocation *)structuredLocation;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(char)presentModally;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4 ;
-(EKUIConferenceRoom *)selectedConferenceRoom;
-(EKStructuredLocation *)selectedLocation;
-(void)currentLocationUpdated:(id)arg1 ;
-(void)mapSearchUpdated:(id)arg1 ;
-(void)contactsSearchUpdated:(id)arg1 ;
-(void)recentsSearchUpdated:(id)arg1 ;
-(void)frequentsSearchUpdated:(id)arg1 ;
-(void)eventsSearchUpdated:(id)arg1 ;
-(id)calendarItemForSearchModel:(id)arg1 ;
-(void)conferenceRoomSearchUpdated:(id)arg1 ;
-(void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3 ;
-(void)setSelectedLocation:(EKStructuredLocation *)arg1 ;
-(char)showingTextRow;
-(char)showingCurrentLocationRow;
-(void)useAsString:(id)arg1 ;
-(void)setSelectedConferenceRoom:(EKUIConferenceRoom *)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)greyPinImage;
-(id)locationArrowImage;
-(id)contactsImage;
-(id)redPinImage;
-(id)_cellForConferenceRoomRowInTableView:(id)arg1 indexPath:(id)arg2 ;
-(char)onlyDisplayMapLocations;
-(void)setOnlyDisplayMapLocations:(char)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)title;
-(void)viewDidLayoutSubviews;
-(char)tableView:(id)arg1 wantsHeaderForSection:(int)arg2 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setNeedsSave:(char)arg1 ;
-(char)needsSave;
@end

