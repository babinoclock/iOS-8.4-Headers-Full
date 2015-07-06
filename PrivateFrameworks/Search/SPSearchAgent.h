/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <Search/SPDaemonQueryDelegate.h>
#import <Search/MCProfileConnectionObserver.h>

@protocol SPSearchAgentDelegate;
@class SPDaemonQueryToken, NSString, NSMutableArray, NSArray, SPSearchResultSection, NSObject;

@interface SPSearchAgent : NSObject <SPDaemonQueryDelegate, MCProfileConnectionObserver> {

	SPDaemonQueryToken* _currentToken;
	NSString* _prefixWithNoResults;
	NSMutableArray* _sections;
	NSArray* _searchDomains;
	unsigned _resultCount;
	int _options;
	SPSearchResultSection* _topHitResultSection;
	SPSearchResultSection* _searchThroughSection;
	char _searchThroughAllowed;
	char _observersAdded;
	char _queryComplete;
	NSObject*<SPSearchAgentDelegate> _delegate;

}

@property (assign,nonatomic) int options;                                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned resultCount;                                 //@synthesize resultCount=_resultCount - In the implementation block
@property (nonatomic,readonly) char queryComplete;                                   //@synthesize queryComplete=_queryComplete - In the implementation block
@property (nonatomic,retain) NSArray * searchDomains;                                //@synthesize searchDomains=_searchDomains - In the implementation block
@property (assign,nonatomic) NSObject*<SPSearchAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)queryComplete;
-(unsigned)resultCount;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(NSArray *)searchDomains;
-(void)dealloc;
-(void)setDelegate:(NSObject*<SPSearchAgentDelegate>)arg1 ;
-(id)init;
-(NSObject*<SPSearchAgentDelegate>)delegate;
-(void)invalidate;
-(void)deactivate;
-(void)activate;
-(void)clear;
-(void)setOptions:(int)arg1 ;
-(int)options;
-(char)setQueryString:(id)arg1 ;
-(id)queryString;
-(void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2 ;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2 ;
-(void)searchDaemonQueryReset:(id)arg1 ;
-(void)searchDaemonQueryCompleted:(id)arg1 ;
-(id)sectionAtIndex:(unsigned)arg1 ;
-(unsigned)sectionCount;
-(void)addSections:(id)arg1 ;
-(char)hasResults;
-(id)initWithOptions:(int)arg1 ;
-(void)handleOptionsForNewSections:(id)arg1 ;
-(id)_indexesOfCompatibleSection:(id)arg1 ;
-(char)_shouldIgnoreQuery:(id)arg1 ;
-(void)updateSearchThroughWithString:(id)arg1 ;
-(char)cleanupObsoleteResults;
-(void)addDeserializer:(id)arg1 ;
-(void)addSearchThroughSectionWithQuery:(id)arg1 ;
-(void)stuffChanged;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(void)removeSectionAtIndex:(unsigned)arg1 ;
-(void)retrieveImageDataForResult:(id)arg1 inSection:(id)arg2 preferredSize:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)retrieveImageDataForIdentifier:(id)arg1 inSection:(id)arg2 preferredSize:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)internetDomainsChanged;
@end

