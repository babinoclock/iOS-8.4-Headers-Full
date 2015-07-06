/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <HelpKit/APDDataManagerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <HelpKit/APDTOCViewControllerDelegate.h>
#import <HelpKit/APDTopicViewControllerDelegate.h>
#import <HelpKit/APDSearchViewControllerDelegate.h>
#import <HelpKit/APDGlossaryViewControllerDelegate.h>
#import <UIKit/UIToolbarDelegate.h>

@protocol APDLearnMoreViewControllerDelegate;
@class UITapGestureRecognizer, UINavigationController, APDTopicViewController, APDDataManager, APDGlossaryViewController, UIView, UIColor, NSString, UIToolbar, UIImageView, UIBarButtonItem, NSArray, APDKVOManager, APDTOCViewController, APDSearchViewController, NSURL;

@interface APDLearnMoreViewController : UIViewController <UIGestureRecognizerDelegate, APDDataManagerDelegate, UIAlertViewDelegate, APDTOCViewControllerDelegate, APDTopicViewControllerDelegate, APDSearchViewControllerDelegate, APDGlossaryViewControllerDelegate, UIToolbarDelegate> {

	char _reloadTopicPending;
	char _viewDidAppeared;
	char _useDefaultToolbarColor;
	char _displayAsPopover;
	char _dismissTopicViewWhenLoded;
	char _panning;
	char _panningPending;
	char _topicWebViewAnimating;
	CGSize _popoverSize;
	float _topicContainerOriginX;
	float _topicContainerStartingY;
	UITapGestureRecognizer* _topicWebViewTapGestureRecognizer;
	UINavigationController* _glossaryNavigationController;
	APDTopicViewController* _topicViewController;
	APDDataManager* _dataManager;
	APDGlossaryViewController* _glossaryViewController;
	char _showDoneButton;
	char _RTL;
	UIView* _topicView;
	id<APDLearnMoreViewControllerDelegate> _delegate;
	int _mode;
	UIColor* _toolbarTintColor;
	UIColor* _searchBarTintColor;
	NSString* _selectedTopicName;
	UIToolbar* _toolbar;
	UIView* _toolbarBottomStrokeView;
	UIImageView* _topicViewLeftShadow;
	UIBarButtonItem* _tocToolbarButton;
	UIBarButtonItem* _searchToolbarButton;
	UIBarButtonItem* _backToolbarButton;
	UIBarButtonItem* _forwardToolbarButton;
	UIBarButtonItem* _doneToolbarButton;
	NSArray* _viewInterfaceOrientations;
	APDKVOManager* _KVOManager;
	APDTOCViewController* _TOCViewController;
	APDSearchViewController* _searchViewController;

}

