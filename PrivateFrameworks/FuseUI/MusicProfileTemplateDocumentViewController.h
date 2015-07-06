/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <FuseUI/SKUIDocumentViewController.h>
#import <FuseUI/SKUINavigationBarDisplayConfiguring.h>

@protocol MusicClientContextConsumingSKUINavigationBarDisplayConfiguring;
@class UIViewController, NSString;

@interface MusicProfileTemplateDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUINavigationBarDisplayConfiguring> {

	UIViewController*<MusicClientContextConsuming>*<SKUINavigationBarDisplayConfiguring> _profileViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2 ;
-(void)setClientContext:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(char)managesNavigationBarContents;
-(char)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(int)navigationBarTintAdjustmentMode;
-(id)navigationBarTitleTextTintColor;
@end

