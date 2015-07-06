/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, SKUIClientContext, SKUICountdownView, UIImageView, UIColor, UILabel, SKUICountdown, UIImage, UIView;

@interface SKUIBrickCollectionViewCell : UICollectionViewCell {

	NSString* _accessibilityLabel;
	SKUIClientContext* _clientContext;
	SKUICountdownView* _countdownView;
	char _itemImageHidden;
	UIEdgeInsets _itemImageInsets;
	UIImageView* _itemImageView;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	UIImageView* _overlayImageView;

}

@property (nonatomic,copy) NSString * accessibilityLabel;                                //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SKUICountdown * countdown; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
@property (assign,getter=isItemImageHidden,nonatomic) char itemImageHidden;              //@synthesize itemImageHidden=_itemImageHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets itemImageInsets;                               //@synthesize itemImageInsets=_itemImageInsets - In the implementation block
@property (nonatomic,readonly) UIView * itemImageView;                                   //@synthesize itemImageView=_itemImageView - In the implementation block
-(UIImage *)itemImage;
-(void)setItemImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)accessibilityLabel;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(SKUICountdown *)countdown;
-(void)setCountdown:(SKUICountdown *)arg1 ;
-(void)_reloadHighlight;
-(char)isItemImageHidden;
-(void)_removeOverlay;
-(void)setItemImageHidden:(char)arg1 ;
-(void)setItemImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)itemImageInsets;
-(UIView *)itemImageView;
@end