@property (assign,nonatomic,__weak) UIView * topicView;                                           //@synthesize topicView=_topicView - In the implementation block
@property (assign,nonatomic,__weak) id<APDLearnMoreViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char useRemoteAssetsForLocalHelp; 
@property (assign,nonatomic) char showDoneButton;                                                 //@synthesize showDoneButton=_showDoneButton - In the implementation block
@property (assign,nonatomic) char showGlossaryLinks; 
@property (assign,nonatomic) char enableContextMenu; 
@property (assign,nonatomic) char translucentBar; 
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSURL * baseURL; 
@property (nonatomic,copy) NSURL * remoteHelpURL; 
@property (nonatomic,copy) NSURL * localResourceBundleURL; 
@property (nonatomic,copy) NSURL * configServerURL; 
@property (nonatomic,copy) UIColor * toolbarTintColor;                                            //@synthesize toolbarTintColor=_toolbarTintColor - In the implementation block
@property (nonatomic,copy) UIColor * toolbarBarTintColor; 
@property (nonatomic,copy) UIColor * searchBarTintColor;                                          //@synthesize searchBarTintColor=_searchBarTintColor - In the implementation block
@property (nonatomic,copy) UIColor * searchBarBarTintColor; 
@property (nonatomic,copy) UIColor * cellHighlightedColor; 
@property (nonatomic,copy) NSString * selectedISOCode; 
@property (nonatomic,copy) NSString * selectedTopicID; 
@property (nonatomic,copy) NSString * selectedTopicName;                                          //@synthesize selectedTopicName=_selectedTopicName - In the implementation block
@property (nonatomic,copy) NSString * configServerAppIdentifier; 
@property (nonatomic,copy) NSString * configServerTargetedReleaseVersion; 
@property (assign,nonatomic,__weak) UIToolbar * toolbar;                                          //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic,__weak) UIView * toolbarBottomStrokeView;                             //@synthesize toolbarBottomStrokeView=_toolbarBottomStrokeView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * topicViewLeftShadow;                            //@synthesize topicViewLeftShadow=_topicViewLeftShadow - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * tocToolbarButton;                           //@synthesize tocToolbarButton=_tocToolbarButton - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * searchToolbarButton;                        //@synthesize searchToolbarButton=_searchToolbarButton - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * backToolbarButton;                          //@synthesize backToolbarButton=_backToolbarButton - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * forwardToolbarButton;                       //@synthesize forwardToolbarButton=_forwardToolbarButton - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * doneToolbarButton;                          //@synthesize doneToolbarButton=_doneToolbarButton - In the implementation block
@property (assign,nonatomic) char RTL;                                                            //@synthesize RTL=_RTL - In the implementation block
@property (nonatomic,copy) NSString * appName; 
@property (nonatomic,copy) NSString * helpVersion; 
@property (nonatomic,copy) NSString * deviceType; 
@property (nonatomic,copy) NSArray * viewInterfaceOrientations;                                   //@synthesize viewInterfaceOrientations=_viewInterfaceOrientations - In the implementation block
@property (nonatomic,retain) APDKVOManager * KVOManager;                                          //@synthesize KVOManager=_KVOManager - In the implementation block
@property (nonatomic,retain) APDTOCViewController * TOCViewController;                            //@synthesize TOCViewController=_TOCViewController - In the implementation block
@property (nonatomic,retain) APDSearchViewController * searchViewController;                      //@synthesize searchViewController=_searchViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)version;
+(id)learnMoreViewControllerWithAPDID:(id)arg1 ;
+(id)learnMoreViewController;
+(id)learnMoreViewControllerWithTopicTitle:(id)arg1 ;
-(char)isPortrait;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)setSearchViewController:(APDSearchViewController *)arg1 ;
-(APDSearchViewController *)searchViewController;
-(void)dealloc;
-(void)setDelegate:(id<APDLearnMoreViewControllerDelegate>)arg1 ;
-(id)init;
-(id<APDLearnMoreViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(int)positionForBar:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)setContentSizeForViewInPopover:(CGSize)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)disablesAutomaticKeyboardDismissal;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setToolbarTintColor:(UIColor *)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)dismissAnimated:(char)arg1 ;
-(NSURL *)baseURL;
-(void)setDeviceType:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSURL *)localResourceBundleURL;
-(void)setRTL:(char)arg1 ;
-(UIColor *)cellHighlightedColor;
-(void)setCellHighlightedColor:(UIColor *)arg1 ;
-(char)RTL;
-(void)setSelectedTopicID:(NSString *)arg1 ;
-(void)setSelectedTopicName:(NSString *)arg1 ;
-(void)setShowGlossaryLinks:(char)arg1 ;
-(void)setTranslucentBar:(char)arg1 ;
-(void)onLocaleChanged:(id)arg1 ;
-(APDTOCViewController *)TOCViewController;
-(UIView *)toolbarBottomStrokeView;
-(UIView *)topicView;
-(UIImageView *)topicViewLeftShadow;
-(char)translucentBar;
-(void)updateToolbarButtons;
-(void)panned:(id)arg1 ;
-(void)onDoneTapped:(id)arg1 ;
-(NSString *)selectedTopicID;
-(void)showWebViewWithTopic:(id)arg1 animated:(char)arg2 ;
-(void)updateLocalizedStrings;
-(UIColor *)toolbarBarTintColor;
-(NSURL *)remoteHelpURL;
-(NSURL *)configServerURL;
-(NSString *)configServerAppIdentifier;
-(NSString *)configServerTargetedReleaseVersion;
-(APDKVOManager *)KVOManager;
-(void)onRemoteHelpURLChanged:(id)arg1 ;
-(void)updateLocalizationModel;
-(void)updateViewLayout;
-(void)updateScrollToTop;
-(UIBarButtonItem *)backToolbarButton;
-(UIBarButtonItem *)forwardToolbarButton;
-(char)useRemoteAssetsForLocalHelp;
-(void)setUseRemoteAssetsForLocalHelp:(char)arg1 ;
-(char)showGlossaryLinks;
-(char)enableContextMenu;
-(void)setEnableContextMenu:(char)arg1 ;
-(void)setRemoteHelpURL:(NSURL *)arg1 ;
-(void)setLocalResourceBundleURL:(NSURL *)arg1 ;
-(NSString *)helpVersion;
-(void)setHelpVersion:(NSString *)arg1 ;
-(NSString *)selectedISOCode;
-(void)setSelectedISOCode:(NSString *)arg1 ;
-(void)setConfigServerURL:(NSURL *)arg1 ;
-(void)setConfigServerAppIdentifier:(NSString *)arg1 ;
-(void)setConfigServerTargetedReleaseVersion:(NSString *)arg1 ;
-(void)setToolbarBarTintColor:(UIColor *)arg1 ;
-(UIColor *)searchBarBarTintColor;
-(void)setSearchBarBarTintColor:(UIColor *)arg1 ;
-(void)setViewInterfaceOrientations:(NSArray *)arg1 ;
-(UIBarButtonItem *)tocToolbarButton;
-(void)updateTOCToolbarAccessibilityHint;
-(UIBarButtonItem *)searchToolbarButton;
-(UIBarButtonItem *)doneToolbarButton;
-(void)onLocalizationsListChanged:(id)arg1 ;
-(void)onSectionListChanged:(id)arg1 ;
-(void)dismissTopicWebViewWithDuration:(float)arg1 animated:(char)arg2 ;
-(char)topicWebViewCanGoBack;
-(char)topicWebViewCanGoForward;
-(void)dismissTopicWebView;
-(void)showTopicWebViewAnimated:(char)arg1 duration:(float)arg2 ;
-(void)showTopicWebView;
-(NSArray *)viewInterfaceOrientations;
-(void)presentViewController:(id)arg1 ;
-(void)showGlossaryTopic:(id)arg1 ;
-(void)dataManagerRequestFailed:(id)arg1 ;
-(void)navigationViewController:(id)arg1 showNavigationTopic:(id)arg2 ;
-(void)navigationTableViewControllerOnSameTopicSelected:(id)arg1 ;
-(char)topicViewController:(id)arg1 loadNavigationItem:(id)arg2 request:(id)arg3 ;
-(id)topicViewController:(id)arg1 lastScrollPositionForTopic:(id)arg2 ;
-(void)topicViewControllerSelectedTopicIDChanged:(id)arg1 ;
-(void)topicViewController:(id)arg1 loadMovieURL:(id)arg2 ;
-(void)topicViewControllerLoadTopic:(id)arg1 ;
-(void)topicViewControllerLoadTopicFailed:(id)arg1 ;
-(void)topicViewControllerWebViewDidFinishLoading:(id)arg1 ;
-(void)searchViewControllerSearchBarShown:(id)arg1 ;
-(void)searchViewControllerSearchWillHide:(id)arg1 ;
-(void)searchViewControllerSearchHidden:(id)arg1 ;
-(void)dismissViewController:(id)arg1 ;
-(void)setBaseURL:(id)arg1 appName:(id)arg2 deviceType:(id)arg3 helpVersion:(id)arg4 ;
-(void)setSupportPortrait:(char)arg1 upsideDown:(char)arg2 landscapeLeft:(char)arg3 landscapeRight:(char)arg4 ;
-(void)onBackButtonTapped:(id)arg1 ;
-(void)onForwardButtonTapped:(id)arg1 ;
-(void)onTocButtonTapped:(id)arg1 ;
-(void)onSearchButtonTapped:(id)arg1 ;
-(void)setTopicView:(UIView *)arg1 ;
-(char)showDoneButton;
-(void)setShowDoneButton:(char)arg1 ;
-(UIColor *)toolbarTintColor;
-(UIColor *)searchBarTintColor;
-(void)setSearchBarTintColor:(UIColor *)arg1 ;
-(NSString *)selectedTopicName;
-(void)setToolbarBottomStrokeView:(UIView *)arg1 ;
-(void)setTopicViewLeftShadow:(UIImageView *)arg1 ;
-(void)setTocToolbarButton:(UIBarButtonItem *)arg1 ;
-(void)setSearchToolbarButton:(UIBarButtonItem *)arg1 ;
-(void)setBackToolbarButton:(UIBarButtonItem *)arg1 ;
-(void)setForwardToolbarButton:(UIBarButtonItem *)arg1 ;
-(void)setDoneToolbarButton:(UIBarButtonItem *)arg1 ;
-(void)setKVOManager:(APDKVOManager *)arg1 ;
-(void)setTOCViewController:(APDTOCViewController *)arg1 ;
-(NSString *)deviceType;
@end

