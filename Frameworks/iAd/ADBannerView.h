/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>
#import <iAd/ADAdRecipient.h>
#import <iAd/ADDimmerViewDelegate.h>

@protocol ADBannerViewDelegate, ADBannerViewInternalDelegate;
@class UIView, UIViewController, NSString, NSTimer, NSURL, ADAdSpace;

@interface ADBannerView : UIView <ADAdRecipient, ADDimmerViewDelegate> {

	id<ADBannerViewDelegate> _weakDelegate;
	id<ADBannerViewInternalDelegate> _weakInternalDelegate;
	char _bannerViewActionInProgress;
	char _createdForIBInternal;
	char _dimmed;
	char _determiningConstraintBasedWidth;
	char _inSecondConstraintsPass;
	int _options;
	int _internalAdType;
	int _adType;
	NSString* _advertisingSection;
	UIView* _highlightClippedView;
	UIView* _highlightHittableView;
	NSTimer* _highlightUpdateTimer;
	NSString* _authenticationUserName;
	NSURL* _serverURL;
	ADAdSpace* _adSpace;
	float _constraintBasedWidth;

}

@property (nonatomic,readonly) int adType;                                                                     //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic,__weak) id<ADBannerViewDelegate> delegate; 
@property (getter=isBannerLoaded,nonatomic,readonly) char bannerLoaded; 
@property (assign,getter=isBannerViewActionInProgress,nonatomic) char bannerViewActionInProgress;              //@synthesize bannerViewActionInProgress=_bannerViewActionInProgress - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                                                      //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,retain) UIView * highlightClippedView;                                                    //@synthesize highlightClippedView=_highlightClippedView - In the implementation block
@property (nonatomic,retain) UIView * highlightHittableView;                                                   //@synthesize highlightHittableView=_highlightHittableView - In the implementation block
@property (nonatomic,retain) NSTimer * highlightUpdateTimer;                                                   //@synthesize highlightUpdateTimer=_highlightUpdateTimer - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                                  //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                  //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,readonly) char createdForIBInternal;                                                      //@synthesize createdForIBInternal=_createdForIBInternal - In the implementation block
@property (nonatomic,retain) ADAdSpace * adSpace;                                                              //@synthesize adSpace=_adSpace - In the implementation block
@property (assign,nonatomic) char dimmed;                                                                      //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) char determiningConstraintBasedWidth;                                             //@synthesize determiningConstraintBasedWidth=_determiningConstraintBasedWidth - In the implementation block
@property (assign,nonatomic) float constraintBasedWidth;                                                       //@synthesize constraintBasedWidth=_constraintBasedWidth - In the implementation block
@property (assign,nonatomic) char inSecondConstraintsPass;                                                     //@synthesize inSecondConstraintsPass=_inSecondConstraintsPass - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int internalAdType;                                                             //@synthesize internalAdType=_internalAdType - In the implementation block
@property (nonatomic,readonly) int options;                                                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UIView * adSpaceView; 
@property (nonatomic,readonly) UIViewController * presentingViewController; 
+(char)requiresConstraintBasedLayout;
+(CGSize)_sizeThatFitsSize:(CGSize)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(char)arg3 ;
+(CGSize)sizeFromBannerContentSizeIdentifier:(id)arg1 ;
+(CGSize)_landscapeBannerSize;
+(CGSize)_portraitBannerSize;
+(void)setServerURL:(id)arg1 ;
+(CGRect)_frameThatFits:(CGRect)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(char)arg3 ;
-(void)setDimmed:(char)arg1 ;
-(char)dimmed;
-(id)initFromIBWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutoresizingMask:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<ADBannerViewDelegate>)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ADBannerViewDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(id)identifier;
-(int)action;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)_commonInit;
-(void)setCenter:(CGPoint)arg1 ;
-(id)context;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setContext:(id)arg1 ;
-(void)updateConstraints;
-(char)_needsDoubleUpdateConstraintsPass;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(char)arg1 ;
-(id)uniqueIdentifier;
-(int)options;
-(ADAdSpace *)adSpace;
-(id)initFromIBWithFrame:(CGRect)arg1 adType:(int)arg2 ;
-(void)_resetHighlightTimer;
-(void)bannerTappedAtPoint:(CGPoint)arg1 ;
-(void)setBannerViewActionInProgress:(char)arg1 ;
-(void)_updateHighlight:(id)arg1 ;
-(void)_forwardErrorToDelegate:(id)arg1 ;
-(void)cancelBannerViewAction;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(double)skipThreshold;
-(void)setDeterminingConstraintBasedWidth:(char)arg1 ;
-(void)setConstraintBasedWidth:(float)arg1 ;
-(char)determiningConstraintBasedWidth;
-(float)constraintBasedWidth;
-(void)setInSecondConstraintsPass:(char)arg1 ;
-(id)logoImageURL;
-(void)loadAd:(id)arg1 ;
-(void)serverBannerViewWillLoad;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1 ;
-(void)serverStoryboardDidTransitionOut;
-(void)storyboardViewControllerDidPresent;
-(void)pauseBannerMedia;
-(void)resumeBannerMedia;
-(UIView *)adSpaceView;
-(void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(CGPoint)arg2 ;
-(char)enableDimmerView:(id)arg1 ;
-(id)initWithAdType:(int)arg1 ;
-(id)_accessibilityUserTestingElementAttributes;
-(void)cycleImpressionImmediately;
-(char)isBannerLoaded;
-(void)prerollDidStart;
-(void)prerollDidStop;
-(void)setRequiredContentSizeIdentifiers:(id)arg1 ;
-(id)requiredContentSizeIdentifiers;
-(void)setCurrentContentSizeIdentifier:(id)arg1 ;
-(id)currentContentSizeIdentifier;
-(void)suspendImpressionCycling;
-(void)resumeImpressionCycling;
-(void)playbackStarted;
-(void)bannerDidAppear;
-(void)bannerDidDisappear;
-(void)cancelScheduledAd;
-(void)scheduleAd;
-(id)publicImpressionAttributes;
-(char)isBannerViewActionInProgress;
-(NSString *)advertisingSection;
-(UIView *)highlightClippedView;
-(void)setHighlightClippedView:(UIView *)arg1 ;
-(UIView *)highlightHittableView;
-(void)setHighlightHittableView:(UIView *)arg1 ;
-(NSTimer *)highlightUpdateTimer;
-(void)setHighlightUpdateTimer:(NSTimer *)arg1 ;
-(NSString *)authenticationUserName;
-(char)createdForIBInternal;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(char)inSecondConstraintsPass;
-(id)_initWithInternalAdType:(int)arg1 options:(int)arg2 ;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)beginAction;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(int)internalAdType;
-(id)videoAssets;
-(id)staticImageURL;
-(int)adType;
-(id)descriptionForLCD;
-(id)headlineForLCD;
-(void)playbackStartedForImpressionSource:(int)arg1 ;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished:(id)arg1 ;
-(void)playbackFailed:(id)arg1 ;
-(NSURL *)serverURL;
-(id)audioURL;
@end

