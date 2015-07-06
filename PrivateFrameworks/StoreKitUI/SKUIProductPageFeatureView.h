/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, SKUIColorScheme, UIImage, NSString;

@interface SKUIProductPageFeatureView : UIView {

	UIImageView* _iconView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) UIImage * icon; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
-(UIImage *)icon;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end

