/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <iAd/ADAdSpace_RPC.h>
#import <iAd/ADAdSpaceRemoteViewControllerDelegate.h>

@protocol ADAdRecipient;
@class NSString, NSURL, NSSet, ADAdImpressionPublicAttributes, ADAdSpaceRemoteViewController, _UIAsyncInvocation, _ADRemoteViewController, NSDictionary, ADAdSpaceConfiguration;

@interface ADAdSpace : NSObject <UIViewControllerTransitioningDelegate, ADAdSpace_RPC, ADAdSpaceRemoteViewControllerDelegate> {

	id<ADAdRecipient> _recipient;
	char _visibilityCheckScheduled;
	char _serviceAdSpaceRequestInProgress;
	char _shouldPresentActionViewControllerWhenReady;
	char _actionViewControllerReadyForPresentation;
	char _actionViewControllerWantsDismissal;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	NSSet* _context;
	ADAdImpressionPublicAttributes* _currentAdImpressionPublicAttributes;
	int _visibility;
	ADAdSpaceRemoteViewController* _creativeViewController;
	_UIAsyncInvocation* _remoteViewControllerRequestCancelationInvocation;
	_ADRemoteViewController* _remoteViewController;
	_ADRemoteViewController* _portraitOnlyViewController;
	NSDictionary* _adToLoad;
	double _lastSlowCheck;

}

@property (nonatomic,readonly) id<ADAdRecipient> recipient; 
@property (nonatomic,readonly) id<ADSAdSpace_RPC><NSObject> serviceAdSpace; 
@property (nonatomic,copy) NSString * identifier;                                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                    //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                                                        //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                                    //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSSet * context;                                                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ADAdImpressionPublicAttributes * currentAdImpressionPublicAttributes;               //@synthesize currentAdImpressionPublicAttributes=_currentAdImpressionPublicAttributes - In the implementation block
@property (nonatomic,readonly) ADAdSpaceConfiguration * configuration; 
@property (assign,nonatomic) int visibility;                                                                     //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) char visibilityCheckScheduled;                                                      //@synthesize visibilityCheckScheduled=_visibilityCheckScheduled - In the implementation block
@property (assign,nonatomic) double lastSlowCheck;                                                               //@synthesize lastSlowCheck=_lastSlowCheck - In the implementation block
@property (nonatomic,retain) ADAdSpaceRemoteViewController * creativeViewController;                             //@synthesize creativeViewController=_creativeViewController - In the implementation block
@property (assign,nonatomic) char serviceAdSpaceRequestInProgress;                                               //@synthesize serviceAdSpaceRequestInProgress=_serviceAdSpaceRequestInProgress - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * remoteViewControllerRequestCancelationInvocation;              //@synthesize remoteViewControllerRequestCancelationInvocation=_remoteViewControllerRequestCancelationInvocation - In the implementation block
@property (nonatomic,retain) _ADRemoteViewController * remoteViewController;                                     //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) _ADRemoteViewController * portraitOnlyViewController;                               //@synthesize portraitOnlyViewController=_portraitOnlyViewController - In the implementation block
@property (assign,nonatomic) char shouldPresentActionViewControllerWhenReady;                                    //@synthesize shouldPresentActionViewControllerWhenReady=_shouldPresentActionViewControllerWhenReady - In the implementation block
@property (assign,nonatomic) char actionViewControllerReadyForPresentation;                                      //@synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation - In the implementation block
@property (assign,nonatomic) char actionViewControllerWantsDismissal;                                            //@synthesize actionViewControllerWantsDismissal=_actionViewControllerWantsDismissal - In the implementation block
@property (nonatomic,readonly) NSString * connectionAssertionIdentifier; 
@property (nonatomic,retain) NSDictionary * adToLoad;                                                            //@synthesize adToLoad=_adToLoad - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ADAdRecipient>)recipient;
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(NSSet *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContext:(NSSet *)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)close;
-(_ADRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(_ADRemoteViewController *)arg1 ;
-(ADAdSpaceConfiguration *)configuration;
-(id)initForRecipient:(id)arg1 ;
-(id<ADSAdSpace_RPC><NSObject>)serviceAdSpace;
-(ADAdImpressionPublicAttributes *)currentAdImpressionPublicAttributes;
-(void)updateVisibility;
-(void)executeBannerViewActionFrom:(CGRect)arg1 withTapLocation:(CGPoint)arg2 ;
-(void)refuseBannerViewAction;
-(void)cancelBannerViewAction;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(void)loadAd:(id)arg1 ;
-(NSString *)advertisingSection;
-(NSString *)authenticationUserName;
-(void)interstitialWasRemovedFromSuperview;
-(NSString *)connectionAssertionIdentifier;
-(void)_requestServiceAdSpace;
-(void)_clientApplicationDidBecomeActive;
-(void)_clientApplicationDidEnterBackground;
-(ADAdSpaceRemoteViewController *)creativeViewController;
-(char)serviceAdSpaceRequestInProgress;
-(void)setServiceAdSpaceRequestInProgress:(char)arg1 ;
-(void)setCreativeViewController:(ADAdSpaceRemoteViewController *)arg1 ;
-(void)_remote_close;
-(void)_closeConnectionIfNecessary;
-(void)_remote_dismissViewController;
-(void)_updateAllProperties;
-(NSDictionary *)adToLoad;
-(void)setAdToLoad:(NSDictionary *)arg1 ;
-(_UIAsyncInvocation *)remoteViewControllerRequestCancelationInvocation;
-(void)setCurrentAdImpressionPublicAttributes:(ADAdImpressionPublicAttributes *)arg1 ;
-(char)visibilityCheckScheduled;
-(void)setVisibilityCheckScheduled:(char)arg1 ;
-(double)lastSlowCheck;
-(void)setLastSlowCheck:(double)arg1 ;
-(void)setShouldPresentActionViewControllerWhenReady:(char)arg1 ;
-(void)_considerPresentingActionViewController;
-(char)shouldPresentActionViewControllerWhenReady;
-(char)actionViewControllerReadyForPresentation;
-(void)setActionViewControllerWantsDismissal:(char)arg1 ;
-(char)actionViewControllerWantsDismissal;
-(void)setActionViewControllerReadyForPresentation:(char)arg1 ;
-(void)setRemoteViewControllerRequestCancelationInvocation:(_UIAsyncInvocation *)arg1 ;
-(_ADRemoteViewController *)portraitOnlyViewController;
-(void)_remote_dismissPortraitOnlyViewController;
-(void)setPortraitOnlyViewController:(_ADRemoteViewController *)arg1 ;
-(void)_remote_creativeWillLoad;
-(void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 ;
-(void)_remote_creativeDidFailWithError:(id)arg1 ;
-(void)_remote_openURL:(id)arg1 ;
-(void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 ;
-(void)_remote_updateViewControllerSupportedOrientations:(unsigned)arg1 ;
-(void)_remote_actionViewControllerReadyForPresentation;
-(void)_remote_requestPortraitOnlyViewController;
-(void)_remote_pauseBannerMedia;
-(void)_remote_resumeBannerMedia;
-(void)adSpaceRemoteViewControllerDidTerminateWithError:(id)arg1 ;
-(void)setAdSpaceType:(int)arg1 ;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(NSURL *)serverURL;
-(int)visibility;
-(void)setVisibility:(int)arg1 ;
@end

