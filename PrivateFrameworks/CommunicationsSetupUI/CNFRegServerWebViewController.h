/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>

@class CNFRegController, CNFRegLoadingView, UIAlertView, NSTimer, RUILoader, NSMutableArray, UIWebView, NSString;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate, RUIObjectModelDelegate> {

	CNFRegController* _regController;
	CNFRegLoadingView* _loadingView;
	UIAlertView* _alert;
	/*^block*/id _alertHandler;
	NSTimer* _timeoutTimer;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	struct {
		unsigned isLoading : 1;
		unsigned isLoaded : 1;
		unsigned wantsWifi : 1;
		unsigned modifiedWiFi : 1;
		unsigned automaticKeyboardWasDisabled : 1;
		unsigned checkedLogState : 1;
		unsigned shouldLog : 1;
		unsigned timedOut;
	}  _webControllerFlags;
	UIWebView* _webView;

}

@property (nonatomic,retain) CNFRegController * regController;              //@synthesize regController=_regController - In the implementation block
@property (nonatomic,readonly) char isLoaded; 
@property (nonatomic,readonly) char isLoading; 
@property (nonatomic,readonly) char timedOut; 
@property (nonatomic,retain) UIWebView * webView;                           //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIAlertView * alert;                           //@synthesize alert=_alert - In the implementation block
@property (nonatomic,copy) id alertHandler;                                 //@synthesize alertHandler=_alertHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showSpinner;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(char)isLoading;
-(char)isLoaded;
-(void)setAlertHandler:(id)arg1 ;
-(id)alertHandler;
-(UIAlertView *)alert;
-(void)setAlert:(UIAlertView *)arg1 ;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(id)logName;
-(void)startRequiringWifi;
-(void)stopRequiringWifi;
-(void)_stopTimeout;
-(char)_shouldLog;
-(id)overrideURLForURL:(id)arg1 ;
-(char)shouldSetHeadersForRequest:(id)arg1 ;
-(void)setHeadersForRequest:(id)arg1 ;
-(char)canSendURLRequest:(id)arg1 ;
-(void)hideSpinner;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(char)arg1 ;
-(void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)_timeoutFired:(id)arg1 ;
-(void)setWantsWifi:(char)arg1 ;
-(void)loadURL:(id)arg1 ;
-(void)_startTimeoutWithDuration:(double)arg1 ;
-(void)objectModelDidChange:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)_handleTimeout;
-(char)timedOut;
@end

