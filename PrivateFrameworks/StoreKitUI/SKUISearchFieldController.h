/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <StoreKitUI/SKUITrendingSearchPageViewDelegate.h>

@protocol SKUISearchFieldDelegate;
@class NSString, SKUIClientContext, SKUICompletionList, SSVLoadURLOperation, NSOperationQueue, SKUISearchBar, SKUISearchDisplayController, UIViewController, UISearchBar;

@interface SKUISearchFieldController : NSObject <UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, SKUITrendingSearchPageViewDelegate> {

	NSString* _baseHintsURLString;
	SKUIClientContext* _clientContext;
	SKUICompletionList* _completionList;
	id<SKUISearchFieldDelegate> _delegate;
	SSVLoadURLOperation* _loadOperation;
	int _numberOfSearchResults;
	NSOperationQueue* _operationQueue;
	SKUISearchBar* _searchBar;
	NSString* _searchBarAccessoryText;
	SKUISearchDisplayController* _searchDisplayController;
	NSString* _trendingSearchURLString;

}

@property (nonatomic,readonly) UIViewController * contentsController; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISearchFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (nonatomic,copy) NSString * searchBarAccessoryText;                          //@synthesize searchBarAccessoryText=_searchBarAccessoryText - In the implementation block
@property (nonatomic,copy) NSString * searchHintsURLString;                            //@synthesize baseHintsURLString=_baseHintsURLString - In the implementation block
@property (assign,nonatomic) char displaysSearchBarInNavigationBar; 
@property (assign,nonatomic) char showsResultsForEmptyField; 
@property (nonatomic,copy) NSString * trendingSearchURLString;                         //@synthesize trendingSearchURLString=_trendingSearchURLString - In the implementation block
@property (assign,nonatomic) int numberOfSearchResults;                                //@synthesize numberOfSearchResults=_numberOfSearchResults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchTerm:(id)arg1 ;
-(int)numberOfSearchResults;
-(void)dealloc;
-(void)setDelegate:(id<SKUISearchFieldDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SKUISearchFieldDelegate>)delegate;
-(char)displaysSearchBarInNavigationBar;
-(UISearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(char)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(Class)_resultsTableViewClass;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)setDisplaysSearchBarInNavigationBar:(char)arg1 ;
-(void)_reloadData;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(NSString *)searchHintsURLString;
-(NSString *)trendingSearchURLString;
-(void)trendingSearchPageView:(id)arg1 didSelectSearch:(id)arg2 ;
-(void)resignActive:(char)arg1 ;
-(void)setShowsResultsForEmptyField:(char)arg1 ;
-(id)URLForTrendingSearchPageView:(id)arg1 ;
-(void)setNumberOfSearchResults:(int)arg1 ;
-(id)initWithContentsController:(id)arg1 ;
-(void)_reloadTrendingVisibility;
-(void)_loadResultsForSearchRequest:(id)arg1 ;
-(void)_adjustInsetsForResultsTableView:(id)arg1 ;
-(UIViewController *)contentsController;
-(void)_setResponse:(id)arg1 error:(id)arg2 ;
-(void)setSearchBarAccessoryText:(NSString *)arg1 ;
-(char)showsResultsForEmptyField;
-(char)searchBarShouldBeginTouches:(id)arg1 ;
-(NSString *)searchBarAccessoryText;
-(void)setSearchHintsURLString:(NSString *)arg1 ;
-(void)setTrendingSearchURLString:(NSString *)arg1 ;
@end

