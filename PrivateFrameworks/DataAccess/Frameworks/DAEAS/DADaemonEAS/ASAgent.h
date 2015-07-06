/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonEAS/DADaemonEAS-Structs.h>
#import <DADaemonSupport/DAAgent.h>
#import <DADaemonEAS/DAContactsUpdateConsumer.h>
#import <DADaemonEAS/DAEventsUpdateConsumer.h>
#import <DADaemonEAS/DAToDosUpdateConsumer.h>
#import <DADaemonEAS/DANotesUpdateConsumer.h>
#import <DADaemonEAS/DAMessageSendConsumer.h>
#import <DADaemonEAS/DADataclassLockWatcher.h>
#import <DADaemonEAS/ABPredicateDelegate.h>
#import <DADaemonEAS/DAMessageMoveRequestConsumer.h>
#import <DADaemonEAS/ASFolderHierarchyUpdateConsumer.h>
#import <DADaemonEAS/ASFolderHierarchyLocalChangeConsumer.h>
#import <DADaemonEAS/DAPreferredDaysToSyncDidChangeObserver.h>

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSLock, NSString;

@interface ASAgent : DAAgent <DAContactsUpdateConsumer, DAEventsUpdateConsumer, DAToDosUpdateConsumer, DANotesUpdateConsumer, DAMessageSendConsumer, DADataclassLockWatcher, ABPredicateDelegate, DAMessageMoveRequestConsumer, ASFolderHierarchyUpdateConsumer, ASFolderHierarchyLocalChangeConsumer, DAPreferredDaysToSyncDidChangeObserver> {

