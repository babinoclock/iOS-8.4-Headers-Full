/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>

@class QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController {

	QLPreviewControllerReserved* _reserved;

}

@property (assign) id<QLPreviewControllerDataSource> dataSource; 
@property (assign) int currentPreviewItemIndex; 
@property (readonly) id<QLPreviewItem> currentPreviewItem; 
@property (assign) id<QLPreviewControllerDelegate> delegate; 
+(id)contentTypeForPreviewItem:(id)arg1 ;
+(id)_passThroughDocumentTypes;
+(char)_shouldPassThroughDocumentType:(id)arg1 ;
+(char)canPreviewDocumentType:(id)arg1 ;
+(char)canPreviewMIMEType:(id)arg1 ;
+(id)titleForPreviewItem:(id)arg1 ;
+(char)copyPreviewItemToPasteboard:(id)arg1 ;
+(char)_shouldForwardViewWillTransitionToSize;
+(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(char)arg4 ;
+(char)canPreviewItem:(id)arg1 ;
-(char)ckCanDismissWhenSuspending;
-(void)_updateNavigationBarAnimated:(char)arg1 ;
-(void)_requestRemoteViewControllerIfNeeded;
-(void)_runDeferredAnimationBlock;
-(void)_unloadInternalViews;
-(id)itemsSource;
-(void)setTransitioning:(char)arg1 synchronizedWithBlock:(/*^block*/id)arg2 ;
-(id)_currentNavigationController;
-(void)_updateToolbarVisibilityAnimated:(char)arg1 ;
-(void)_configurePreviewContentController;
-(id)_displayedInteractionController;
-(void)_updateToolbarAnimated:(char)arg1 ;
-(void)_showContentsIfPossibleAnimated:(char)arg1 ;
-(void)_showOverlayAdjustingStatusBar:(char)arg1 duration:(double)arg2 ;
-(int)numberOfPreviewItems;
-(id)previewItemAtIndex:(int)arg1 ;
-(void)_setCurrentPreviewItemIndex:(int)arg1 fromClient:(char)arg2 showContentsIfPossible:(char)arg3 ;
-(void)_showGenericDisplayBundle;
-(void)_setControlsOverlayVisible:(char)arg1 adjustingStatusBar:(char)arg2 duration:(double)arg3 ;
-(void)_contentWasTapped;
-(int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2 traitCollection:(id)arg3 ;
-(int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_setupWithMode:(int)arg1 parentViewController:(id)arg2 ;
-(void)_setupPreferredModeWithParentViewController:(id)arg1 ;
-(char)_addPreviewContentController;
-(void)_saveBarsState;
-(void)_loadInternalViews;
-(void)_restoreOriginalNavigationBarItems;
-(char)_overlayVisible;
-(CGRect)_contentFrameForRemoteView;
-(void)_createControls;
-(void)_removeChildPreviewContentControllerIfNeeded;
-(void)_updateRouteImages;
-(void)leftArrowAction:(id)arg1 ;
-(void)rightArrowAction:(id)arg1 ;
-(id)_updatedArchiveButton;
-(void)_refreshListOrArchiveItem;
-(void)_updateToolbarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(char)arg3 ;
-(void)_updateNavigationBarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(char)arg3 ;
-(void)_updateToolbarVisibilityWithTraitCollection:(id)arg1 animated:(char)arg2 ;
-(void)_updateStatusBarVisibilityWithTraitCollection:(id)arg1 animated:(char)arg2 ;
-(void)showArchiveContentAnimated:(char)arg1 ;
-(id)_pdfPreviewDataAtURL:(id)arg1 ;
-(char)_canPrint;
-(void)prepareForPrinting;
-(char)blockRemoteImages;
-(void)setUseCustomActionButton:(char)arg1 ;
-(char)useCustomActionButton;
-(void)setShowActionAsDefaultButton:(char)arg1 ;
-(char)showActionAsDefaultButton;
-(void)animateWhenReadyWithBlock:(/*^block*/id)arg1 ;
-(id)passThroughViewsForIndexSheet;
-(id)previewContentController;
-(id)_documentProxyForPreviewItem:(id)arg1 ;
-(int)currentSourceUUIDForPreviewContentController:(id)arg1 ;
-(int)numberOfPreviewItemsInPreviewContentController:(id)arg1 ;
-(id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2 ;
-(void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3 ;
-(void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4 ;
-(void)previewContentController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)contentWasTappedInPreviewContentController:(id)arg1 ;
-(void)showContentsWasTappedInPreviewContentController:(id)arg1 ;
-(void)overlayWasTappedInPreviewContentController:(id)arg1 ;
-(void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2 ;
-(void)actionButtonTapped:(id)arg1 ;
-(void)customActionButtonTapped:(id)arg1 ;
-(void)arrowsAction:(id)arg1 ;
-(void)showArchiveContent:(id)arg1 ;
-(void)playButtonAction:(id)arg1 ;
-(void)navigationGoBackAction:(id)arg1 ;
-(char)canPrint;
-(id)imageWithImage:(id)arg1 drawnOnTopOf:(id)arg2 stretchedToSize:(CGSize)arg3 scale:(float)arg4 ;
-(void)_refreshArchiveItem;
-(void)_refreshListItem;
-(void)wirelessRoutesDidChange:(id)arg1 ;
-(char)_needsAVControls;
-(char)_needsToolbarForTraitCollection:(id)arg1 ;
-(id)_indexFormatter;
-(id)_listDescriptionStringWithTitle:(id)arg1 ;
-(char)_updateActionItem;
-(id)_flexibleSpaceItem;
-(char)_updateAVState;
-(char)_needsToolbar;
-(void)_hideOverlayAdjustingStatusBar:(char)arg1 duration:(double)arg2 ;
-(id)_fixedSpaceItemWithWidth:(float)arg1 ;
-(void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3 ;
-(void)dealloc;
-(void)setDataSource:(id<QLPreviewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<QLPreviewControllerDelegate>)arg1 ;
-(void)reloadData;
-(id<QLPreviewControllerDataSource>)dataSource;
-(id<QLPreviewControllerDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(void)_commonInit;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_currentInteractionController;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(int)mode;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(char)sourceIsManaged;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1 ;
-(id)activityItemForDocumentInteractionController:(id)arg1 ;
-(id)printInfoForDocumentInteractionController:(id)arg1 ;
-(void)setSourceIsManaged:(char)arg1 ;
-(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(char)arg4 ;
-(void)setBlockRemoteImages:(char)arg1 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)setCurrentPreviewItemIndex:(int)arg1 ;
-(void)_prepareDelayedAppearance;
-(int)currentPreviewItemIndex;
-(id<QLPreviewItem>)currentPreviewItem;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)refreshCurrentPreviewItem;
@end
