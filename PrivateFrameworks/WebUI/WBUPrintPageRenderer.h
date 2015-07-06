/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <UIKit/UIPrintPageRenderer.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@class NSNumberFormatter, UIWebPaginationInfo, NSString, UIFont, UIColor, UIWebBrowserView, WebFrame, UIPrintFormatter;

@interface WBUPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate> {

	NSNumberFormatter* _numberFormatter;
	UIWebPaginationInfo* _paginationInfo;
	float _URLWidth;
	NSString* _dateString;
	float _dateWidth;
	float _printWidth;
	CGPoint _contentOffset;
	CGPoint _footerOffset;
	UIFont* _footerFont;
	UIColor* _footerColor;
	char _printFooter;
	UIWebBrowserView* _browserView;
	WebFrame* _webFrame;
	NSString* _URLString;
	UIPrintFormatter* _contentFormatter;

}

@property (nonatomic,retain) UIWebBrowserView * browserView;                   //@synthesize browserView=_browserView - In the implementation block
@property (nonatomic,retain) WebFrame * webFrame;                              //@synthesize webFrame=_webFrame - In the implementation block
@property (nonatomic,retain) NSString * URLString;                             //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * contentFormatter;              //@synthesize contentFormatter=_contentFormatter - In the implementation block
@property (assign,nonatomic) char printFooter;                                 //@synthesize printFooter=_printFooter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(WebFrame *)webFrame;
-(int)numberOfPages;
-(void)printInteractionControllerWillStartJob:(id)arg1 ;
-(void)printInteractionControllerDidFinishJob:(id)arg1 ;
-(void)drawContentForPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
-(void)drawFooterForPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
-(void)setBrowserView:(UIWebBrowserView *)arg1 ;
-(NSString *)URLString;
-(void)setURLString:(NSString *)arg1 ;
-(id)printingFrame;
-(void)setContentFormatter:(UIPrintFormatter *)arg1 ;
-(id)printInfoWithPageTitle:(id)arg1 ;
-(void)associateWithPrintController:(id)arg1 ;
-(id)printControllerWithPageTitle:(id)arg1 ;
-(UIWebBrowserView *)browserView;
-(UIPrintFormatter *)contentFormatter;
-(char)printFooter;
-(void)setPrintFooter:(char)arg1 ;
-(void)setWebFrame:(WebFrame *)arg1 ;
@end

