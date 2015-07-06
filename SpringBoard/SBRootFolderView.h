/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderView.h>
#import <SpringBoard/_UISettingsKeyObserver.h>
#import <SpringBoard/SBSearchGestureObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SBDockView, SBDockIconListView, TPLegacyLCDTextView, SBFParallaxSettings, SBSearchViewController, SBRootFolder, NSString;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBSearchGestureObserver, UIGestureRecognizerDelegate> {

	SBDockView* _dockView;
	SBDockIconListView* _dockListView;
	char _dockViewBorrowed;
	TPLegacyLCDTextView* _idleTextView;
	SBFParallaxSettings* _parallaxSettings;
	float _searchGestureProgress;
	float _reachabilityYOffset;
	char _layingOutForReachability;
	SBSearchViewController* _searchViewController;
	unsigned _dockEdge;

}

@property (nonatomic,retain) SBRootFolder * folder; 
@property (nonatomic,retain,readonly) SBSearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (assign,nonatomic) unsigned dockEdge;                                                   //@synthesize dockEdge=_dockEdge - In the implementation block
@property (assign,getter=isDockViewBorrowed,nonatomic) char dockViewBorrowed;                     //@synthesize dockViewBorrowed=_dockViewBorrowed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(void)resetIconListViews;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(void)searchGesture:(id)arg1 changedPercentComplete:(float)arg2 ;
-(void)setDockEdge:(unsigned)arg1 ;
-(void)setIdleText:(id)arg1 ;
-(id)dockView;
-(void)setDockOffscreenFraction:(float)arg1 ;
-(void)setDockVerticalStretch:(float)arg1 ;
-(unsigned)dockEdge;
-(void)returnDockView;
-(void)borrowDockView;
-(id)iconListViewAtIndex:(unsigned)arg1 ;
-(void)layoutIconLists:(double)arg1 domino:(char)arg2 forceRelayout:(char)arg3 ;
-(void)handleReachabilityActivated:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)returnScalingView;
-(void)fadeContentForMagnificationFraction:(float)arg1 ;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
-(void)didAnimate;
-(void)prepareForZoomAnimation;
-(void)cleanUpAfterZoomAnimation;
-(void)willAnimateWithSettings:(id)arg1 ;
-(void)layoutViewsForSearch;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 forSnapshot:(char)arg4 ;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)_handleReachabilityActivatedAnimate:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleReachabilityDectivatedAnimate:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)fadeContentForMinificationFraction:(float)arg1 ;
-(float)reachabilityYOffset;
-(void)_configureParallax;
-(char)isDockViewBorrowed;
-(float)effectiveStatusBarHeight;
-(CGRect)effectivePageControlFrame;
-(CGRect)effectiveDockFrame;
-(void)layoutDockView;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(void)setDockViewBorrowed:(char)arg1 ;
-(void)updateDockViewOrientation;
-(void)tearDownListViews;
-(char)_updatesWallpaperRelativeCenter;
-(SBSearchViewController *)searchViewController;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)setOrientation:(int)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_updateEditingStateAnimated:(char)arg1 ;
-(void)_layoutSubviews;
-(void)lcdTextViewCompletedScroll:(id)arg1 ;
@end

