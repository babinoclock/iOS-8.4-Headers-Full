/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUSignInViewControllerDelegate.h>
#import <RadioUI/RUTermsViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol RUWelcomeViewControllerDelegate;
@class SKUICircleProgressIndicator, NSDate, CADisplayLink, UIAlertView, UIButton, UILabel, NSMutableArray, UICollectionView, RUSignInViewController, MPUBorderDrawingCache, RUTermsViewController, _RUWelcomeTicker, NSString;

@interface RUWelcomeViewController : UIViewController <RUSignInViewControllerDelegate, RUTermsViewControllerDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	SKUICircleProgressIndicator* _activityIndicatorView;
	int _applicationState;
	NSDate* _autoRetryMinimumDate;
	CADisplayLink* _displayLink;
	UIAlertView* _failedAlertView;
	char _isOptingIn;
	char _isScrollerStopped;
	char _isVisible;
	double _lastTimestamp;
	UIButton* _learnMoreButton;
	UILabel* _loadingLabel;
	NSMutableArray* _optInCompletionHandlers;
	UICollectionView* _scrollingStackCollectionView;
	UIButton* _signInButton;
	RUSignInViewController* _signInViewController;
	MPUBorderDrawingCache* _stackItemBorderDrawingCache;
	RUTermsViewController* _termsViewController;
	_RUWelcomeTicker* _ticker;
	UILabel* _titleLabel;
	char _displayingLoading;
	id<RUWelcomeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RUWelcomeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDisplayingLoading,nonatomic) char displayingLoading;                //@synthesize displayingLoading=_displayingLoading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RUWelcomeViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<RUWelcomeViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_displayLinkAction:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2 ;
-(void)termsViewController:(id)arg1 didAcceptTerms:(char)arg2 ;
-(void)setDisplayingLoading:(char)arg1 ;
-(char)isDisplayingLoading;
-(void)attemptOptInWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_sortCollectionCells:(id)arg1 byDistanceFromCenter:(CGPoint)arg2 ;
-(void)_allowsAccountModificationDidChangeNotification:(id)arg1 ;
-(void)_layoutForOrientation:(int)arg1 ;
-(void)_updateDisplayLinkStateAnimated:(char)arg1 ;
-(void)_learnMoreAction:(id)arg1 ;
-(char)_allowsSignIn;
-(void)_updateSignInButtonTitle;
-(void)_attemptOptForReason:(int)arg1 allowAuthentication:(char)arg2 ;
-(void)_scrollWithCurrentTimestemp:(double)arg1 ;
-(void)_createEndScrollingAnimation;
-(void)_completeWithStatus:(int)arg1 didOptIn:(char)arg2 retryInterval:(double)arg3 ;
-(id)_stackImageNames;
-(char)_canAutomaticallyOptIn;
-(void)_presentSignInViewController;
-(void)_optInWithActiveAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_checkAcceptedTermsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_signInAction:(id)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end

