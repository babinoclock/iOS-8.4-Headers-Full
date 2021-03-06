/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageView.h>
#import <StoreKitUI/SKUIPerspectiveView.h>

@class SKUIImageView, NSString;

@interface SKUIParallaxImageView : SKUIImageView <SKUIPerspectiveView> {

	UIEdgeInsets _imagePadding;
	CGSize _imageSize;
	SKUIImageView* _innerImageView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)image;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)_updateInnerImageView;
-(void)setImagePadding:(UIEdgeInsets)arg1 ;
@end

