/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIViewPrintFormatter.h>

@class _WKFrameHandle, WKWebView;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {

	double _totalScaleFactor;
	PrintInfo _printInfo;
	_WKFrameHandle* _frameToPrint;

}

@property (nonatomic,retain) _WKFrameHandle * frameToPrint;              //@synthesize frameToPrint=_frameToPrint - In the implementation block
@property (nonatomic,readonly) WKWebView * webView; 
-(void)dealloc;
-(WKWebView *)webView;
-(int)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(int)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(_WKFrameHandle *)frameToPrint;
-(void)setFrameToPrint:(_WKFrameHandle *)arg1 ;
@end

