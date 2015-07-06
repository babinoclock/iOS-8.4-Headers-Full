/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertControllerContaining.h>
#import <UIKit/_UIAlertControllerTextFieldViewControllerContaining.h>
#import <UIKit/UIAlertControllerVisualStyleProviding.h>

@protocol UIAlertControllerVisualStyleProviding;
@class NSString, NSAttributedString, NSMutableArray, NSSet, UIAlertAction, NSObject, UIViewController, _UIAlertControllerTextFieldViewController, UITapGestureRecognizer, UIPopoverController, NSArray, UIView;

@interface UIAlertController : UIViewController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIAlertControllerVisualStyleProviding> {

	NSString* _message;
	NSAttributedString* _attributedTitle;
	NSAttributedString* _attributedMessage;
	NSAttributedString* _attributedDetailMessage;
	NSMutableArray* _actions;
	NSMutableArray* _actionDelimiterIndices;
	NSSet* _linkedAlertControllers;
	UIAlertAction* _cancelAction;
	UIAlertAction* _defaultAction;
	int _resolvedStyle;
	int _preferredStyle;
	NSObject*<UIAlertControllerVisualStyleProviding> _styleProvider;
	UIViewController* _contentViewController;
	_UIAlertControllerTextFieldViewController* _textFieldViewController;
	char _textFieldsHidden;
	UITapGestureRecognizer* _backButtonDismissGestureRecognizer;
	id _ownedTransitioningDelegate;
	char _shouldEnsureContentControllerViewIsVisibleOnAppearance;
	char _hidden;
	char __shouldAllowNilParameters;
	char _hasPreservedInputViews;
	char __shouldFlipFrameForShimDismissal;
	UIPopoverController* __compatibilityPopoverController;

}

