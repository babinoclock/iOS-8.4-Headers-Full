/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <StoreKitUI/SKUIPerspectiveView.h>

@class UICollectionView, NSString;

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView> {

	UICollectionView* _collectionView;
	UIEdgeInsets _contentInset;
	char _rendersWithPerspective;
	char _rendersWithParallax;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                      //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) char rendersWithPerspective;                    //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
@property (assign,nonatomic) char rendersWithParallax;                       //@synthesize rendersWithParallax=_rendersWithParallax - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UICollectionView *)collectionView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(char)rendersWithParallax;
-(char)rendersWithPerspective;
-(void)setRendersWithPerspective:(char)arg1 ;
-(void)setRendersWithParallax:(char)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
@end

