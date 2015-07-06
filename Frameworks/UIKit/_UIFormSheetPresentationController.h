/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIDimmingView, UIDropShadowView;

@interface _UIFormSheetPresentationController : UIPresentationController {

	UIDimmingView* _dimmingView;
	UIDropShadowView* _dropShadowView;
	char _layoutStateShouldAvoidKeyboard;

}
-(float)_dropShadowCornerRadius;
-(int)presentationStyle;
-(unsigned)dropShadowAutoresizingMask;
-(CGRect)frameOfPresentedViewInContainerView;
-(char)_shouldHideBottomCorner;
-(char)shouldSubscribeToKeyboardNotifications;
-(char)_presentationPotentiallyUnderlapsStatusBar;
-(void)containerViewDidLayoutSubviews;
-(char)shouldRemovePresentersView;
-(char)shouldPresentInFullscreen;
-(id)_presentationView;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(char)_shouldOccludeDuringPresentation;
-(id)presentedView;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)_transitionToDidEnd;
-(void)_transitionFromDidEnd;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)_transitionFromWillBegin;
-(void)_transitionToWillBegin;
-(void)containerViewWillLayoutSubviews;
-(int)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(char)_shouldChangeStatusBarViewController;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_changeLayoutModeToAvoidKeyboard:(char)arg1 ;
@end
