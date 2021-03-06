/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerPresenting.h>
#import <UIKit/_UIScrollNotification.h>
#import <UIKit/NSCoding.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerAnimatedTransitioning, UISearchResultsUpdating, UISearchControllerDelegate;
@class UISearchBar, _UISearchControllerDidScrollDelegate, UIView, UIViewController, NSString;

@interface UISearchController : UIViewController <UIViewControllerPresenting, _UIScrollNotification, NSCoding, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UISearchBar* _searchBar;
	int _barPresentationStyle;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id _windowWillAnimateToken;
	_UISearchControllerDidScrollDelegate* _didScrollDelegate;
	struct {
		unsigned searchBarWasTableHeaderView : 1;
	}  _controllerFlags;
	char _dimsBackgroundDuringPresentation;
	char _hidesNavigationBarDuringPresentation;
	char __showResultsForEmptySearch;
	UIView* _resultsControllerViewContainer;
	id<UISearchResultsUpdating> _searchResultsUpdater;
	id<UISearchControllerDelegate> _delegate;
	UIViewController* _searchResultsController;
	int __previousSearchBarPosition;
	float __resultsContentScrollViewPresentationOffset;

}

@property (assign,nonatomic) id<UISearchResultsUpdating> searchResultsUpdater;                                   //@synthesize searchResultsUpdater=_searchResultsUpdater - In the implementation block
@property (assign,getter=isActive,nonatomic) char active; 
@property (assign,nonatomic) id<UISearchControllerDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char dimsBackgroundDuringPresentation;                                              //@synthesize dimsBackgroundDuringPresentation=_dimsBackgroundDuringPresentation - In the implementation block
@property (assign,nonatomic) char hidesNavigationBarDuringPresentation;                                          //@synthesize hidesNavigationBarDuringPresentation=_hidesNavigationBarDuringPresentation - In the implementation block
@property (nonatomic,retain,readonly) UIViewController * searchResultsController;                                //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,retain,readonly) UISearchBar * searchBar;                                                   //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,setter=_setShowResultsForEmptySearch:,nonatomic) char _showResultsForEmptySearch;              //@synthesize _showResultsForEmptySearch=__showResultsForEmptySearch - In the implementation block
@property (nonatomic,readonly) int _barPresentationStyle;                                                        //@synthesize barPresentationStyle=_barPresentationStyle - In the implementation block
@property (assign,nonatomic) int _previousSearchBarPosition;                                                     //@synthesize _previousSearchBarPosition=__previousSearchBarPosition - In the implementation block
@property (nonatomic,retain) UIView * _resultsControllerViewContainer;                                           //@synthesize resultsControllerViewContainer=_resultsControllerViewContainer - In the implementation block
@property (assign,nonatomic) float _resultsContentScrollViewPresentationOffset;                                  //@synthesize _resultsContentScrollViewPresentationOffset=__resultsContentScrollViewPresentationOffset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UISearchControllerDelegate>)arg1 ;
-(id<UISearchControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)isActive;
-(void)_commonInit;
-(void)_updateBackdropMaskViewsInScrollView:(id)arg1 ;
-(void)_didScroll;
-(void)_presentingViewControllerDidChange:(id)arg1 ;
-(void)_presentingViewControllerWillChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)setModalPresentationStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(char)_requiresCustomPresentationController;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(UISearchBar *)searchBar;
-(void)setActive:(char)arg1 ;
-(char)dimsBackgroundDuringPresentation;
-(char)_showResultsForEmptySearch;
-(int)_barPresentationStyle;
-(char)hidesNavigationBarDuringPresentation;
-(UIViewController *)searchResultsController;
-(void)_updateSearchBarMaskIfNecessary;
-(void)_searchBarSuperviewChanged;
-(void)_searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_searchBarCancelButtonClicked:(id)arg1 ;
-(void)_searchBarTextDidBeginEditing:(id)arg1 ;
-(void)_searchBarSearchButtonClicked:(id)arg1 ;
-(char)_searchBarShouldFinalizeBecomingFirstResponder;
-(void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(float)arg2 ;
-(char)_resultsControllerWillLayoutVisibleUnderContainerView;
-(void)set_resultsContentScrollViewPresentationOffset:(float)arg1 ;
-(void)_dismissPresentation:(char)arg1 ;
-(id)_searchPresentationController;
-(void)set_previousSearchBarPosition:(int)arg1 ;
-(float)_resultsContentScrollViewPresentationOffset;
-(UIView *)_resultsControllerViewContainer;
-(int)_previousSearchBarPosition;
-(id)initWithSearchResultsController:(id)arg1 ;
-(void)_updateSearchResultsControllerWithDelta:(CGSize)arg1 ;
-(void)_connectSearchBar:(id)arg1 ;
-(void)_adjustSearchBarSizeForOrientation:(int)arg1 ;
-(id)_createAnimationCoordinator;
-(void)_resizeResultsControllerWithDelta:(CGSize)arg1 ;
-(void)_performAutomaticPresentation;
-(id)_locatePresentingViewController;
-(void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1 ;
-(id<UISearchResultsUpdating>)searchResultsUpdater;
-(void)_watchScrollView:(id)arg1 forScrolling:(char)arg2 ;
-(void)_sizeSearchViewToPresentingViewController:(id)arg1 ;
-(void)_willPresentFromViewController:(id)arg1 ;
-(void)_didPresentFromViewController:(id)arg1 ;
-(void)_willDismissSearchController;
-(void)_didDismissSearchController;
-(char)_allowFormSheetStylePresentation;
-(id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(char)arg2 ;
-(void)_updateSearchResultsContentScrollViewWithDelta:(CGSize)arg1 ;
-(void)_updateSearchResultsPositionWithDelta:(CGSize)arg1 ;
-(void)_beginWatchingPresentingController;
-(void)_endWatchingPresentingController;
-(void)_navigationControllerWillShowViewController:(id)arg1 ;
-(void)set_resultsControllerViewContainer:(UIView *)arg1 ;
-(void)setSearchResultsUpdater:(id<UISearchResultsUpdating>)arg1 ;
-(void)setDimsBackgroundDuringPresentation:(char)arg1 ;
-(void)setHidesNavigationBarDuringPresentation:(char)arg1 ;
-(void)_setShowResultsForEmptySearch:(char)arg1 ;
@end