@property (assign,nonatomic) NSArray * actions; 
@property (nonatomic,readonly) NSArray * textFields; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) int preferredStyle; 
@property (setter=_setAttributedTitle:,getter=_attributedTitle,nonatomic,copy) NSAttributedString * attributedTitle; 
@property (setter=_setAttributedMessage:,getter=_attributedMessage,nonatomic,copy) NSAttributedString * attributedMessage; 
@property (setter=_setAttributedDetailMessage:,getter=_attributedDetailMessage,nonatomic,copy) NSAttributedString * attributedDetailMessage; 
@property (nonatomic,retain) UIViewController * contentViewController; 
@property (setter=_setStyleProvider:,getter=_styleProvider,nonatomic,retain) NSObject*<UIAlertControllerVisualStyleProviding> styleProvider; 
@property (assign,setter=_setDefaultAlertAction:,nonatomic) UIAlertAction * _defaultAlertAction; 
@property (assign,setter=_setShouldEnsureContentControllerViewIsVisibleOnAppearance:,nonatomic) char _shouldEnsureContentControllerViewIsVisibleOnAppearance;              //@synthesize shouldEnsureContentControllerViewIsVisibleOnAppearance=_shouldEnsureContentControllerViewIsVisibleOnAppearance - In the implementation block
@property (readonly) NSMutableArray * _actions;                                                                                                                            //@synthesize actions=_actions - In the implementation block
@property (readonly) UIAlertAction * _cancelAction;                                                                                                                        //@synthesize cancelAction=_cancelAction - In the implementation block
@property (readonly) NSArray * _actionDelimiterIndices;                                                                                                                    //@synthesize actionDelimiterIndices=_actionDelimiterIndices - In the implementation block
@property (readonly) UIView * _foregroundView; 
@property (readonly) UIView * _dimmingView; 
@property (readonly) int _resolvedStyle;                                                                                                                                   //@synthesize resolvedStyle=_resolvedStyle - In the implementation block
@property (readonly) char _shouldProvideDimmingView; 
@property (readonly) char _shouldAlignToKeyboard; 
@property (assign,setter=_setHidden:,getter=_isHidden,nonatomic) char _hidden;                                                                                             //@synthesize hidden=_hidden - In the implementation block
@property (setter=_setShouldAllowNilParameters:) char _shouldAllowNilParameters;                                                                                           //@synthesize _shouldAllowNilParameters=__shouldAllowNilParameters - In the implementation block
@property (assign,setter=_setCompatibilityPopoverController:,nonatomic) UIPopoverController * _compatibilityPopoverController;                                             //@synthesize _compatibilityPopoverController=__compatibilityPopoverController - In the implementation block
@property (setter=_setTextFieldsHidden:) char _textFieldsHidden; 
@property (assign,setter=_setHasPreservedInputViews:,getter=_hasPreservedInputViews,nonatomic) char hasPreservedInputViews;                                                //@synthesize hasPreservedInputViews=_hasPreservedInputViews - In the implementation block
@property (assign) char _shouldFlipFrameForShimDismissal;                                                                                                                  //@synthesize _shouldFlipFrameForShimDismissal=__shouldFlipFrameForShimDismissal - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notifyMeConfirmationControllerWithHandler:(/*^block*/id)arg1 ;
+(char)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+(id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(int)arg3 ;
+(char)_shouldUsePresentationController;
+(void)_setShouldUsePresentationController:(char)arg1 ;
+(id)_alertControllerWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_gkAddCancelButtonWithNoAction;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)_foregroundView;
-(NSArray *)actions;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setModalPresentationStyle:(int)arg1 ;
-(NSString *)message;
-(UIViewController *)contentViewController;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)_requiredNotificationsForRemoteServices;
-(char)_isSupportedInterfaceOrientation:(int)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(char)_requiresCustomPresentationController;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI27*)arg1 ;
-(UIView *)_dimmingView;
-(void)setMessage:(NSString *)arg1 ;
-(char)_shouldAlignToKeyboard;
-(float)_contentVerticalInsets;
-(id)_visualStyle;
-(char)_canDismissWithGestureRecognizer;
-(id)_dismissGestureRecognizer;
-(id)_containedAlertController;
-(void)setPreferredStyle:(int)arg1 ;
-(void)_addActionWithTitle:(id)arg1 style:(int)arg2 handler:(/*^block*/id)arg3 shouldDismissHandler:(/*^block*/id)arg4 ;
-(void)addAction:(id)arg1 ;
-(void)_updateModalPresentationStyle;
-(void)set_shouldFlipFrameForShimDismissal:(char)arg1 ;
-(void)setCancelAction:(id)arg1 ;
-(id)_alertControllerView;
-(void)_updateProvidedStyle;
-(NSMutableArray *)_actions;
-(UIAlertAction *)_defaultAlertAction;
-(void)_dismissAnimated:(char)arg1 triggeringAction:(id)arg2 ;
-(id)_textFieldViewController;
-(int)preferredStyle;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)_updateShouldAlignToKeyboard;
-(NSArray *)textFields;
-(void)_handleReturn;
-(void)setTextFieldsCanBecomeFirstResponder:(char)arg1 ;
-(void)_uninstallBackGestureRecognizer;
-(void)_clearActionHandlers;
-(void)_resolvedStyleChanged;
-(void)_installBackGestureRecognizer;
-(id)_attributedTitle;
-(void)_setAttributedTitle:(id)arg1 ;
-(id)_attributedMessage;
-(void)_setAttributedMessage:(id)arg1 ;
-(id)_attributedDetailMessage;
-(void)_setAttributedDetailMessage:(id)arg1 ;
-(void)_recomputePreferredContentSize;
-(int)_resolvedStyle;
-(id)_currentDescriptor;
-(id)_styleProvider;
-(id)visualStyleForAlertControllerStyle:(int)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(UIAlertAction *)_cancelAction;
-(char)_idiomSupportsBackGesture:(int)arg1 ;
-(void)_dismissFromBackButton:(id)arg1 ;
-(int)_buttonTypeForBackGestureForIdiom:(int)arg1 ;
-(void)_reevaluateResolvedStyle;
-(void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1 ;
-(id)cancelAction;
-(void)_dismissAnimated:(char)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(char)arg3 ;
-(void)_fireOffActionOnTargetIfValidForAction:(id)arg1 ;
-(UIPopoverController *)_compatibilityPopoverController;
-(char)_viewControllerIsPresentedInPopover:(id)arg1 ;
-(int)_modalPresentationStyleForResolvedStyle;
-(char)_shouldFlipFrameForShimDismissal;
-(id)_alertControllerContainer;
-(char)_isPresentedAsPopover;
-(char)_shouldProvideDimmingView;
-(void)_preserveInputViewsAnimated:(char)arg1 ;
-(void)_becomeFirstResponderIfAppropriate;
-(char)_shouldAllowNilParameters;
-(char)_hasContentToDisplay;
-(void)_logBeingPresented;
-(void)_logBeingDismissed;
-(void)_restoreInputViewsAnimated:(char)arg1 ;
-(char)_shouldBecomeFirstResponder;
-(char)_hasPreservedInputViews;
-(char)_shouldPreserveInputViews;
-(void)_setHasPreservedInputViews:(char)arg1 ;
-(CFStringRef)_powerLoggingEventName;
-(void)_returnKeyPressedInLastTextField;
-(void)_addActionWithTitle:(id)arg1 style:(int)arg2 handler:(/*^block*/id)arg3 ;
-(void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(int)arg3 handler:(/*^block*/id)arg4 ;
-(void)_setActions:(id)arg1 ;
-(void)_setDefaultAlertAction:(id)arg1 ;
-(void)_addSectionDelimiter;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(void)_setTextFieldsHidden:(char)arg1 ;
-(char)_textFieldsHidden;
-(void)_setStyleProvider:(id)arg1 ;
-(void)_actionViewHighlightChanged:(id)arg1 ;
-(void)_actionViewTapped:(id)arg1 ;
-(char)_shouldDismissAction:(id)arg1 ;
-(void)_dismissFromPopoverDimmingView;
-(void)linkAlertController:(id)arg1 ;
-(void)unlinkAlertController:(id)arg1 ;
-(id)linkedAlertControllers;
-(void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
-(void)_flipFrameForShimDismissalIfNecessary;
-(char)_shouldSizeToFillSuperview;
-(char)_shouldFitWidthToContentViewControllerWidth;
-(void)_removeAllTextFields;
-(void)_setHidden:(char)arg1 ;
-(NSArray *)_actionDelimiterIndices;
-(char)_shouldEnsureContentControllerViewIsVisibleOnAppearance;
-(void)_setShouldEnsureContentControllerViewIsVisibleOnAppearance:(char)arg1 ;
-(char)_isHidden;
-(void)_setShouldAllowNilParameters:(char)arg1 ;
-(void)_setCompatibilityPopoverController:(id)arg1 ;
@end

