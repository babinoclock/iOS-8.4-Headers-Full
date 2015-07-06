/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIViewController.h>
#import <MediaPlayer/MPAVRoutingControllerDelegate.h>
#import <MediaPlayer/MPAVRoutingTableViewCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MPAVRoutingViewControllerDelegate;
@class UITableView, NSArray, MPWeakTimer, MPAVRoutingController, UIColor, NSString;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSArray* _cachedRoutes;
	MPWeakTimer* _updateTimer;
	MPAVRoutingController* _routingController;
	UIColor* _tableCellsBackgroundColor;
	UIColor* _tableCellsContentColor;
	int _airPlayPasswordAlertDidAppearToken;
	int _airPlayPasswordAlertDidCancelToken;
	char _airPlayPasswordAlertDidAppearTokenIsValid;
	char _cachedShowAirPlayDebugButton;
	char _hasCachedAirPlayDebugButtonStatus;
	char _needsDisplayedRoutesUpdate;
	char _allowMirroring;
	unsigned _style;
	id<MPAVRoutingViewControllerDelegate> _delegate;
	unsigned _avItemType;

}

@property (nonatomic,readonly) unsigned style;                                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVRoutingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setAVItemType:,nonatomic) unsigned avItemType;                          //@synthesize avItemType=_avItemType - In the implementation block
@property (assign,nonatomic) char allowMirroring;                                                //@synthesize allowMirroring=_allowMirroring - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(char)arg2 ;
-(void)_serviceWillPresentAuthenticationPromptNotification:(id)arg1 ;
-(id)_routesWhereMirroringIsPreferred;
-(void)_setNeedsDisplayedRoutesUpdate;
-(float)_tableViewHeightAccordingToDataSource;
-(unsigned)_tableViewNumberOfRows;
-(unsigned)_routeIndexForTableViewIndex:(unsigned)arg1 ;
-(char)_shouldShowAirPlayDebugButton;
-(unsigned)_debugButtonTableViewIndex;
-(id)_displayedRoutes;
-(char)_shouldShowMirroringCellForRoute:(id)arg1 ;
-(void)_showAirPlayDebug;
-(void)_pickRoute:(id)arg1 ;
-(unsigned)_tableViewIndexForRouteIndex:(unsigned)arg1 ;
-(float)_normalCellHeight;
-(float)_expandedCellHeight;
-(float)_tableViewHeaderViewHeight;
-(float)_tableViewFooterViewHeight;
-(void)_updateDisplayedRoutes;
-(void)_setupUpdateTimerIfNecessary;
-(void)setAVItemType:(unsigned)arg1 ;
-(id)_tableCellsBackgroundColor;
-(id)_tableCellsContentColor;
-(void)_setTableCellsBackgroundColor:(id)arg1 ;
-(void)_setTableCellsContentColor:(id)arg1 ;
-(unsigned)avItemType;
-(char)allowMirroring;
-(void)setAllowMirroring:(char)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MPAVRoutingViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<MPAVRoutingViewControllerDelegate>)delegate;
-(unsigned)style;
-(void)viewWillLayoutSubviews;
-(id)_tableView;
-(CGSize)preferredContentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(unsigned)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

