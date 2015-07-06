/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISwooshViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class SKUIItemArtworkContext, UICollectionView, NSMutableIndexSet, NSArray, NSString, NSURL, SKUISwooshView, SKUIVideoImageDataConsumer;

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	SKUIItemArtworkContext* _artworkContext;
	UICollectionView* _collectionView;
	SKUILockupStyle _defaultLockupStyle;
	char _delegateWantsWillDisplay;
	char _didInitialReload;
	CGSize _expectedImageSize;
	NSMutableIndexSet* _hiddenIconIndexSet;
	NSArray* _lockups;
	CGSize _maxCellSize;
	CGSize _maxImageSize;
	SCD_Struct_SK22 _metrics;
	char _seeAllHidden;
	int _seeAllStyle;
	NSString* _seeAllTitle;
	NSURL* _seeAllURL;
	SKUISwooshView* _swooshView;
	int _swooshType;
	SKUIVideoImageDataConsumer* _videoImageConsumer;

}

@property (assign,getter=isSeeAllHidden,nonatomic) char seeAllHidden;                        //@synthesize seeAllHidden=_seeAllHidden - In the implementation block
@property (nonatomic,readonly) SKUIItemArtworkContext * artworkContext;                      //@synthesize artworkContext=_artworkContext - In the implementation block
@property (nonatomic,readonly) SKUIVideoImageDataConsumer * videoImageConsumer; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,copy) NSArray * lockups;                                                //@synthesize lockups=_lockups - In the implementation block
@property (nonatomic,readonly) CGRect seeAllButtonFrame; 
@property (nonatomic,readonly) NSURL * seeAllURL;                                            //@synthesize seeAllURL=_seeAllURL - In the implementation block
@property (assign,nonatomic) int swooshType;                                                 //@synthesize swooshType=_swooshType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_swooshTypeForLockups:(id)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(int)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)indexPathsForVisibleItems;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(NSArray *)items;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setClientContext:(id)arg1 ;
-(void)setColorScheme:(id)arg1 ;
-(SKUIItemArtworkContext *)artworkContext;
-(int)swooshType;
-(id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(SKUILockupStyle)arg2 ;
-(CGRect)frameForItemAtIndex:(int)arg1 ;
-(void)deselectAllItems;
-(id)initWithSwoosh:(id)arg1 ;
-(id)popImageViewForItemAtIndex:(int)arg1 ;
-(void)unhideImages;
-(SKUIVideoImageDataConsumer *)videoImageConsumer;
-(NSArray *)lockups;
-(void)setVideoThumbnail:(id)arg1 forItemAtIndex:(int)arg2 ;
-(NSURL *)seeAllURL;
-(void)setLockups:(NSArray *)arg1 ;
-(void)_reloadSizes;
-(SCD_Struct_SK23)_lockupSwooshMetrics;
-(void)_seeAllAction:(id)arg1 ;
-(id)_newArtworkContextForSwooshType:(int)arg1 ;
-(CGSize)_maximumCellSizeForImageSize:(CGSize)arg1 ;
-(id)initWithItemList:(id)arg1 ;
-(CGRect)seeAllButtonFrame;
-(void)setItemsWithLockups:(id)arg1 ;
-(void)setSeeAllHidden:(char)arg1 ;
-(void)_setExpectedImageSize:(CGSize)arg1 ;
-(void)setSwooshType:(int)arg1 ;
-(char)isSeeAllHidden;
@end

