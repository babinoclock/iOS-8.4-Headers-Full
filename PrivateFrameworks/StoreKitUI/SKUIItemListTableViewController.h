/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <StoreKitUI/SKUIItemCollectionDelegate.h>

@protocol SKUIItemListTableDelegate;
@class SKUIClientContext, NSMutableIndexSet, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIItemList, SSVLoadURLOperation, NSOperationQueue, SKUIUber, SKUIResourceLoader, SKUIStyledImageDataConsumer, NSString;

@interface SKUIItemListTableViewController : UITableViewController <SKUIItemCollectionDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIItemListTableDelegate> _delegate;
	char _delegateWantsCanRemove;
	char _delegateWantsDidRemove;
	char _delegateWantsWillDisplay;
	char _didLoadMore;
	NSMutableIndexSet* _hiddenIconIndexSet;
	CGSize _imageBoundingSize;
	SKUIItemArtworkContext* _artworkContext;
	SKUIItemCollectionController* _itemCollectionController;
	SKUIItemList* _itemList;
	SSVLoadURLOperation* _loadMoreOperation;
	char _loadsMoreItems;
	NSOperationQueue* _operationQueue;
	float _rowHeight;
	int _selectionStyle;
	int _separatorStyle;
	char _suspended;
	SKUIUber* _uber;
	char _requestedLoadMore;

}

@property (assign,nonatomic,__weak) id<SKUIItemListTableDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIItemArtworkContext * artworkContext;                     //@synthesize artworkContext=_artworkContext - In the implementation block
@property (nonatomic,retain) SKUIResourceLoader * artworkLoader; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIStyledImageDataConsumer * iconDataConsumer; 
@property (assign,nonatomic) CGSize imageBoundingSize;                                    //@synthesize imageBoundingSize=_imageBoundingSize - In the implementation block
@property (nonatomic,retain) SKUIItemList * itemList;                                     //@synthesize itemList=_itemList - In the implementation block
@property (assign,nonatomic) char loadsMoreItems;                                         //@synthesize loadsMoreItems=_loadsMoreItems - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) float rowHeight;                                             //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) int selectionStyle;                                          //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                          //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,getter=isSuspended,nonatomic) char suspended;                           //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,retain) SKUIUber * uber;                                             //@synthesize uber=_uber - In the implementation block
@property (nonatomic,readonly) NSString * visibleMetricsImpressions; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isSuspended;
-(void)dealloc;
-(void)setDelegate:(id<SKUIItemListTableDelegate>)arg1 ;
-(void)setRowHeight:(float)arg1 ;
-(float)rowHeight;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<SKUIItemListTableDelegate>)delegate;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setSelectionStyle:(int)arg1 ;
-(int)selectionStyle;
-(void)addItems:(id)arg1 ;
-(void)setSuspended:(char)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUIItemArtworkContext *)artworkContext;
-(void)setUber:(SKUIUber *)arg1 ;
-(SKUIUber *)uber;
-(SKUIResourceLoader *)artworkLoader;
-(void)setImageBoundingSize:(CGSize)arg1 ;
-(void)itemTableView:(id)arg1 didConfirmItemOfferForTableViewCell:(id)arg2 ;
-(CGSize)imageBoundingSize;
-(CGRect)frameForItemAtIndex:(int)arg1 ;
-(id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(SKUIStyledImageDataConsumer *)iconDataConsumer;
-(id)_itemCollectionController;
-(void)loadNextPageOfArtworkWithReason:(int)arg1 ;
-(void)setArtworkContext:(SKUIItemArtworkContext *)arg1 ;
-(void)setIconDataConsumer:(SKUIStyledImageDataConsumer *)arg1 ;
-(id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2 ;
-(NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(CGPoint)arg2 ;
-(NSRange)visibleItemRangeForItemCollectionController:(id)arg1 ;
-(char)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1 ;
-(id)popIconImageViewForItemAtIndex:(int)arg1 ;
-(void)setItemCellClass:(Class)arg1 ;
-(void)unhideIcons;
-(void)setArtworkLoader:(SKUIResourceLoader *)arg1 ;
-(void)_loadRemainingItemsWithPriority:(int)arg1 ;
-(id)_itemListCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)_finishLoadMoreOperationWithItems:(id)arg1 error:(id)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 ;
-(void)setItemArtworkContext:(id)arg1 ;
-(void)setItemList:(SKUIItemList *)arg1 ;
-(NSString *)visibleMetricsImpressions;
-(void)itemTableView:(id)arg1 didRemoveCell:(id)arg2 ;
-(SKUIItemList *)itemList;
-(char)loadsMoreItems;
-(void)setLoadsMoreItems:(char)arg1 ;
@end

