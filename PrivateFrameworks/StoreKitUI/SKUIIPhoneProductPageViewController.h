/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUIMetricsViewController.h>
#import <StoreKitUI/SKUINetworkErrorDelegate.h>
#import <StoreKitUI/SKUIProductPageHeaderViewDelegate.h>
#import <StoreKitUI/SKUIProductPageChildViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <StoreKitUI/SKStoreProductViewControllerDelegate.h>
#import <StoreKitUI/SKUIMessageBannerDelegate.h>

@protocol SKUIProductPageChildViewController, SKUIIPhoneProductPageDelegate;
@class SKUIMessageBanner, NSString, UIViewController, SKUIProductPageDetailsViewController, SKUINetworkErrorViewController, SKUIProductPageHeaderViewController, SKUIIncompatibleAppViewController, SKUIItem, SSMetricsPageEvent, SKUIProductPagePlaceholderViewController, SKUILoadProductPageOperation, SKUIMetricsController, NSOperationQueue, SKUIProductPage, SKUISwooshArrayViewController, SKUIProductPageReviewsViewController, NSURLRequest, NSURL;

@interface SKUIIPhoneProductPageViewController : SKUIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate, SKUIMessageBannerDelegate> {

	char _askPermission;
	SKUIMessageBanner* _banner;
	NSString* _bannerText;
	UIViewController*<SKUIProductPageChildViewController> _childViewController;
	id<SKUIIPhoneProductPageDelegate> _delegate;
	SKUIProductPageDetailsViewController* _detailsViewController;
	SKUINetworkErrorViewController* _errorViewController;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIIncompatibleAppViewController* _incompatibleViewController;
	SKUIItem* _item;
	SSMetricsPageEvent* _lastPageEvent;
	SKUIProductPagePlaceholderViewController* _loadingViewController;
	SKUILoadProductPageOperation* _loadOperation;
	long long _lookupItemIdentifier;
	SKUIMetricsController* _metricsController;
	NSOperationQueue* _operationQueue;
	SKUIProductPagePlaceholderViewController* _relatedPlaceholderViewController;
	SKUIProductPage* _productPage;
	SKUISwooshArrayViewController* _relatedViewController;
	SKUIProductPageReviewsViewController* _reviewsViewController;
	int _sectionIndex;
	NSURLRequest* _urlRequest;
	char _wantsActivityViewController;

}

@property (nonatomic,readonly) SKUIItem * item;                                              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) SKUIProductPage * productPage;                                //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (assign,nonatomic,__weak) id<SKUIIPhoneProductPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char askPermission;                                             //@synthesize askPermission=_askPermission - In the implementation block
@property (nonatomic,copy) NSString * bannerText;                                            //@synthesize bannerText=_bannerText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURLRequest:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SKUIIPhoneProductPageDelegate>)arg1 ;
-(void)reloadData;
-(id<SKUIIPhoneProductPageDelegate>)delegate;
-(SKUIItem *)item;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(id)initWithItem:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setAskPermission:(char)arg1 ;
-(void)setBannerText:(NSString *)arg1 ;
-(void)configureMetricsWithPageEvent:(id)arg1 ;
-(id)initWithProductPage:(id)arg1 ;
-(SKUIProductPage *)productPage;
-(void)_setMetricsController:(id)arg1 ;
-(void)_metricsEnterEventNotification:(id)arg1 ;
-(id)activeMetricsController;
-(void)_reloadChildViewControllers;
-(void)productPageChildViewControllerDidLoadScrollView:(id)arg1 ;
-(void)productPageChildOpenItem:(id)arg1 ;
-(void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(/*^block*/id)arg2 ;
-(void)productPageChildViewControllerDidScroll:(id)arg1 ;
-(void)productPageChildViewControllerDidLoad:(id)arg1 ;
-(char)askPermission;
-(id)_headerViewController;
-(void)_shareButtonAction:(id)arg1 ;
-(void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2 ;
-(id)metricsControllerForProductPageHeader:(id)arg1 ;
-(void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(int)arg2 ;
-(void)productPageHeaderView:(id)arg1 didReloadItemOffer:(id)arg2 ;
-(void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1 ;
-(id)initWithItemIdentifier:(long long)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(CGPoint)topContentOffset;
-(void)_setProductPage:(id)arg1 error:(id)arg2 ;
-(void)_showBanner;
-(id)_reviewsViewController;
-(id)_viewControllerForSectionIndex:(unsigned)arg1 ;
-(void)_showError:(id)arg1 ;
-(char)_isIncompatibleItem;
-(id)_detailsViewController;
-(id)_relatedViewController;
-(void)networkErrorViewControllerInvalidated:(id)arg1 ;
-(void)askPermissionBannerDidSelect:(id)arg1 ;
-(NSString *)bannerText;
-(id)_initSKUIIPhoneProductPageViewController;
-(void)_setSectionIndexWithFragment:(int)arg1 ;
-(void)_setContentInsetsForChildViewController:(id)arg1 ;
-(void)_setHeaderPositionForChildViewController:(id)arg1 ;
-(void)_hideBanner;
-(void)_showActivityViewController;
-(void)_invalidateChildViewControllers;
-(void)_presentHTMLProductPage;
-(void)_animateAddToWishlist;
-(id)_loadingViewController;
-(id)_relatedPlaceholderViewController;
@end
