/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:43 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, UIView, UIWindow;

@interface SBAppSwitcherStatusBarViewCache : NSObject {

	NSMutableDictionary* _cachedStatusBarQueues;
	NSMutableDictionary* _statusBarsForSnapshots;
	NSMutableSet* _homePageCellStatusBars;
	UIView* _hiddenStatusBarCacheView;
	UIView* _statusBarSnapshottingView;
	char _vendingSnapshots;
	UIWindow* _appSwitcherWindow;

}

@property (assign,getter=isVendingSnapshots,nonatomic) char vendingSnapshots; 
@property (nonatomic,retain) UIWindow * appSwitcherWindow;                                 //@synthesize appSwitcherWindow=_appSwitcherWindow - In the implementation block
-(void)_prepareForSnapshotOfStyleRequest:(id)arg1 orientation:(int)arg2 ;
-(id)barForStyleRequest:(id)arg1 orientation:(int)arg2 ;
-(void)recycleBar:(id)arg1 ;
-(id)fakeStatusBarForHomePageCell;
-(void)recycleBarForHomePageCell:(id)arg1 ;
-(id)_cacheKeyForStyleRequest:(id)arg1 orientation:(int)arg2 ;
-(/*^block*/id)_generationBlockForStyleRequest:(id)arg1 orientation:(int)arg2 ;
-(id)barSnapshotForStyleRequest:(id)arg1 orientation:(int)arg2 ;
-(char)isVendingSnapshots;
-(void)setVendingSnapshots:(char)arg1 ;
-(void)setAppSwitcherWindow:(UIWindow *)arg1 ;
-(void)preheatStatusBarCache;
-(UIWindow *)appSwitcherWindow;
-(void)dealloc;
-(id)init;
@end

