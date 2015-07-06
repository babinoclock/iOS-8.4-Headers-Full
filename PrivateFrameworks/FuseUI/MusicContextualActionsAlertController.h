/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIAlertController.h>
#import <FuseUI/MusicJSContextualActionsNativeViewControllerDelegate.h>
#import <FuseUI/MusicClientContextConsuming.h>
#import <FuseUI/MusicJSNativeViewControllerFactory.h>

@class MusicClientContext, MusicViewControllerPresenter, NSString, SKUIClientContext;

@interface MusicContextualActionsAlertController : UIAlertController <MusicJSContextualActionsNativeViewControllerDelegate, MusicClientContextConsuming, MusicJSNativeViewControllerFactory> {

	id _strongSelfRef;
	MusicClientContext* _clientContext;
	MusicViewControllerPresenter* _presenter;

}

@property (nonatomic,retain) MusicViewControllerPresenter * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(id)selectedNavigationController;
+(void)dismissAllModalViewsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setPresenter:(MusicViewControllerPresenter *)arg1 ;
-(MusicViewControllerPresenter *)presenter;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)jsContextualActionsNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3 ;
-(void)handleSelectionOfHeaderWithInformation:(SCD_Struct_Mu13)arg1 ;
-(void)prepareForJSCallback;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

