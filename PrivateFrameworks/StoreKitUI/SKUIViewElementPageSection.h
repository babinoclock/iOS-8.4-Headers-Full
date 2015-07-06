/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>

@protocol SKUIViewElementView;
@class SKUIViewElementLayoutContext, SKUICollectionViewCell, NSString;

@interface SKUIViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	Class _cellClass;
	UIEdgeInsets _cellContentInset;
	SKUIViewElementLayoutContext* _cellLayoutContext;
	float _firstSectionTopInset;
	SKUICollectionViewCell*<SKUIViewElementView> _lastCell;
	char _rendersWithPerspective;
	NSString* _reuseIdentifier;
	float _sectionBottomInset;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)sectionContentInset;
-(CGSize)preferredContentSize;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)_reloadViewElementProperties;
-(int)applyUpdateType:(int)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(int)numberOfCells;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(char)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(char)arg3 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2 ;
-(UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2 ;
-(char)collectionViewShouldHighlightItemAtIndexPath:(id)arg1 ;
-(char)collectionViewShouldSelectItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(float)contentInsetAdjustmentForCollectionView:(id)arg1 ;
-(void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(int)defaultItemPinningStyle;
-(void)_requestCellLayout;
-(char)_showsImageReflection;
-(char)_stretchesToFitCollectionViewBounds;
@end

