/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIWebDocumentView.h>

@class NSString;

@interface SUWebDocumentView : UIWebDocumentView {

	id _loadDelegate;
	NSString* _stylesheet;
	unsigned _adjustHeightToFit : 1;

}

@property (assign,nonatomic) id loadDelegate;                    //@synthesize loadDelegate=_loadDelegate - In the implementation block
@property (nonatomic,retain) NSString * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(NSString *)stylesheet;
-(void)setStylesheet:(NSString *)arg1 ;
-(void)setPlaintextString:(id)arg1 ;
-(void)setHTMLFragment:(id)arg1 ;
-(id)loadDelegate;
-(void)setLoadDelegate:(id)arg1 ;
@end

