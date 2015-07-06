/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <StoreKitUI/SKUIEmbeddedMediaViewDelegate.h>
#import <StoreKitUI/SKUIItemStateCenterObserver.h>
#import <StoreKitUI/SKUIMissingItemDelegate.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate.h>

@class SKUIClientContext, NSMapTable, NSMutableIndexSet, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUILockupComponent, SKUIRowComponent, NSString;

@interface SKUIRowSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate> {

	SKUIClientContext* _clientContext;
	NSMapTable* _columnViews;
	NSMapTable* _componentArtworkRequestIDs;
	NSMapTable* _editorialLayouts;
	NSMutableIndexSet* _expandedEditorialIndexes;
	NSMapTable* _galleryViewControllers;
	NSMapTable* _countdownViewControllers;
	char _isPad;
	float _landscapeCellContentHeight;
	SKUIMissingItemLoader* _missingItemLoader;
	SKUIProductPageOverlayController* _overlayController;
	SKUILockupComponent* _overlaySourceComponent;
	float _portraitCellContentHeight;

}

@property (nonatomic,readonly) SKUIRowComponent * pageComponent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(void)willAppearInContext:(id)arg1 ;
-(void)willHideInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(float)_interColumnSpacing;
-(id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3 ;
-(id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)mediaView:(id)arg1 playbackStateDidChange:(int)arg2 ;
-(void)_reloadEditorialLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(int)arg3 ;
-(void)_reloadLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(int)arg3 ;
-(void)_reloadEditorialCell:(id)arg1 forComponent:(id)arg2 columnIndex:(int)arg3 ;
-(id)_columnViews;
-(UIEdgeInsets)_edgeInsetsForColumnIndex:(int)arg1 ;
-(void)_loadImagesForGalleryComponent:(id)arg1 columnIndex:(int)arg2 ;
-(void)_reloadView:(id)arg1 forMediaComponent:(id)arg2 columnIndex:(int)arg3 ;
-(float)_heightForComponent:(id)arg1 columnIndex:(float)arg2 rowWidth:(float)arg3 ;
-(float)_cellContentHeightForRowWidth:(float)arg1 ;
-(float)_columnWidthForColumnIndex:(int)arg1 rowWidth:(float)arg2 ;
-(void)_setPositionForClickEvent:(id)arg1 elementIndex:(int)arg2 ;
-(void)_expandEditorialComponent:(id)arg1 columnIndex:(int)arg2 ;
-(void)_selectGalleryComponent:(id)arg1 columnIndex:(int)arg2 ;
-(void)_selectLockupComponent:(id)arg1 columnIndex:(int)arg2 ;
-(void)_selectMediaComponent:(id)arg1 columnIndex:(int)arg2 ;
-(id)_editorialLayoutForEditorial:(id)arg1 columnIndex:(int)arg2 ;
-(id)_editorialLayoutForLockup:(id)arg1 columnIndex:(int)arg2 ;
-(void)_enumerateLockupsWithBlock:(/*^block*/id)arg1 ;
-(id)_popSourceViewForOverlayController:(id)arg1 ;
-(id)_overlaySourceCell;
-(id)_viewControllerForCountdownComponent:(id)arg1 ;
-(id)_viewControllerForGalleryComponent:(id)arg1 ;
-(id)_newViewWithMediaComponent:(id)arg1 ;
-(SKUILockupStyle)_lockupStyleForComponent:(id)arg1 columnIndex:(int)arg2 ;
-(float)_heightForCountdownComponent:(id)arg1 columnIndex:(int)arg2 rowWidth:(float)arg3 ;
-(float)_heightForEditorialComponent:(id)arg1 columnIndex:(int)arg2 rowWidth:(float)arg3 ;
-(float)_heightForGalleryComponent:(id)arg1 columnIndex:(int)arg2 rowWidth:(float)arg3 ;
-(float)_heightForLockupComponent:(id)arg1 columnIndex:(int)arg2 rowWidth:(float)arg3 ;
-(float)_heightForMediaComponent:(id)arg1 columnIndex:(int)arg2 rowWidth:(float)arg3 ;
-(float)_heightForArtwork:(id)arg1 columnIndex:(int)arg2 rowWidth:(float)arg3 ;
-(id)_imageConsumerWithItem:(id)arg1 lockupSize:(int)arg2 ;
-(id)_lockupImageForComponent:(id)arg1 ;
-(id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 columnIndex:(int)arg2 ;
@end

