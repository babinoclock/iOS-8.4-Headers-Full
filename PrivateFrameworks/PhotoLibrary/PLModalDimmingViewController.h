/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol PLModalDimmingContained;
@class UIImageView, UIViewController, UIView;

@interface PLModalDimmingViewController : UIViewController {

	UIImageView* _vignetteView;
	UIViewController*<PLModalDimmingContained> _contentViewController;
	UIView* _wrapperView;

}

@property (nonatomic,retain) UIViewController*<PLModalDimmingContained> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(UIViewController*<PLModalDimmingContained>)contentViewController;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController*<PLModalDimmingContained>)arg1 ;
-(void)_updateWrapperView:(id)arg1 toOrientation:(int)arg2 forViewController:(id)arg3 ;
-(void)_updateVignetteToOrientation:(int)arg1 ;
-(void)presentWithCustomAnimation;
-(void)presentModalOnViewController:(id)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dismissWithCustomAnimation:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

