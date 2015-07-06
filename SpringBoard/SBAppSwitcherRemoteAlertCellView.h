/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBAppSwitcherPageContentView.h>

@protocol SBAppSwitcherCacheVended;
@class UIView, SBWallpaperEffectView, SBAppSwitcherStatusBarViewCache, SBRemoteAlertAdapter, NSString;

@interface SBAppSwitcherRemoteAlertCellView : UIView <SBAppSwitcherPageContentView> {

	UIView* _possiblyRotatedContainer;
	UIView* _nonRotatedContainer;
	SBWallpaperEffectView* _wallpaperView;
	UIView*<SBAppSwitcherCacheVended> _fakeStatusBarView;
	UIView* _contentView;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	SBRemoteAlertAdapter* _remoteAlert;
	int _orientation;

}

@property (assign,nonatomic) int orientation;                       //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToBecomeVisibleIfNecessary;
-(void)respondToBecomingInvisibleIfNecessary;
-(char)_needsPortraitOnlyPresentation;
-(id)initWithFrame:(CGRect)arg1 remoteAlert:(id)arg2 statusBarCache:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_addStatusBar;
-(void)setAlert:(id)arg1 ;
-(void)setContentView:(id)arg1 animated:(char)arg2 ;
-(void)_updateBackgroundStyle;
@end
