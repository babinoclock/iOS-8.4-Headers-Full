/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/IKAppDocumentDelegate.h>
#import <StoreKitUI/SKUIMediaQueryDelegate.h>
#import <StoreKitUI/SKUIModalSourceViewProvider.h>
#import <StoreKitUI/SKUINavigationBarControllerDelegate.h>
#import <StoreKitUI/SKUINavigationBarDisplayConfiguring.h>
#import <StoreKitUI/SKUINavigationPaletteProvider.h>
#import <StoreKitUI/SKUIToolbarControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <StoreKitUI/SKUIScrollingTabAppearanceStatusObserver.h>
#import <StoreKitUI/SKUIScrollingTabNestedPagedScrolling.h>

@class UIView, UIViewController, NSArray, IKAppDocument, SSVLoadURLOperation, SKUIMediaQueryEvaluator, SKUINavigationBarController, SKUIToolbarController, NSNumber, NSSet, NSDictionary, NSValue, NSString, UIScrollView;

@interface SKUIDocumentContainerViewController : SKUIViewController <IKAppDocumentDelegate, SKUIMediaQueryDelegate, SKUIModalSourceViewProvider, SKUINavigationBarControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUINavigationPaletteProvider, SKUIToolbarControllerDelegate, UIViewControllerTransitioningDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling> {

	UIViewController* _beforeErrorChildViewController;
	UIViewController* _childViewController;
	NSArray* _defaultLeftBarButtonItems;
	IKAppDocument* _document;
	float _lastBottomLayoutGuideLength;
	float _lastTopLayoutGuideLength;
	SSVLoadURLOperation* _loadURLOperation;
	SKUIMediaQueryEvaluator* _mediaQueryEvaluator;
	SKUINavigationBarController* _navigationBarController;
	SKUIToolbarController* _toolbarController;
	NSNumber* _orientationAtDisappear;
	NSNumber* _pageResponseAbsoluteTime;
	NSSet* _personalizationItems;
	NSDictionary* _presentationOptions;
	SCD_Struct_SK8 _scrollingTabAppearanceStatus;
	NSArray* _searchBarControllers;
	NSValue* _sizeAtDisappear;
	unsigned _templateViewElementType;
	CGSize _viewSize;
	NSString* _urlString;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * navigationPaletteView; 
@property (nonatomic,readonly) UIScrollView * scrollingTabNestedPagingScrollView; 
+(char)_shouldForwardViewWillTransitionToSize;
+(char)allowsChildViewControllerNavigationBarManagement;
-(void)dealloc;
-(void)reloadData;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)toolbarItems;
-(id)childViewController;
-(void)mediaQueryEvaluatorDidChange:(id)arg1 ;
-(id)mediaQueryEvaluator:(id)arg1 valueForKey:(id)arg2 ;
-(void)documentDidUpdate:(id)arg1 ;
-(UIView *)navigationPaletteView;
-(void)skui_viewWillAppear:(char)arg1 ;
-(char)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(int)navigationBarTintAdjustmentMode;
-(id)navigationBarTitleTextTintColor;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)scrollingTabAppearanceStatusWasUpdated:(SCD_Struct_SK8)arg1 ;
-(UIScrollView *)scrollingTabNestedPagingScrollView;
-(id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 clientContext:(id)arg3 ;
-(void)_showAccountViewControllerWithURL:(id)arg1 ;
-(void)documentNeedsUpdate:(id)arg1 ;
-(void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3 ;
-(void)documentScrollToTop:(id)arg1 ;
-(id)impressionableViewElementsForDocument:(id)arg1 ;
-(char)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2 ;
-(id)additionalLeftBarButtonItemForNavigationBarController:(id)arg1 ;
-(id)additionalRightBarButtonItemForNavigationBarController:(id)arg1 ;
-(id)_sidepackViewControllerWithOptions:(id)arg1 clientContext:(id)arg2 ;
-(id)_newViewControllerWithTemplateElement:(id)arg1 options:(id)arg2 clientContext:(id)arg3 ;
-(void)_setChildViewController:(id)arg1 ;
-(void)_skui_applicationDidEnterBackground:(id)arg1 ;
-(void)_enqueueLoadURLOperation;
-(void)_sendOnViewAttributesChangeWithAttributes:(id)arg1 viewWillAppear:(char)arg2 ;
-(void)_reloadNavigationBarController;
-(void)_reloadDefaultBarButtonItems;
-(void)_reloadToolbar;
-(char)_shouldFillNavigationBarContentsBasedOnNavigationBarViewElement;
-(id)_navigationBarViewElement;
-(void)_forceOrientationBackToSupportedOrientation;
-(void)_reloadNavigationPalette;
-(id)_toolbarViewElement;
-(void)_reloadForNetworkTypeChange;
-(void)_skui_applicationWillEnterForeground:(id)arg1 ;
-(void)_finishLoadOperationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_redirectToURL:(id)arg1 ;
-(void)_networkTypeChangeNotification:(id)arg1 ;
-(id)_millisecondsFromTimeInterval:(double)arg1 ;
-(void)_showLegacyStorePageWithRequest:(id)arg1 page:(id)arg2 pageType:(int)arg3 URLResponse:(id)arg4 ;
-(void)_finishLegacyProtocolOperationForResponse:(id)arg1 dataProvider:(id)arg2 dictionary:(id)arg3 ;
-(void)_reloadNavigationItemContents;
@end
