/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIScrollView;

@interface SUStorePageView : UIView {

	UIView* _backdropView;
	UIView* _contentView;
	UIView* _headerView;
	UIScrollView* _headerScrollView;
	UIView* _previewOverlayView;
	UIEdgeInsets _contentViewInsets;

}

@property (nonatomic,retain) UIView * backdropView;                       //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * previewOverlayView;                 //@synthesize previewOverlayView=_previewOverlayView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewInsets;              //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setBackdropView:(UIView *)arg1 ;
-(UIView *)backdropView;
-(UIEdgeInsets)contentViewInsets;
-(void)setPreviewOverlayView:(UIView *)arg1 ;
-(UIView *)previewOverlayView;
-(void)setContentViewInsets:(UIEdgeInsets)arg1 ;
@end

