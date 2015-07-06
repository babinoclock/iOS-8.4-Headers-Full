/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol SafariExplanationViewControllerDelegate;
@class UIWebView, NSString;

@interface SafariExplanationViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	id<SafariExplanationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SafariExplanationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<SafariExplanationViewControllerDelegate>)arg1 ;
-(id<SafariExplanationViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(id)initWithTitle:(id)arg1 explanatoryHTMLResourceName:(id)arg2 fromBundle:(id)arg3 ;
-(void)donePressed;
@end

