/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/RUIObjectModelDelegate.h>

@protocol AAUIAccountCreationDelegate;
@class RUILoader, NSMutableArray, UINavigationController, UIAlertView, AASetupAssistantService, AAAutoAccountVerifier, NSString;

@interface AAUIAccountCreationRemoteUI : NSObject <RUIObjectModelDelegate> {

	char _isModal;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	UINavigationController* _parentNavController;
	UINavigationController* _createAccountNavController;
	UIAlertView* _tcConfirmationAlert;
	UIAlertView* _failedToCreateAccountAlert;
	char _over13;
	AASetupAssistantService* _aaService;
	AAAutoAccountVerifier* _verifier;
	id<AAUIAccountCreationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIAccountCreationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<AAUIAccountCreationDelegate>)arg1 ;
-(id<AAUIAccountCreationDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)loadURLRequest:(id)arg1 addHeaders:(char)arg2 ;
-(void)_createAppleAccount;
-(void)_cleanupCreateAppleID:(id)arg1 ;
-(void)_userAgreedToTCs:(char)arg1 ;
-(id)initWithNavController:(id)arg1 isModal:(char)arg2 ;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(char)arg1 ;
-(void)objectModelDidChange:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(unsigned)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)loadURLRequest:(id)arg1 ;
@end

