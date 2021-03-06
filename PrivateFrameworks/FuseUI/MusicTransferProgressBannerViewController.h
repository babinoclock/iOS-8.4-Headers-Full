/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <FuseUI/MusicTransferObserver.h>
#import <FuseUI/MusicTransferProgressViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class MusicTransferProgressBannerView, UIPopoverPresentationController, MusicTransferAggregator, MusicTransferProgressViewController, NSString;

@interface MusicTransferProgressBannerViewController : UIViewController <MusicTransferObserver, MusicTransferProgressViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	MusicTransferProgressBannerView* _bannerView;
	UIPopoverPresentationController* _presentationController;
	MusicTransferAggregator* _transferAggregator;
	MusicTransferProgressViewController* _transferProgressViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2 ;
-(void)loadView;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)transferAggregatorDidChange:(id)arg1 ;
-(void)_bannerEvent:(id)arg1 ;
-(void)_reloadBannerViewAnimated:(char)arg1 ;
-(id)initWithTransferAggregator:(id)arg1 ;
-(void)transferProgressViewControllerWillDismiss:(id)arg1 ;
@end

