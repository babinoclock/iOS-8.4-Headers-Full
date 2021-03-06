/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class UIView, SUSegmentedControl, NSArray;

@interface MSPurchasesViewController : SUViewController {

	int _activeViewControllerIndex;
	UIView* _containerView;
	SUSegmentedControl* _segmentedControl;
	NSArray* _viewControllers;

}
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(id)_newSegmentedControlWithPageSectionGroup:(id)arg1 ;
-(void)_tabConfigurationChangedNotification:(id)arg1 ;
-(void)_reloadSegmentedControlPlacement;
-(void)_reloadViewControllersWithSection:(id)arg1 ;
-(void)_showActiveViewController;
-(void)_setActiveViewControllerIndex:(int)arg1 ;
-(id)_newViewControllerForPageSection:(id)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(void)_segmentedControlAction:(id)arg1 ;
-(void)tabBarControllerDidReselectTabBarItem:(id)arg1 ;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(void)invalidateForMemoryPurge;
-(id)_activeViewController;
@end

