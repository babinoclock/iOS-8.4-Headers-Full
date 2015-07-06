/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SKUIIPhoneProductPageView : UIView {

	UIView* _view;
	UIView* _bannerView;
	float _bannerOffset;

}

@property (nonatomic,retain) UIView * view;                    //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) float bannerOffset;               //@synthesize bannerOffset=_bannerOffset - In the implementation block
-(UIView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(void)animateYPosition:(float)arg1 ;
-(float)bannerOffset;
-(void)setBannerOffset:(float)arg1 ;
@end
