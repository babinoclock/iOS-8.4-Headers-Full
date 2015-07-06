/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView, UIColor, _UINavigationBarAppearanceStorage;

@interface SUNavigationBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	char _separatorOnTop;
	char translucent;
	char barWantsAdaptiveBackdrop;
	int barStyle;
	UIColor* barTintColor;
	_UINavigationBarAppearanceStorage* appearanceStorage;
	UIView* _shadowView;

}

@property (readonly) _UIBackdropView * backdropView;                                             //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) int backdropStyle; 
@property (assign,nonatomic) char separatorOnTop;                                                //@synthesize separatorOnTop=_separatorOnTop - In the implementation block
@property (assign,nonatomic) int barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) _UINavigationBarAppearanceStorage * appearanceStorage; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                        //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) char translucent; 
@property (assign,nonatomic) char barWantsAdaptiveBackdrop; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(char)isTranslucent;
-(UIView *)_shadowView;
-(void)setAppearanceStorage:(_UINavigationBarAppearanceStorage *)arg1 ;
-(_UINavigationBarAppearanceStorage *)appearanceStorage;
-(void)updateBackgroundImage;
-(void)setBarStyle:(int)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(char)arg1 ;
-(int)barStyle;
-(void)setTranslucent:(char)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)_setIsContainedInPopover:(char)arg1 ;
-(id)_currentCustomBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(char*)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(char)arg2 ;
-(UIColor *)barTintColor;
-(char)barWantsAdaptiveBackdrop;
-(void)_setShadowView:(id)arg1 ;
-(int)backdropStyle;
-(_UIBackdropView *)backdropView;
-(void)setBackdropStyle:(int)arg1 ;
-(void)setSeparatorOnTop:(char)arg1 ;
-(char)separatorOnTop;
@end

