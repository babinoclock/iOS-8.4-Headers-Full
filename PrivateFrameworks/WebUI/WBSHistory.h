/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSHistoryStoreDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSCountedSet, WBSHistorySQLiteStore, NSString;

@interface WBSHistory : NSObject <WBSHistoryStoreDelegate> {

	NSObject*<OS_dispatch_queue> _entriesByURLStringAccessQueue;
	NSMutableDictionary* _entriesByURLString;
	NSCountedSet* _stringsForUserTypedDomainExpansion;
	unsigned _historyAgeLimitInDays;
	char _hasStartedLoadingHistory;
	NSObject*<OS_dispatch_queue> _waitUntilHistoryHasLoadedQueue;
	WBSHistorySQLiteStore* _historyStore;

}

@property (nonatomic,readonly) char hasAnyHistoryItems; 
@property (nonatomic,readonly) unsigned numberOfHistoryItems; 
@property (nonatomic,readonly) unsigned numberOfHistoryItemsOnHistoryQueue; 
@property (nonatomic,readonly) unsigned historyAgeLimitInDays;                           //@synthesize historyAgeLimitInDays=_historyAgeLimitInDays - In the implementation block
@property (assign,nonatomic) char pushNotificationsAreInitialized; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)historyDatabaseURL;
+(id)historyDatabaseWriteAheadLogURL;
+(id)existingSharedHistory;
+(id)historyPropertyListURL;
+(void)clearExistingSharedHistory;
-(void)dealloc;
-(id)init;
-(void)close;
-(void)clearHistory;
-(double)_ageLimitDay;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(void)_removeAllVisitedLinks;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(char)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
-(void)_getVisitsAndTombstonesNeedingSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)_getServerChangeTokenDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_setServerChangeTokenData:(id)arg1 ;
-(char)pushNotificationsAreInitialized;
-(void)setPushNotificationsAreInitialized:(char)arg1 ;
-(unsigned)_cachedNumberOfDevicesInSyncCircle;
-(void)performBlockAfterHistoryHasLoaded:(/*^block*/id)arg1 ;
-(id)_pushThrottlerData;
-(id)_fetchThrottlerData;
-(id)_syncCircleSizeRetrievalThrottlerData;
-(void)_setPushThrottlerData:(id)arg1 ;
-(void)_setFetchThrottlerData:(id)arg1 ;
-(void)_setSyncCircleSizeRetrievalThrottlerData:(id)arg1 ;
-(void)_setCachedNumberOfDevicesInSyncCircle:(unsigned)arg1 ;
-(void)resetCloudHistoryDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_replayAndAddTombstone:(id)arg1 ;
-(void)_getAllTombstonesWithCompletion:(/*^block*/id)arg1 ;
-(void)_visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)itemRedirectedFrom:(id)arg1 to:(id)arg2 origin:(int)arg3 date:(id)arg4 ;
-(void)updateTitle:(id)arg1 forVisit:(id)arg2 ;
-(id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(char)arg4 wasFailure:(char)arg5 increaseVisitCount:(char)arg6 origin:(int)arg7 ;
-(void)waitUntilHistoryHasLoaded;
-(void)_removeHistoryItemsInResponseToUserAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_waitUntilHistoryHasLoadedMainThread;
-(id)_removeItemForURLString:(id)arg1 ;
-(void)_dispatchHistoryItemsRemoved:(id)arg1 ;
-(id)itemForURLString:(id)arg1 ;
-(void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1 ;
-(void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1 ;
-(unsigned)numberOfHistoryItems;
-(unsigned)numberOfHistoryItemsOnHistoryQueue;
-(void)_loadHistoryAsynchronouslyIfNeeded;
-(void)_dispatchHistoryItemWillChange:(id)arg1 ;
-(void)_dispatchHistoryItemsAdded:(id)arg1 ;
-(void)_dispatchHistoryItemDidChange:(id)arg1 ;
-(char)canRecordRedirectFromVisit:(id)arg1 to:(id)arg2 ;
-(void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dispatchHistoryCleared:(id)arg1 ;
-(void)_loadHistory;
-(void)_addItem:(id)arg1 addToStringsForUserTypedDomainExpansions:(char)arg2 ;
-(void)_dispatchHistoryItemsLoaded:(id)arg1 ;
-(void)_dispatchHistoryItemsRemovedDuringLoading:(id)arg1 ;
-(void)_dispatchHistoryLoaded;
-(void)_sendNotification:(id)arg1 withItems:(id)arg2 ;
-(void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2 ;
-(void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4 ;
-(void)historyLoaderDidFinishLoading:(id)arg1 ;
-(void)_removeHistoryItemsInResponseToUserAction:(id)arg1 ;
-(id)itemForURL:(id)arg1 ;
-(void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2 ;
-(char)_isStringForUserTypedDomainExpansionInHistory:(id)arg1 ;
-(char)hasAnyHistoryItems;
-(id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 wasHTTPNonGet:(char)arg3 wasFailure:(char)arg4 increaseVisitCount:(char)arg5 ;
-(id)itemRedirectedFrom:(id)arg1 to:(id)arg2 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(void)savePendingChangesBeforeTerminationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)historyStore;
-(unsigned)historyAgeLimitInDays;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
@end

