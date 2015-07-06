/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKStackingViewController.h>
#import <MapKit/MKStackingViewControllerDelegate.h>
#import <MapKit/MKActivityViewControllerDelegate.h>
#import <MapKit/ABContactViewControllerDelegate.h>
#import <MapKit/ABNewPersonViewControllerDelegate.h>
#import <MapKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <MapKit/MKPlaceSharedAttributionDelegate.h>
#import <MapKit/MKPlaceNearbyAppsViewControllerDelegate.h>
#import <MapKit/SKProductPageViewControllerDelegate.h>
#import <MapKit/MKPlaceHeaderViewDelegate.h>
#import <MapKit/MKPlaceCardPhotosControllerDelegate.h>
#import <MapKit/MKPlaceCardReviewsControllerDelegate.h>
#import <MapKit/MKPlaceInfoViewControllerDelegate.h>
#import <MapKit/MKPlaceActionsViewControllerDelegate.h>

@protocol _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, ABContactViewControllerDelegate;
@class MKPlaceInfoViewController, MKPlaceActionsViewController, UITapGestureRecognizer, SKProductPageViewController, NSArray, NSMapTable, NSString, MKPlaceHeaderView, MKSegmentedControlTabBarView, MKDistanceDetailProvider, MKMapItem, CNContact, MKPlaceNearbyAppsMetricsCoordinator, ABPeoplePickerNavigationController, NSMutableArray;

@interface _MKPlaceViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, MKPlaceSharedAttributionDelegate, MKPlaceNearbyAppsViewControllerDelegate, SKProductPageViewControllerDelegate, MKPlaceHeaderViewDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceActionsViewControllerDelegate> {

