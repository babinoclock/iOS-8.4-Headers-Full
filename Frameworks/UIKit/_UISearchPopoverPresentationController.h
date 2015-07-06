/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverPresentationController.h>
#import <UIKit/_UISearchControllerPresenting.h>

@class _UISearchPresentationAssistant, NSString, UIView;

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	CGRect finalFrameForContainerView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) char shouldAccountForStatusBar; 
@property (nonatomic,readonly) float statusBarAdjustment; 
@property (nonatomic,readonly) char searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) float resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView; 
-(void)dealloc;
-(void)_transitionToDidEnd;
-(void)_transitionFromDidEnd;
-(void)presentationTransitionWillBegin;
-(void)_transitionFromWillBegin;
-(void)_transitionToWillBegin;
-(int)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(UIView *)searchBarContainerView;
-(char)searchBarToBecomeTopAttached;
-(float)statusBarAdjustment;
-(void)setContentVisible:(char)arg1 ;
-(float)resultsControllerContentOffset;
-(char)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(CGRect)finalFrameForContainerView;
-(id)_popoverHostingWindow;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI26)arg1 ;
@end

