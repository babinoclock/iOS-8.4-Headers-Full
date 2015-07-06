/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUIReportAConcernTemplateViewDelegate.h>
#import <StoreKitUI/SKUIDocumentViewController.h>

@class NSArray, SKUIViewElementLayoutContext, SKUIReportAConcernTemplateView, SKUIReportAConcernTemplateViewElement, NSString;

@interface SKUIReportAConcernDocumentViewController : SKUIViewController <SKUIReportAConcernTemplateViewDelegate, SKUIDocumentViewController> {

	NSArray* _concernIdentifiers;
	NSArray* _concernStrings;
	char _didSelectConcern;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIReportAConcernTemplateView* _reportAConcernView;
	SKUIReportAConcernTemplateViewElement* _templateElement;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(id)_layoutContext;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_sendCancelEventAndDismiss;
-(void)_layoutNavigation;
-(void)_doneButtonAction;
-(void)_cancelButtonAction;
-(void)_loadConcernsForConcernType:(int)arg1 withReportAConcernBagDictionary:(id)arg2 ;
-(void)_loadViewWithConcernStrings;
-(void)_sendDoneEventAndDismissWithSelectedIndex:(int)arg1 ;
-(void)_layoutReportAConcernView;
-(void)didSelectConcernInReportAConcernTemplateView:(id)arg1 ;
@end

