/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIKeyboardMenuView, _UIBackdropView;

@interface UIInputSwitcherShadowView : UIView {

	int m_mode;
	float m_pointerOffset;
	NSArray* m_gradientColors;
	UIKeyboardMenuView* _menu;
	_UIBackdropView* _blurView;
	CGRect _keyRect;

}

@property (assign,nonatomic) CGRect keyRect;                          //@synthesize keyRect=_keyRect - In the implementation block
@property (assign,nonatomic) UIKeyboardMenuView * menu;               //@synthesize menu=_menu - In the implementation block
@property (assign,nonatomic) int mode; 
@property (assign,nonatomic) float pointerOffset; 
@property (nonatomic,retain) NSArray * gradientColors; 
@property (nonatomic,retain) _UIBackdropView * blurView;              //@synthesize blurView=_blurView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setGradientColors:(NSArray *)arg1 ;
-(_UIBackdropView *)blurView;
-(void)setBlurView:(_UIBackdropView *)arg1 ;
-(UIKeyboardMenuView *)menu;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
-(CGRect)keyRect;
-(NSArray *)gradientColors;
-(float)pointerOffset;
-(void)setPointerOffset:(float)arg1 ;
-(void)setKeyRect:(CGRect)arg1 ;
@end

