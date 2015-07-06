/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface,_UIViewServiceUIBehaviorInterface>
@required
-(void)__setContentSize:(CGSize)arg1;
-(void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(char)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(int)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(char)arg9 replyHandler:(/*^block*/id)arg10;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)arg1;
-(void)__hostDidChangeStatusBarHeight:(float)arg1;
-(void)__hostWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostedActionSheetDidPresent;
-(void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)arg1;
-(void)__hostedActionSheetClickedButtonAtIndex:(int)arg1;
-(void)__hostDisablesAutomaticKeyboardBehavior:(char)arg1;
-(void)__hostViewWillAppear:(char)arg1 inInterfaceOrientation:(int)arg2 traitCollection:(id)arg3 statusBarHeight:(float)arg4 completionHandler:(/*^block*/id)arg5;
-(void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2;
-(void)__hostViewDidAppear:(char)arg1;
-(void)__hostViewWillDisappear:(char)arg1;
-(void)__hostViewDidDisappear:(char)arg1;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 statusBarHeight:(float)arg3 whenDone:(/*^block*/id)arg4;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(char)arg3;
-(void)__hostWillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(char)arg3;
-(void)__hostDidRotateFromInterfaceOrientation:(int)arg1 skipSelf:(char)arg2;
-(void)__setServiceInPopover:(char)arg1;
-(void)__setHostTraitCollection:(id)arg1;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(char)arg3;
-(void)__dimmingViewWasTapped;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(char)arg3;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(int)arg2;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)__textServiceDidDismiss;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
-(void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(char)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(char)arg5 replyHandler:(/*^block*/id)arg6;

@end

