/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewIntersectionDelegate.h>
#import <UIKit/UIKeyboardKeyplaneTransitionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInputViewAnimationHost.h>
#import <UIKit/_UIRemoteKeyboardViewSource.h>

@protocol _UIRemoteKeyboardControllerDelegate;
@class UIView, UIInputViewSet, NSMutableArray, NSMutableDictionary, CADisplayLink, UIPanGestureRecognizer, UIScrollView, UIInputViewSetNotificationInfo, NSString, UIInputViewSetPlacement, UIInputViewController, UIKBInputBackdropView, NSArray, NSLayoutConstraint, UIInputViewPlacementTransition;

@interface UIInputWindowController : UIViewController <UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate, UIGestureRecognizerDelegate, UIInputViewAnimationHost, _UIRemoteKeyboardViewSource> {

	NSMutableArray* _animationStyleStack;
	char _suppressedCallbacks;
	char _suppressedNotifications;
	char _isChangingPlacement;
	char _isChangingInputViews;
	char _requiresConstraintUpdate;
	int _hiddenCount;
	unsigned _rotationState;
	NSMutableDictionary* _inputViewEdgeConstraints;
	NSMutableDictionary* _accessoryViewEdgeConstraints;
	NSMutableDictionary* _inputBackdropViewEdgeConstraints;
	NSMutableDictionary* _accessoryBackdropViewEdgeConstraints;
	UIView* _preRotationSnapshot;
	CGSize _preRotationInputViewSize;
	CGSize _preRotationInputAccessoryViewSize;
	CGAffineTransform _preRotationInputViewTransform;
	CGAffineTransform _preRotationInputAccessoryViewTransform;
	char _isTranslating;
	char _isSplitting;
	char _splitLockState;
	CADisplayLink* _displayLink;
	double _lastBounceTime;
	double _lastTranslationNotificationTime;
	float _targetTranslation;
	float _initialTranslation;
	float _translationVelocity;
	UIPanGestureRecognizer* _translateRecognizer;
	/*^block*/id _bounceCompletionBlock;
	char _prevInputViewIsOnScreen;
	SEL _interactiveTransitionCleanupSelector;
	UIScrollView* _scrollViewForTransition;
	char _scrollViewTransitionFinishing;
	char _scrollViewShowsHorizontalScrollIndicator;
	CGPoint _scrollViewTransitionPreviousPoint;
	UIInputViewSetNotificationInfo* _scrollViewNotificationInfo;
	CGRect _preLayoutHostViewFrame;
	char _didOverridePreLayoutHostViewFrame;
	char _didPostLayoutNotification;
	UIInputViewSetNotificationInfo* _keyboardHeightChangeNotificationInfo;
	char _wasOnScreen;
	NSString* _lastKeyboardID;
	char _shouldNotifyRemoteKeyboards;
	UIView* _hostView;
	UIInputViewSet* _inputViewSet;
	UIInputViewSetPlacement* _placement;
	UIInputViewController* _inputViewController;
	UIInputViewController* _inputAccessoryViewController;
	UIKBInputBackdropView* _inputBackdropView;
	UIKBInputBackdropView* _inputAccessoryBackdropView;
	NSArray* _visibilityConstraints;
	NSLayoutConstraint* _verticalVisibilityConstraint;
	UIInputViewSetPlacement* _postRotationPlacement;
	UIInputViewSet* _postRotationInputViewSet;
	UIInputViewSetNotificationInfo* _templateNotificationInfo;
	UIInputViewPlacementTransition* _currentTransition;
	id<_UIRemoteKeyboardControllerDelegate> _controllerDelegate;
	NSLayoutConstraint* _inputViewHeightConstraint;
	NSLayoutConstraint* _accessoryViewHeightConstraint;

}