	MKPlaceInfoViewController* _infoViewController;
	MKPlaceActionsViewController* _actionsViewController;
	UITapGestureRecognizer* _flyoverTourTapRecognizer;
	char _isSearchingForNearbyApps;
	SKProductPageViewController* _storePageViewController;
	NSArray* _storeItems;
	void* _addressBook;
	void* _originalContactRecordCopy;
	NSMapTable* _additionalViewControllers;
	char _overrideDefaultShowRAP;
	char _hasContactOnlyMapItem;
	char _hasCheckedDistanceAvailability;
	char _showContactActions;
	NSString* _headerTitle;
	MKPlaceHeaderView* _placeHeaderView;
	MKSegmentedControlTabBarView* _tabBar;
	MKDistanceDetailProvider* _distanceMonitor;
	MKMapItem* _mapItem;
	CNContact* _contact;
	CNContact* _originalContact;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
	id<_MKPlaceViewControllerFeedbackDelegate> _placeViewFeedbackDelegate;
	unsigned _options;
	float _headerHeight;
	MKPlaceNearbyAppsMetricsCoordinator* _metricsCoordinator;
	ABPeoplePickerNavigationController*<ABContactViewControllerDelegate> _contactsNavigationController;
	NSMutableArray* _viewDidAppearBlocks;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                                                                   //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                                                                                                  //@synthesize headerTitle=_headerTitle - In the implementation block
@property (assign,nonatomic) char showShareActionsButton; 
@property (assign,nonatomic) unsigned options;                                                                                                      //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerFeedbackDelegate> placeViewFeedbackDelegate;                                           //@synthesize placeViewFeedbackDelegate=_placeViewFeedbackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;                                                 //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                                                                                 //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) char showContactActions;                                                                                               //@synthesize showContactActions=_showContactActions - In the implementation block
@property (assign,nonatomic,__weak) ABPeoplePickerNavigationController*<ABContactViewControllerDelegate> contactsNavigationController;              //@synthesize contactsNavigationController=_contactsNavigationController - In the implementation block
@property (assign,nonatomic) float headerHeight;                                                                                                    //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) char showTitleBar; 
@property (assign,nonatomic) char hideDirectionsButtons; 
@property (assign,nonatomic) char showEditButton; 
@property (assign,nonatomic) char hideInlineMap; 
@property (assign,nonatomic) char showInlineMapInHeader; 
@property (assign,nonatomic) char showRemovePin; 
@property (assign,nonatomic) char showNearbyApps; 
@property (assign,nonatomic) char showFlyoverTour; 
@property (assign,nonatomic) char showReportAProblem; 
@property (assign,nonatomic) char disableReportAProblem; 
@property (assign,nonatomic) char showCreateReminder; 
@property (assign,nonatomic) char showSimulateLocation; 
@property (assign,nonatomic) char showOpenInSkyline; 
@property (nonatomic,retain) MKPlaceHeaderView * placeHeaderView;                                                                                   //@synthesize placeHeaderView=_placeHeaderView - In the implementation block
@property (nonatomic,retain) MKSegmentedControlTabBarView * tabBar;                                                                                 //@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,retain) CNContact * originalContact;                                                                                           //@synthesize originalContact=_originalContact - In the implementation block
@property (nonatomic,retain) MKDistanceDetailProvider * distanceMonitor;                                                                            //@synthesize distanceMonitor=_distanceMonitor - In the implementation block
@property (assign,nonatomic) char hasCheckedDistanceAvailability;                                                                                   //@synthesize hasCheckedDistanceAvailability=_hasCheckedDistanceAvailability - In the implementation block
@property (nonatomic,readonly) MKPlaceNearbyAppsMetricsCoordinator * metricsCoordinator;                                                            //@synthesize metricsCoordinator=_metricsCoordinator - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewDidAppearBlocks;                                                                                  //@synthesize viewDidAppearBlocks=_viewDidAppearBlocks - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 ;
-(void)setShowEditButton:(char)arg1 ;
-(void)setShowShareActionsButton:(char)arg1 ;
-(void)setContactsNavigationController:(ABPeoplePickerNavigationController*<ABContactViewControllerDelegate>)arg1 ;
-(void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(char)arg3 ;
-(void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(char)arg3 ;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned)arg3 ;
-(void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(char)arg3 ;
-(id)initWithMapItem:(id)arg1 options:(unsigned)arg2 ;
-(void)setViewDidAppearBlocks:(NSMutableArray *)arg1 ;
-(void)_setupHeaderView;
-(void)_showEditSheet:(id)arg1 ;
-(void)_showShareSheet:(id)arg1 ;
-(void)_searchForNearbyAppsIfNecessary;
-(void)restartHeaderViewAnimations;
-(void)resetHeaderViewAnimations;
-(void)presentHeaderView;
-(void)_setHeaderSubtitleWithDistanceInfo:(id)arg1 numberOfReviews:(unsigned)arg2 ;
-(NSMutableArray *)viewDidAppearBlocks;
-(MKPlaceHeaderView *)placeHeaderView;
-(void)resetHeaderView;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(id)additionalViewControllersAtPosition:(int)arg1 ;
-(void)setShowContactActions:(char)arg1 ;
-(void)updateActionVisibility;
-(void)_setViewControllersWithInformationViewControllers:(id)arg1 ;
-(void)setOriginalContact:(CNContact *)arg1 ;
-(void)_updateViewControllers;
-(id)_mapTableKeyForSectionPosition:(int)arg1 ;
-(id<_MKPlaceViewControllerFeedbackDelegate>)placeViewFeedbackDelegate;
-(void)setPlaceHeaderView:(MKPlaceHeaderView *)arg1 ;
-(void)_tappedForFlyoverTour;
-(void)_openInfoAttribution;
-(CNContact *)originalContact;
-(id)_contactForEditOperations;
-(char)showContactActions;
-(void)setShowRemovePin:(char)arg1 ;
-(char)_showReportAProblem;
-(void)setShowReportAProblem:(char)arg1 ;
-(void)setShowCreateReminder:(char)arg1 ;
-(void)setShowSimulateLocation:(char)arg1 ;
-(void)setShowOpenInSkyline:(char)arg1 ;
-(char)_removeMapsDataFromContactWithRecordID:(int)arg1 ;
-(ABPeoplePickerNavigationController*<ABContactViewControllerDelegate>)contactsNavigationController;
-(void)_searchForNearbyApps;
-(void)_findNearbyAppsAtCoordinate:(SCD_Struct_MK1)arg1 ;
-(MKPlaceNearbyAppsMetricsCoordinator *)metricsCoordinator;
-(void)_openAppWithBundleID:(id)arg1 ;
-(void)_displayAppWithMetadata:(id)arg1 ;
-(float)stackingViewControllerHeightForHeaderView:(id)arg1 ;
-(void)stackingViewController:(id)arg1 calculatedTransformForHeaderView:(CATransform3D)arg2 ;
-(char)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2 ;
-(void)stackingViewController:(id)arg1 willSelectViewController:(id)arg2 ;
-(void)stackingViewControllerWillBeginScroll:(id)arg1 ;
-(void)stackingViewControllerDidEndScroll:(id)arg1 ;
-(void)openInfoAttribution;
-(void)nearbyAppsController:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3 ;
-(void)nearbyAppsController:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3 ;
-(void)headerView:(id)arg1 didFinishLoadingBackgroundViewOfType:(int)arg2 ;
-(char)headerViewshouldShowTitleSubtitleAndStarRatings:(id)arg1 ;
-(void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2 ;
-(void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1 ;
-(void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1 ;
-(void)placeCardReviewsControllerDidSelectCheckIn:(id)arg1 ;
-(void)placeCardReviewsControllerDidSelectWriteReview:(id)arg1 ;
-(void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1 ;
-(void)placeCardReviewsController:(id)arg1 didSelectViewReviewWithID:(id)arg2 ;
-(char)shouldShowInlineMapForInfoViewController:(id)arg1 ;
-(char)shouldShowDirectionsForInfoViewController:(id)arg1 ;
-(char)shouldShowFlyoverTourForInfoViewController:(id)arg1 ;
-(void)infoViewController:(id)arg1 didSelectDeal:(id)arg2 ;
-(void)actionsViewControllerCreateNewContact:(id)arg1 ;
-(void)actionsViewControllerAddContactToExistingContact:(id)arg1 ;
-(void)actionsViewControllerRemovePin:(id)arg1 ;
-(void)actionsViewControllerReportAProblem:(id)arg1 ;
-(void)actionsViewControllerShare:(id)arg1 ;
-(void)actionsViewControllerCreateReminder:(id)arg1 ;
-(void)actionsViewControllerSimulateLocation:(id)arg1 ;
-(void)actionsViewControllerOpenInSkyline:(id)arg1 ;
-(char)showTitleBar;
-(void)setShowTitleBar:(char)arg1 ;
-(char)hideDirectionsButtons;
-(void)setHideDirectionsButtons:(char)arg1 ;
-(char)showEditButton;
-(char)hideInlineMap;
-(char)showInlineMapInHeader;
-(void)setShowInlineMapInHeader:(char)arg1 ;
-(char)showRemovePin;
-(char)showNearbyApps;
-(void)setShowNearbyApps:(char)arg1 ;
-(char)showFlyoverTour;
-(void)setShowFlyoverTour:(char)arg1 ;
-(char)showReportAProblem;
-(char)disableReportAProblem;
-(void)setDisableReportAProblem:(char)arg1 ;
-(char)showCreateReminder;
-(char)showSimulateLocation;
-(char)showOpenInSkyline;
-(char)showShareActionsButton;
-(int)_sectionPositionForMapTableKey:(id)arg1 ;
-(void)addAdditionalViewController:(id)arg1 atPosition:(int)arg2 ;
-(void)removeAdditionalViewController:(id)arg1 ;
-(void)_switchToTabAtIndex:(int)arg1 ;
-(id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2 ;
-(MKDistanceDetailProvider *)distanceMonitor;
-(void)setDistanceMonitor:(MKDistanceDetailProvider *)arg1 ;
-(char)hasCheckedDistanceAvailability;
-(void)setHasCheckedDistanceAvailability:(char)arg1 ;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(void)setPlaceViewFeedbackDelegate:(id<_MKPlaceViewControllerFeedbackDelegate>)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)dealloc;
-(id)init;
-(int)preferredStatusBarStyle;
-(void)_commonInit;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(MKSegmentedControlTabBarView *)tabBar;
-(void)setTabBar:(MKSegmentedControlTabBarView *)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(float)headerHeight;
-(void)setHeaderHeight:(float)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)setHideInlineMap:(char)arg1 ;
-(void)_didResolveAttribution:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
@end

