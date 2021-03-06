/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class SUItem, NSMutableArray, SUClientInterface, SUStructuredPage;

@interface SUStructuredPageTableDataSource : SUTableDataSource {

	SUItem* _activeLoadMoreItem;
	NSMutableArray* _cachedHeaderViews;
	SUClientInterface* _clientInterface;
	float _offerButtonWidth;
	SUStructuredPage* _structuredPage;
	int _style;

}

@property (nonatomic,retain) SUItem * activeLoadMoreItem;                      //@synthesize activeLoadMoreItem=_activeLoadMoreItem - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (nonatomic,retain) SUStructuredPage * structuredPage;                //@synthesize structuredPage=_structuredPage - In the implementation block
@property (assign,nonatomic) int style;                                        //@synthesize style=_style - In the implementation block
-(void)dealloc;
-(void)reloadData;
-(int)numberOfRowsInSection:(int)arg1 ;
-(int)numberOfSections;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)headerViewForSection:(int)arg1 ;
-(int)tableViewStyle;
-(id)sectionIndexTitles;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(SUClientInterface *)clientInterface;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(char)deleteIndexPath:(id)arg1 ;
-(int)sectionIndexForIndexTitle:(id)arg1 atIndex:(int)arg2 ;
-(id)titleForHeaderInSection:(int)arg1 ;
-(char)canDeleteIndexPath:(id)arg1 ;
-(float)cellHeightForIndexPath:(id)arg1 ;
-(id)titleForDeleteConfirmationForIndexPath:(id)arg1 ;
-(char)canSelectIndexPath:(id)arg1 ;
-(void)reloadCellContexts;
-(SUStructuredPage *)structuredPage;
-(void)setStructuredPage:(SUStructuredPage *)arg1 ;
-(SUItem *)activeLoadMoreItem;
-(void)setActiveLoadMoreItem:(SUItem *)arg1 ;
-(Class)cellConfigurationClassForItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 reuseIdentifier:(id*)arg2 ;
-(char)_shouldShowItemOfferButtonForItem:(id)arg1 ;
-(id)_itemOfferButtonForCell:(id)arg1 item:(id)arg2 ;
-(id)cellConfigurationForIndex:(int)arg1 item:(id)arg2 ;
-(void)_configureLoadMoreCell:(id)arg1 forItem:(id)arg2 ;
-(id)newHeaderViewForSection:(int)arg1 ;
-(char)canShowItemOfferButtonForItem:(id)arg1 ;
@end