@property (nonatomic,retain) UIInputViewSet * inputViewSet;                                                                          //@synthesize inputViewSet=_inputViewSet - In the implementation block
@property (assign,nonatomic) UIInputViewSetPlacement * placement;                                                                    //@synthesize placement=_placement - In the implementation block
@property (nonatomic,readonly) UIView * hostView;                                                                                    //@synthesize hostView=_hostView - In the implementation block
@property (assign,nonatomic) char shouldNotifyRemoteKeyboards;                                                                       //@synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards - In the implementation block
@property (nonatomic,readonly) UIView * _inputView; 
@property (nonatomic,readonly) UIView * _inputAccessoryView; 
@property (nonatomic,retain) UIInputViewController * _inputViewController;                                                           //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * _inputAccessoryViewController;                                                  //@synthesize inputAccessoryViewController=_inputAccessoryViewController - In the implementation block
@property (setter=setInputBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputBackdropView;                                //@synthesize inputBackdropView=_inputBackdropView - In the implementation block
@property (setter=setInputAccessoryBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputAccessoryBackdropView;              //@synthesize inputAccessoryBackdropView=_inputAccessoryBackdropView - In the implementation block
@property (nonatomic,retain) NSArray * visibilityConstraints;                                                                        //@synthesize visibilityConstraints=_visibilityConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalVisibilityConstraint;                                                      //@synthesize verticalVisibilityConstraint=_verticalVisibilityConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * inputViewHeightConstraint;                                                         //@synthesize inputViewHeightConstraint=_inputViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewHeightConstraint;                                                     //@synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * postRotationPlacement;                                                        //@synthesize postRotationPlacement=_postRotationPlacement - In the implementation block
@property (nonatomic,retain) UIInputViewSet * postRotationInputViewSet;                                                              //@synthesize postRotationInputViewSet=_postRotationInputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewSetNotificationInfo * templateNotificationInfo;                                              //@synthesize templateNotificationInfo=_templateNotificationInfo - In the implementation block
@property (nonatomic,retain) UIInputViewPlacementTransition * currentTransition;                                                     //@synthesize currentTransition=_currentTransition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate;                                             //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
+(char)_doesOverrideLegacyFullScreenLayout;
+(char)_shouldForwardViewWillTransitionToSize;
+(id)tranformedUserInfoForNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)containerView;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(char)isRotating;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(float)arg2 toHeight:(float)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)scrollView:(id)arg1 didPanWithGesture:(id)arg2 ;
-(void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2 ;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(void)transitionDidFinish:(char)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI73*)arg1 ;
-(void)updateViewConstraints;
-(id)transitioningView;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(char)arg2 ;
-(CGRect)transitioningFrame;
-(void)setInputViewsHidden:(char)arg1 ;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)updateProgress:(float)arg1 startHeight:(float)arg2 endHeight:(float)arg3 ;
-(UIInputViewSetPlacement *)placement;
-(char)isUndocked;
-(char)isSplitting;
-(void)prepareKeyboardHeightChangeWithDelta:(float)arg1 duration:(float)arg2 ;
-(void)keyboardHeightChangeDone;
-(char)isOnScreen;
-(CGRect)visibleFrame;
-(UIView *)_inputView;
-(UIView *)_inputAccessoryView;
-(char)isTranslating;
-(id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(char)arg2 ;
-(void)prepareForTransition;
-(void)finishTransitionWithCompletion:(/*^block*/id)arg1 ;
-(UIView *)hostView;
-(void)setCurrentTransition:(UIInputViewPlacementTransition *)arg1 ;
-(UIInputViewPlacementTransition *)currentTransition;
-(void)translateDetected:(id)arg1 ;
-(void)initializeTranslateGestureRecognizer;
-(char)isChangingPlacement;
-(void)undock;
-(void)dock;
-(void)invalidateDisplayLink;
-(void)bounceAnimationDidFinish;
-(void)_prepareForRotationToOrientation:(int)arg1 duration:(float)arg2 ;
-(void)_rotateToOrientation:(int)arg1 duration:(float)arg2 ;
-(void)_finishRotationFromInterfaceOrientation:(int)arg1 ;
-(id)nextAnimationStyle;
-(void)setAccessoryViewVisible:(char)arg1 delay:(float)arg2 ;
-(void)_updateBounceAnimation:(id)arg1 ;
-(void)syncToExistingAnimations;
-(void)translateToPlacement:(id)arg1 ;
-(void)performOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(UIInputViewSet *)inputViewSet;
-(void)setPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)setRotationAwarePlacement:(id)arg1 ;
-(void)finishScrollViewTransition;
-(void)setInputViewSet:(UIInputViewSet *)arg1 ;
-(void)extendKeyboardBackdropHeight:(float)arg1 withDuration:(float)arg2 ;
-(void)animateAccessoryViewVisibility:(char)arg1 withDuration:(float)arg2 ;
-(void)hideScrollViewHorizontalScrollIndicator:(char)arg1 ;
-(void)updateScrollViewContentInsetBottom:(float)arg1 ;
-(void)candidateBarWillChangeHeight:(float)arg1 withDuration:(float)arg2 ;
-(UIInputViewController *)_inputViewController;
-(UIKBInputBackdropView *)_inputBackdropView;
-(UIKBInputBackdropView *)_inputAccessoryBackdropView;
-(void)willResume:(id)arg1 ;
-(void)didSuspend:(id)arg1 ;
-(char)shouldNotifyRemoteKeyboards;
-(void)setShouldNotifyRemoteKeyboards:(char)arg1 ;
-(void)checkPlaceholdersForRemoteKeyboards;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<_UIRemoteKeyboardControllerDelegate>)arg1 ;
-(void)updateViewSizingConstraints;
-(void)registerPowerLogEvent:(char)arg1 ;
-(void)performWithSafeTransitionFrames:(/*^block*/id)arg1 ;
-(void)_updateBackdropViews;
-(void)_forcePreLayoutHostViewFrame;
-(void)performWithoutAppearanceCallbacks:(/*^block*/id)arg1 ;
-(void)setTemplateNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(id)viewMatchingConstraintForAttribute:(int)arg1 primaryView:(id)arg2 secondaryView:(id)arg3 ;
-(NSLayoutConstraint *)inputViewHeightConstraint;
-(void)setInputViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)accessoryViewHeightConstraint;
-(void)setAccessoryViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)clearViewSizingConstraints:(unsigned)arg1 ;
-(char)_subviewUsesClassicLayout:(id)arg1 ;
-(UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1 ;
-(UIInputViewController *)_inputAccessoryViewController;
-(void)updateConstraintInsets;
-(void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 ;
-(void)updateVisibilityConstraintsForPlacement:(id)arg1 ;
-(NSArray *)visibilityConstraints;
-(void)setVerticalVisibilityConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setVisibilityConstraints:(NSArray *)arg1 ;
-(UIInputViewSetNotificationInfo *)templateNotificationInfo;
-(int)appearStateForChild:(unsigned)arg1 placement:(id)arg2 start:(char)arg3 ;
-(void)changeChild:(unsigned)arg1 toAppearState:(int)arg2 animated:(char)arg3 ;
-(void)postStartNotifications:(unsigned)arg1 withInfo:(id)arg2 ;
-(void)postEndNotifications:(unsigned)arg1 withInfo:(id)arg2 ;
-(void)clearInteractiveTransitionStateIfNecessary;
-(char)mergeTransitionIfNecessaryWithTransition:(id)arg1 ;
-(id)initialNotificationInfo;
-(void)updateAppearStatesForPlacement:(id)arg1 start:(char)arg2 animated:(char)arg3 ;
-(void)_collectTransitionTimeStatistics:(unsigned)arg1 ;
-(void)performWithoutCallbacksOrNotifications:(/*^block*/id)arg1 ;
-(id)_viewControllerForAutorotation;
-(void)setPostRotationPlacement:(UIInputViewSetPlacement *)arg1 ;
-(UIInputViewSetPlacement *)postRotationPlacement;
-(char)_useLiveRotation;
-(UIInputViewSet *)postRotationInputViewSet;
-(void)setPostRotationInputViewSet:(UIInputViewSet *)arg1 ;
-(void)setPlacement:(id)arg1 starting:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)set_inputViewController:(UIInputViewController *)arg1 ;
-(void)setInputBackdropView:(id)arg1 ;
-(void)set_inputAccessoryViewController:(UIInputViewController *)arg1 ;
-(void)setInputAccessoryBackdropView:(id)arg1 ;
-(unsigned)changeToInputViewSet:(id)arg1 ;
-(void)performOperations:(/*^block*/id)arg1 withTemplateNotificationInfo:(id)arg2 ;
-(void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setInputView:(id)arg1 accessoryView:(id)arg2 ;
-(void)setInterfaceAutorotationDisabled:(char)arg1 ;
-(NSLayoutConstraint *)verticalVisibilityConstraint;
-(unsigned)keyboardDismissModeForPublicMode:(int)arg1 ;
-(void)fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned)arg2 ;
-(void)completeKeyboardDismiss:(unsigned)arg1 ;
-(void)postTransitionEndNotification;
@end

