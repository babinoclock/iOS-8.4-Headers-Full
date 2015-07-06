/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString, NSURL;

@interface RUIWebView : RUIElement <UIWebViewDelegate> {

	UIWebView* _webView;
	NSString* _html;
	NSURL* _baseURL;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * html;                         //@synthesize html=_html - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                       //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sourceURL;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)userStyleSheet;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
@end

