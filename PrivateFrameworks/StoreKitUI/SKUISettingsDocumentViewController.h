/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <StoreKitUI/SKUISettingsDocumentViewDelegate.h>
#import <StoreKitUI/SKUISettingsEditTransactionDelegate.h>
#import <StoreKitUI/SKUISettingsGroupsDescriptionDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <StoreKitUI/SKUIDocumentViewController.h>

@class UIBarButtonItem, SKUISettingsEditTransaction, SKUIViewElementLayoutContext, SKUIResourceLoader, SKUISettingsContext, SKUISettingsGroupsDescription, UITableView, SKUISettingsTemplateViewElement, SKUIViewElementTextLayoutCache, NSString;

@interface SKUISettingsDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUISettingsDocumentViewDelegate, SKUISettingsEditTransactionDelegate, SKUISettingsGroupsDescriptionDelegate, UITableViewDataSource, UITableViewDelegate, SKUIDocumentViewController> {

	UIBarButtonItem* _barButtonItemCancel;
	UIBarButtonItem* _barButtonItemDone;
	UIBarButtonItem* _barButtonItemEdit;
	SKUISettingsEditTransaction* _editTransaction;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIResourceLoader* _resourceLoader;
	SKUISettingsContext* _settingsContext;
	SKUISettingsGroupsDescription* _settingsGroupsDescription;
	UITableView* _tableView;
	SKUISettingsTemplateViewElement* _templateElement;
	SKUIViewElementTextLayoutCache* _textLayoutCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_settingsGroupsFromTemplateElement:(id)arg1 withDelegate:(id)arg2 settingsContext:(id)arg3 ;
+(float)_heightThatFitsWidth:(float)arg1 withSettingsHeaderFooterDescription:(id)arg2 context:(id)arg3 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)_tableView;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)_invalidateLayout;
-(void)_reloadData;
-(id)_layoutContext;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)documentDidUpdate:(id)arg1 ;
-(id)_resourceLoader;
-(id)_textLayoutCache;
-(void)settingsDocumentViewDidChangeTintColor:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_deselectItemsAnimated:(char)arg1 ;
-(id)_viewForSettingsHeaderFooterDescription:(id)arg1 ;
-(void)_showEditBarButtonItemAnimated:(char)arg1 ;
-(id)_barButtonItemDone;
-(void)_showEditingBarButtonItemsEnabled:(char)arg1 animated:(char)arg2 ;
-(void)_editButtonAction:(id)arg1 ;
-(id)_barButtonItemEdit;
-(void)_showBarItemLeft:(id)arg1 right:(id)arg2 animated:(char)arg3 ;
-(id)_barButtonItemCancel;
-(id)_dequeueHeaderFooterViewWithReuseIdentifier:(id)arg1 ;
-(void)settingsEditTransactionDidCompleteTransaction:(id)arg1 ;
-(void)settingsEditTransactionDidFailTransaction:(id)arg1 ;
-(void)settingsEditTransactionWillBeginTransaction:(id)arg1 ;
-(void)settingsEditTransactionWillCommitTransaction:(id)arg1 ;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingAtIndexPath:(id)arg2 ;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingsGroupAtIndex:(unsigned)arg2 ;
-(void)settingsGroupsDescription:(id)arg1 didUpdateSettingsDescription:(id)arg2 ;
-(void)settingsGroupsDescription:(id)arg1 dismissViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)settingsGroupsDescription:(id)arg1 presentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)settingsGroupsDescription:(id)arg1 viewForSettingAtIndexPath:(id)arg2 ;
-(void)settingsGroupsDescriptionDidUpdateValidity:(id)arg1 ;
-(void)settingsEditTransaction:(id)arg1 isValid:(char)arg2 ;
@end

