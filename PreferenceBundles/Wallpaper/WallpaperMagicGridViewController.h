/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUPhotosGridViewController.h>

@class WallpaperMagicGridViewControllerSpec, NSString, NSDictionary, NSArray, PLWallpaperImageViewController;

@interface WallpaperMagicGridViewController : PUPhotosGridViewController {

	WallpaperMagicGridViewControllerSpec* _wallpaperSpec;
	NSString* _magicWallpaperCategoryKey;
	NSDictionary* __allWallpapersEnum;
	NSDictionary* _variantBeingPreviewed;
	NSDictionary* _optionsBeingPreviewed;
	NSArray* __wallpaperVariants;
	PLWallpaperImageViewController* _imageViewController;

}

@property (nonatomic,retain) WallpaperMagicGridViewControllerSpec * wallpaperSpec;                                //@synthesize wallpaperSpec=_wallpaperSpec - In the implementation block
@property (nonatomic,copy) NSString * magicWallpaperCategoryKey;                                                  //@synthesize magicWallpaperCategoryKey=_magicWallpaperCategoryKey - In the implementation block
@property (setter=_setAllWallpapersEnum:,nonatomic,retain) NSDictionary * _allWallpapersEnum;                     //@synthesize _allWallpapersEnum=__allWallpapersEnum - In the implementation block
@property (setter=_setVariantBeingPreviewed:,nonatomic,retain) NSDictionary * variantBeingPreviewed;              //@synthesize variantBeingPreviewed=_variantBeingPreviewed - In the implementation block
@property (setter=_setOptionsBeingPreviewed:,nonatomic,retain) NSDictionary * optionsBeingPreviewed;              //@synthesize optionsBeingPreviewed=_optionsBeingPreviewed - In the implementation block
@property (setter=_setWallpaperVariants:,nonatomic,retain) NSArray * _wallpaperVariants;                          //@synthesize _wallpaperVariants=__wallpaperVariants - In the implementation block
@property (nonatomic,retain) PLWallpaperImageViewController * imageViewController;                                //@synthesize imageViewController=_imageViewController - In the implementation block
-(id)initWithSpec:(id)arg1 ;
-(void)updatePeripheralInterfaceAnimated:(char)arg1 ;
-(char)canNavigateToPhotoInteractively:(char)arg1 ;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)newGridLayout;
-(void)updateLayoutMetrics;
-(char)allowSlideshowButton;
-(char)isPreheatingEnabled;
-(char)shouldShowMenu;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)setMagicWallpaperCategoryKey:(NSString *)arg1 ;
-(NSDictionary *)_allWallpapersEnum;
-(void)_setWallpaperVariants:(id)arg1 ;
-(WallpaperMagicGridViewControllerSpec *)wallpaperSpec;
-(NSArray *)_wallpaperVariants;
-(void)_setVariantBeingPreviewed:(id)arg1 ;
-(void)setImageViewController:(PLWallpaperImageViewController *)arg1 ;
-(PLWallpaperImageViewController *)imageViewController;
-(NSDictionary *)variantBeingPreviewed;
-(void)dismissDidSetWallpaper:(char)arg1 ;
-(void)setWallpaperSpec:(WallpaperMagicGridViewControllerSpec *)arg1 ;
-(NSString *)magicWallpaperCategoryKey;
-(void)_setAllWallpapersEnum:(id)arg1 ;
-(NSDictionary *)optionsBeingPreviewed;
-(void)_setOptionsBeingPreviewed:(id)arg1 ;
-(void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2 ;
-(void)editImageViewControllerDidCancel:(id)arg1 ;
-(char)canBeShownFromSuspendedState;
@end

