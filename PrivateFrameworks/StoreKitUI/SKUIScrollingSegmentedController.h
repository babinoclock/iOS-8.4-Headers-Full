/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUIProxyScrollViewDelegate.h>
#import <StoreKitUI/SKUIScrollingSegmentedControllerCollectionViewDelegate.h>
#import <StoreKitUI/SKUIScrollingSegmentedControllerItemContextDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <StoreKitUI/SKUIScrollingTabAppearanceStatusObserver.h>
#import <StoreKitUI/SKUIScrollingTabNestedPagedScrolling.h>
#import <StoreKitUI/SKUIViewControllerWithFocusedViewController.h>

@protocol SKUIScrollingSegmentedControllerDelegate;
@class UIViewController, SKUIScrollingSegmentedControllerCollectionView, SKUIScrollingSegmentedControllerNavigationBarTitleView, SKUIProxyScrollView, NSMutableArray, SKUIInteractiveSegmentedControl, NSMapTable, NSArray, UIView, NSString, UIScrollView;

@interface SKUIScrollingSegmentedController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollingSegmentedControllerCollectionViewDelegate, SKUIScrollingSegmentedControllerItemContextDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUIViewControllerWithFocusedViewController> {

	CGSize _contentCollectionViewItemSize;
	SKUIScrollingSegmentedControllerCollectionView* _contentCollectionView;
	SKUIScrollingSegmentedControllerNavigationBarTitleView* _navigationBarTitleView;
	SKUIProxyScrollView* _proxyScrollView;
	UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
	SCD_Struct_SK8 _scrollingTabAppearanceStatus;
	NSMutableArray* _titleObservingViewControllers;
	SKUIInteractiveSegmentedControl* _titlesSegmentedControl;
	char _viewBackgroundIsWhite;
	NSMapTable* _viewControllerToItemContext;
	char _wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
	char _wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
	id<SKUIScrollingSegmentedControllerDelegate> _delegate;
	NSArray* _viewControllers;
	float _segmentedControlHeight;
	int _segmentedControlLayoutStyle;
	unsigned _focusedViewControllerIndex;
	UIEdgeInsets _segmentedControlContentEdgeInsets;

}

@property (assign,nonatomic,__weak) id<SKUIScrollingSegmentedControllerDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                                                                                //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic) UIEdgeInsets segmentedControlContentEdgeInsets;                                                         //@synthesize segmentedControlContentEdgeInsets=_segmentedControlContentEdgeInsets - In the implementation block
@property (assign,nonatomic) float segmentedControlHeight;                                                                           //@synthesize segmentedControlHeight=_segmentedControlHeight - In the implementation block
@property (assign,nonatomic) int segmentedControlLayoutStyle;                                                                        //@synthesize segmentedControlLayoutStyle=_segmentedControlLayoutStyle - In the implementation block
@property (nonatomic,readonly) unsigned focusedViewControllerIndex;                                                                  //@synthesize focusedViewControllerIndex=_focusedViewControllerIndex - In the implementation block
@property (nonatomic,readonly) UIView * navigationBarTitleView;                                                                      //@synthesize navigationBarTitleView=_navigationBarTitleView - In the implementation block
@property (assign,nonatomic) char wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;                                                    //@synthesize wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing=_wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing - In the implementation block
@property (assign,nonatomic) char wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;                                                   //@synthesize wantsWhiteBackgroundBeyondRightEdgeWhenBouncing=_wantsWhiteBackgroundBeyondRightEdgeWhenBouncing - In the implementation block
@property (getter=_titlesSegmentedControl,nonatomic,readonly) SKUIInteractiveSegmentedControl * titlesSegmentedControl;              //@synthesize titlesSegmentedControl=_titlesSegmentedControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollingTabNestedPagingScrollView; 
@property (nonatomic,readonly) UIViewController * focusedViewController; 
+(UIEdgeInsets)defaultSegmentedControlContentEdgeInsetsForLayoutStyle:(int)arg1 ;
+(float)defaultSegmentedControlHeight;
-(id)music_reportingFeatureName;
-(id)music_reportingRecommendationData;
-(void)dealloc;
-(void)setDelegate:(id<SKUIScrollingSegmentedControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<SKUIScrollingSegmentedControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setClientContext:(id)arg1 ;
-(void)selectViewControllerAtIndex:(unsigned)arg1 animated:(char)arg2 ;
-(void)scrollingTabAppearanceStatusWasUpdated:(SCD_Struct_SK8)arg1 ;
-(UIScrollView *)scrollingTabNestedPagingScrollView;
-(id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned)arg1 ;
-(UIView *)navigationBarTitleView;
-(UIEdgeInsets)segmentedControlContentEdgeInsets;
-(float)segmentedControlHeight;
-(void)setSegmentedControlLayoutStyle:(int)arg1 ;
-(void)setSegmentedControlContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(int)segmentedControlLayoutStyle;
-(void)setSegmentedControlHeight:(float)arg1 ;
-(void)replaceViewControllerAtIndex:(unsigned)arg1 withViewController:(id)arg2 ;
-(void)_updateScrollViewContentOffsetsToTargetContentOffsets;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(void)scrollViewDidMoveToWindow:(id)arg1 ;
-(void)_titlesSegmentedControlValueChangeAction:(id)arg1 ;
-(void)_updateViewBackgroundColor;
-(void)_reloadTitleSegments;
-(void)_updateTitlesSelectionProgress;
-(char)_configureSegment:(id)arg1 forViewController:(id)arg2 ;
-(UIEdgeInsets)_viewControllerContentScrollViewContentInset;
-(id)_indexPathOfFocusedItemAllowingLayoutIfNeeded:(char)arg1 ;
-(void)_setViewControllers:(id)arg1 viewUpdatesHandler:(/*^block*/id)arg2 ;
-(void)_scrollToTitlesSelectionProgress:(float)arg1 animated:(char)arg2 ;
-(void)_updateTitleValueObservation;
-(void)scrollingSegmentedControllerCollectionViewDidLayoutSubviews:(id)arg1 ;
-(void)contentScrollViewDidChangeForScrollingSegmentedControllerItemContext:(id)arg1 ;
-(UIViewController *)focusedViewController;
-(void)setWantsWhiteBackgroundBeyondLeftEdgeWhenBouncing:(char)arg1 ;
-(void)setWantsWhiteBackgroundBeyondRightEdgeWhenBouncing:(char)arg1 ;
-(void)_viewControllerNeedsContentScrollViewUpdates:(id)arg1 ;
-(unsigned)focusedViewControllerIndex;
-(char)wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
-(char)wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
-(id)_titlesSegmentedControl;
@end

