/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIScrollingSegmentedController.h>
#import <FuseUI/MusicClientContextConsuming.h>
#import <FuseUI/SKUITabBarItemRootViewController.h>

@class NSString, SKUIClientContext;

@interface MusicMyMusicViewController : SKUIScrollingSegmentedController <MusicClientContextConsuming, SKUITabBarItemRootViewController>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(char)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(id)initWithTabBarItem:(id)arg1 ;
@end