	void* _matchedRecord;
	char _isShuttingDown;
	NSMutableDictionary* _eventCalendarsByFolderId;
	NSMutableDictionary* _toDoCalendarsByFolderId;
	NSMutableDictionary* _contactStoresByFolderId;
	NSMutableDictionary* _noteStoreObjectIdsByFolderId;
	NSMutableArray* _outstandingFolderRequests;
	NSMutableSet* _currentlySyncingFolderIds;
	NSLock* _folderItemSyncRequestLock;
	NSMutableDictionary* _folderIdToSequentialFailureCount;
	NSMutableDictionary* _folderIdToSequentialServerErrorCount;
	int _numLocalFolderUpdatesInFlight;
	/*^block*/id _calUnitTestMergedRequestsBlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * eventCalendarsByFolderId;                          //@synthesize eventCalendarsByFolderId=_eventCalendarsByFolderId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * toDoCalendarsByFolderId;                           //@synthesize toDoCalendarsByFolderId=_toDoCalendarsByFolderId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contactStoresByFolderId;                           //@synthesize contactStoresByFolderId=_contactStoresByFolderId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * noteStoreObjectIdsByFolderId;                      //@synthesize noteStoreObjectIdsByFolderId=_noteStoreObjectIdsByFolderId - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingFolderRequests;                              //@synthesize outstandingFolderRequests=_outstandingFolderRequests - In the implementation block
@property (nonatomic,retain) NSMutableSet * currentlySyncingFolderIds;                                //@synthesize currentlySyncingFolderIds=_currentlySyncingFolderIds - In the implementation block
@property (nonatomic,retain) NSLock * folderItemSyncRequestLock;                                      //@synthesize folderItemSyncRequestLock=_folderItemSyncRequestLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * folderIdToSequentialFailureCount;                  //@synthesize folderIdToSequentialFailureCount=_folderIdToSequentialFailureCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * folderIdToSequentialServerErrorCount;              //@synthesize folderIdToSequentialServerErrorCount=_folderIdToSequentialServerErrorCount - In the implementation block
@property (assign,nonatomic) int numLocalFolderUpdatesInFlight;                                       //@synthesize numLocalFolderUpdatesInFlight=_numLocalFolderUpdatesInFlight - In the implementation block
@property (assign,nonatomic) void* matchedRecord;                                                     //@synthesize matchedRecord=_matchedRecord - In the implementation block
@property (assign,nonatomic) char isShuttingDown;                                                     //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,copy) id calUnitTestMergedRequestsBlock;                                         //@synthesize calUnitTestMergedRequestsBlock=_calUnitTestMergedRequestsBlock - In the implementation block
+(void)cleanUpFilesForAccountWithId:(id)arg1 ;
-(char)predicateShouldContinue:(id)arg1 ;
-(char)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(void)startMonitoring;
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
-(void)setIsShuttingDown:(char)arg1 ;
-(char)isShuttingDown;
-(id)waiterID;
-(id)_powerLogInfoDictionary;
-(void)_tearDownABNotifications;
-(void)_tearDownCalNotifications;
-(void)_tearDownNotesNotifications;
-(NSMutableDictionary *)eventCalendarsByFolderId;
-(NSMutableDictionary *)contactStoresByFolderId;
-(NSMutableDictionary *)toDoCalendarsByFolderId;
-(id)_noteAccountObject:(char)arg1 ;
-(void)setContactStoresByFolderId:(NSMutableDictionary *)arg1 ;
-(void*)_newABSourceForDAFolder:(id)arg1 ;
-(void*)_containerForFolderWithId:(id)arg1 dataclass:(int)arg2 ;
-(void)setEventCalendarsByFolderId:(NSMutableDictionary *)arg1 ;
-(void*)_newCalCalendarForDAFolder:(id)arg1 ;
-(void)setToDoCalendarsByFolderId:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)noteStoreObjectIdsByFolderId;
-(void)setNoteStoreObjectIdsByFolderId:(NSMutableDictionary *)arg1 ;
-(id)_newNoteSourceForDAFolder:(id)arg1 ;
-(void)_appendSyncRequestForFoldersOfDataclasses:(int)arg1 remoteChanges:(char)arg2 ;
-(void)_syncAllContactFoldersWithRemoteChanges:(char)arg1 ;
-(void)_syncAllEventsFoldersWithRemoteChanges:(char)arg1 ;
-(void)_syncAllToDosFoldersWithRemoteChanges:(char)arg1 ;
-(void)_syncAllNotesFoldersWithRemoteChanges:(char)arg1 ;
-(void)_refirePendingCalendarInvitations;
-(id)foldersForFolderIDs:(id)arg1 andDataclasses:(int)arg2 ;
-(void)_appendSyncRequestForFolders:(id)arg1 remoteChanges:(char)arg2 ;
-(void)_syncAllContactsEventsToDosAndNotesFolders;
-(void)_openLocalDBConnections;
-(char)_abBestEffortApplyNewFolders:(id)arg1 oldFolders:(id)arg2 shouldCreateFoldersMissingInDB:(char)arg3 ;
-(char)_calBestEffortApplyNewFolders:(id)arg1 oldFolders:(id)arg2 shouldCreateFoldersMissingInDB:(char)arg3 ;
-(char)_notesBestEffortApplyNewFolders:(id)arg1 oldFolders:(id)arg2 shouldCreateFoldersMissingInDB:(char)arg3 ;
-(void)_cacheFoldersForDataclasses:(int)arg1 ;
-(void)_removeABSourceForDAFolder:(id)arg1 ;
-(void)_removeCalCalendarForDAFolder:(id)arg1 ;
-(void)_removeNoteSourceForDAFolder:(id)arg1 ;
-(void)_updateFolderHierarchyRequireChangedFolders:(char)arg1 ;
-(void)_nilOutContainersForDataclasses:(int)arg1 ;
-(char)_closeLocalDBConnectionsWithoutSaving;
-(void)_appendFolderHierarchyChangesForFoldersOfDataclasses:(int)arg1 ;
-(void)_appendSyncRequestForFoldersOfDataclasses:(int)arg1 ;
-(void)_verifySearchStore;
-(void)refreshFolderListRequireChangedFolders:(char)arg1 isUserRequested:(char)arg2 ;
-(void)folderHierarchyUpdateNotification:(id)arg1 ;
-(void)folderHierarchyUpdateRequireChangedFoldersNotification:(id)arg1 ;
-(void)folderContentsUpdate:(id)arg1 ;
-(void)_setUpABNotifications;
-(void)_setUpCalNotifications;
-(void)_setUpNotesNotifications;
-(id)_parentIdFromEventId:(id)arg1 ;
-(void)folderHierarchySuccessfullyUpdated:(id)arg1 withNumChangedFolders:(unsigned)arg2 ;
-(void)folderHierarchyFailedToUpdate:(id)arg1 withStatus:(int)arg2 andError:(id)arg3 ;
-(void)localChangeForFolder:(id)arg1 finishedWithStatus:(int)arg2 andError:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)preferredDaysToSyncDidChange;
-(void*)matchedRecord;
-(void)setMatchedRecord:(void*)arg1 ;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(char)arg3 ;
-(void)_handleDaemonBackedLocalFolderChangeWithDBChangeIndices:(CFArrayRef)arg1 oldFolders:(id)arg2 status:(int)arg3 error:(id)arg4 ;
-(void)processDAFolderChange:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_exchangeIdForLocalId:(id)arg1 inContainer:(void*)arg2 dataclass:(int)arg3 redirectToParent:(char)arg4 ;
-(id)_localIdForExchangeId:(id)arg1 inContainer:(void*)arg2 dataclass:(int)arg3 ;
-(id)_syncKeyForFolderWithId:(id)arg1 ;
-(void)_setSyncKey:(id)arg1 forFolderWithId:(id)arg2 ;
-(NSMutableArray *)outstandingFolderRequests;
-(void)setOutstandingFolderRequests:(NSMutableArray *)arg1 ;
-(NSMutableSet *)currentlySyncingFolderIds;
-(void)setCurrentlySyncingFolderIds:(NSMutableSet *)arg1 ;
-(NSLock *)folderItemSyncRequestLock;
-(void)setFolderItemSyncRequestLock:(NSLock *)arg1 ;
-(NSMutableDictionary *)folderIdToSequentialFailureCount;
-(void)setFolderIdToSequentialFailureCount:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)folderIdToSequentialServerErrorCount;
-(void)setFolderIdToSequentialServerErrorCount:(NSMutableDictionary *)arg1 ;
-(int)numLocalFolderUpdatesInFlight;
-(void)setNumLocalFolderUpdatesInFlight:(int)arg1 ;
-(id)calUnitTestMergedRequestsBlock;
-(void)setCalUnitTestMergedRequestsBlock:(id)arg1 ;
-(void*)_copyExistingABRecordForContact:(ASContact*)arg1 matchOnAttributes:(char)arg2 inStore:(void*)arg3 ;
-(void*)_copyExistingCalRecordForEvent:(ASEvent*)arg1 matchOnAttributes:(char)arg2 inCalendar:(void*)arg3 ;
-(void*)_copyExistingCalRecordForToDo:(ASToDo*)arg1 matchOnAttributes:(char)arg2 inCalendar:(void*)arg3 ;
-(id)_copyExistingNoteRecordForNote:(ASNote*)arg1 matchOnAttributes:(char)arg2 inNoteStore:(id)arg3 ;
-(void)_appendSyncRequest:(id)arg1 ;
-(void)_noteSyncForFolderWithId:(id)arg1 andTitle:(id)arg2 finishedWithSuccess:(char)arg3 ;
-(void)_queueServerFailureResyncForFolderWithId:(id)arg1 isInitialSync:(char)arg2 ;
-(void)_fireWaitingFolderItemSyncRequests;
-(void)_folderItemsSyncTask:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void)_moveItemsTask:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void*)_copyExistingLocalItemForExchangeItem:(id)arg1 matchOnAttributes:(char)arg2 inContainer:(void*)arg3 ;
-(char)_handleAction:(id)arg1 inFolderWithId:(id)arg2 dataclass:(int)arg3 isInitialSync:(char)arg4 resultingChangeActionsForServer:(id)arg5 eventServerIDsToDrop:(id)arg6 eventServerIDSWithDroppedDeletes:(id)arg7 ;
-(char)_detectDuplicatedEventFromExchangeEvent:(id)arg1 inFolderWithId:(id)arg2 isInitialSync:(char)arg3 eventServerIDsToDrop:(id)arg4 eventServerIDSWithDroppedDeletes:(id)arg5 resultingChangeActionsForServer:(id)arg6 outEvent:(id*)arg7 outLocalItem:(const void*)arg8 outDidTouchDB:(char*)arg9 ;
-(char)_clearChangeHistoriesWithChangeIdContext:(id)arg1 dataclass:(int)arg2 inFolderWithId:(id)arg3 pushedActions:(id)arg4 ;
-(void)_syncResultForFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(char)arg7 moreAvailable:(char)arg8 dataclass:(int)arg9 resultingChangeActionsForServer:(id)arg10 pushedActions:(id)arg11 rejectedServerIds:(id)arg12 eventsWithPendingInvitationEmails:(id)arg13 ;
-(void)_finishInitialSyncForFolder:(id)arg1 dataclass:(int)arg2 ;
-(void)_wrapperSyncResultForFolder:(id)arg1 dataclass:(int)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(id)arg7 isInitialSync:(char)arg8 moreAvailable:(char)arg9 moreLocalChangesAvailable:(char)arg10 pushedActions:(id)arg11 rejectedServerIds:(id)arg12 ;
-(char)_finishWithInvitationEvent:(void*)arg1 eventUID:(id)arg2 expectedResponse:(int)arg3 wasMyInvite:(char)arg4 isStillInvite:(char)arg5 ;
-(void)_reallyApplyMessageDidSendWithContext:(id)arg1 ;
-(void)_reallyFinishInvitationBatch:(id)arg1 ;
-(id)_copyCalendarItemMoveActionsInCalendar:(void*)arg1 dataHandler:(id)arg2 deleteActionsByFolderId:(id)arg3 ;
-(void)_appendSyncRequest:(id)arg1 atBeginning:(char)arg2 ;
-(void)_reallySendMoves:(id)arg1 ;
-(id)_copyABActionsInContainer:(void*)arg1 existingActions:(id)arg2 dataHandler:(id)arg3 wantPreserveActions:(char)arg4 changeContext:(id)arg5 ;
-(id)_copyCalendarItemActionsInContainer:(void*)arg1 existingActions:(id)arg2 dataHandler:(id)arg3 wantPreserveActions:(char)arg4 changeContext:(id)arg5 ;
-(id)_copyNotesActionsInNoteStore:(id)arg1 existingActions:(id)arg2 dataHandler:(id)arg3 wantPreserveActions:(char)arg4 changeSet:(id)arg5 ;
-(void)_reallySyncRequest:(id)arg1 ;
-(void)_syncRequest:(id)arg1 ;
-(void)_addSimpleChangeForType:(int)arg1 changedItemId:(id)arg2 addedIds:(id)arg3 modifiedIds:(id)arg4 deletedIds:(id)arg5 collapsedIds:(id)arg6 ;
-(char)_getHierarchyChangeForDataclass:(int)arg1 changedItemId:(int*)arg2 changeType:(int*)arg3 externalId:(id*)arg4 changeTableIndices:(CFArrayRef)arg5 ;
-(char)_handleLocallyChangedFolderWithChangedItemId:(int)arg1 changeType:(int)arg2 externalId:(id)arg3 changeTableIndices:(CFArrayRef)arg4 dataclass:(int)arg5 ;
-(void)notesFolderWithId:(id)arg1 failedToSyncWithStatus:(int)arg2 error:(id)arg3 ;
-(void)finishWithInvitationBatch:(id)arg1 ;
-(void)meetingResponseFinishedWithStatus:(int)arg1 error:(id)arg2 successfulResponses:(id)arg3 failedResponses:(id)arg4 ;
-(char)_markEventWithLocalIDAsNeedingInvitationEmail:(int)arg1 parentId:(int)arg2 ;
-(void)_appendSyncRequestForFolders:(id)arg1 ;
-(void)_addChangeForType:(int)arg1 changedItemId:(id)arg2 changeId:(id)arg3 addedIdsToChangeId:(id)arg4 modifiedIdsToChangeId:(id)arg5 deletedIdsToChangeId:(id)arg6 pseudoDeletedIdsToChangeId:(id)arg7 changeIdsToClear:(id)arg8 ;
-(id)_dbExternalIdForLocalId:(int)arg1 dataclass:(int)arg2 ;
-(void)_handleChangeOnEventWithExchangeId:(id)arg1 localId:(int)arg2 changeType:(int)arg3 eventChangeId:(id)arg4 hasSignificantAttributeChanges:(char)arg5 container:(void*)arg6 dataHandler:(id)arg7 addedIdsToEventChangeId:(id)arg8 modifiedIdsToEventChangeId:(id)arg9 deletedIdsToEventChangeId:(id)arg10 pseudoDeletedIdsToEventChangeId:(id)arg11 eventChangeIdsToClear:(id)arg12 localToExchangeIdMap:(id)arg13 outShouldSaveDB:(char*)arg14 ;
-(void)_faultInCalendarSubentitiesInCalendar:(void*)arg1 addedIdsToEventChangeId:(id)arg2 modifiedIdsToEventChangeId:(id)arg3 deletedIdsToEventChangeId:(id)arg4 pseudoDeletedIdsToEventChangeId:(id)arg5 localToExchangeIdMap:(id)arg6 eventChangeIdsToClear:(id)arg7 outRecurrenceId:(int*)arg8 outAlarmId:(int*)arg9 outAttendeeId:(int*)arg10 outHighestSequenceNumber:(int*)arg11 dataHandler:(id)arg12 ;
-(void)syncResultForContactsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 newSyncToken:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(id)arg7 isInitialSync:(char)arg8 moreAvailable:(char)arg9 moreLocalChangesAvailable:(char)arg10 pushedActions:(id)arg11 ;
-(void)syncResultForEventsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(char)arg7 moreAvailable:(char)arg8 moreLocalChangesAvailable:(char)arg9 pushedActions:(id)arg10 rejectedServerIds:(id)arg11 ;
-(void)syncResultForToDosFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(char)arg7 moreAvailable:(char)arg8 moreLocalChangesAvailable:(char)arg9 pushedActions:(id)arg10 rejectedServerIds:(id)arg11 ;
-(void)syncResultForNotesFolder:(id)arg1 noteContext:(id)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeSet:(id)arg7 notesToDeleteAfterSync:(id)arg8 isInitialSync:(char)arg9 moreAvailable:(char)arg10 moreLocalChangesAvailable:(char)arg11 ;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)messageDidSendWithContext:(id)arg1 ;
-(void)resultsForMessageMove:(id)arg1 ;
@end

