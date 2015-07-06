/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonEAS/DADaemonEAS-Structs.h>
#import <DAEAS/ASAccount.h>
#import <DADaemonEAS/DADataclassLockWatcher.h>
#import <DADaemonEAS/PCConnectionManagerDelegate.h>

@class ASPingTask, NSMutableDictionary, NSMutableSet, NSCountedSet, ASFolderChangedHistory, PCConnectionManager, NSSet, NSTimer, MFAttachmentComposeManager, NSString;

@interface ASDaemonAccount : ASAccount <DADataclassLockWatcher, PCConnectionManagerDelegate> {

	ASPingTask* _pingTask;
	NSMutableDictionary* _foldersToMonitorById;
	NSMutableSet* _folderIdsWithUnacknowledgedPings;
	NSCountedSet* _busyFolderIds;
	NSMutableSet* _pingBlacklistFolderIds;
	NSMutableDictionary* _folderChangeHistory;
	NSMutableSet* _pingHistoryBlacklistFolderIds;
	ASFolderChangedHistory* _hierarchyChangeHistory;
	char _isHierarchyChangeBlackListed;
	char _safeToPing;
	char _hasScheduledWake;
	PCConnectionManager* _pcManager;
	int _lastPingHeartBeat;
	NSSet* _lastPingFolders;
	int _eventsNumberOfPastDaysToSync;
	NSTimer* _delayedPingTimer;
	NSMutableSet* _invitationActionsInFlight;
	int _curReplyMethod;
	id _noteObserver;
	char _isTearingDown;
	MFAttachmentComposeManager* _attachmentManager;
	NSString* _pingPowerAssertionUUID;

}

@property (nonatomic,retain) NSString * pingPowerAssertionUUID;              //@synthesize pingPowerAssertionUUID=_pingPowerAssertionUUID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_convertCalendarAvailabilityType:(char)arg1 ;
+(void)_setForce7BitForUnitTests:(char)arg1 ;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(void)dealloc;
-(void)tearDown;
-(id)waiterID;
-(char)monitorFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolderWithID:(id)arg1 ;
-(void)stopMonitoringFoldersWithIDs:(id)arg1 ;
-(void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(char)arg5 isResyncAfterConnectionFailed:(char)arg6 moreLocalChangesAvailable:(char)arg7 consumer:(id)arg8 ;
-(char)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2 ;
-(id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5 ;
-(void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(char)arg6 isResyncAfterConnectionFailed:(char)arg7 previousTagIsSuspect:(char)arg8 moreLocalChangesAvailable:(char)arg9 consumer:(id)arg10 ;
-(void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2 ;
-(void)retrieveOofSettingsForConsumer:(id)arg1 ;
-(void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(char)arg5 isResyncAfterConnectionFailed:(char)arg6 moreLocalChangesAvailable:(char)arg7 consumer:(id)arg8 ;
-(void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(char)arg7 isResyncAfterConnectionFailed:(char)arg8 moreLocalChangesAvailable:(char)arg9 consumer:(id)arg10 ;
-(void)setEventsNumberOfPastDaysToSync:(int)arg1 ;
-(void)syncFolderHierarchyWithConsumer:(id)arg1 requireChangedFolders:(char)arg2 context:(id)arg3 ;
-(void)setSafeToPing:(char)arg1 ;
-(void)syncLocallyChangedFolder:(id)arg1 consumer:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)attemptInvitationLinkageForMetaDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)consumerFinishedInvitationActionsForEventWithUID:(id)arg1 ;
-(void)_handlePolicyUpdate;
-(void)setPingPowerAssertionUUID:(NSString *)arg1 ;
-(void)_stopMonitoringFoldersWithIds:(id)arg1 ;
-(CFStringRef)_pingPowerAssertionIdentifier;
-(void)_cancelPingTask;
-(char)_handleSuccessfulFolderChangeForFolders:(id)arg1 previousSyncKey:(id)arg2 ;
-(void)_pruneFoldersToMonitorOfOrphanedFolders;
-(void)_reportFolderHierarchySyncSuccessWithCount:(unsigned)arg1 ;
-(void)_reallySyncFolderHierarchyWithConsumer:(id)arg1 requestDataclasses:(int)arg2 requireChangedFolders:(char)arg3 context:(id)arg4 ;
-(char)_setLocalDisplayName:(id)arg1 forFolder:(id)arg2 ;
-(void)_setFolderHierarchyNeedsUpdate:(char)arg1 ;
-(char)_handleNameCollisionOnAddedFolder:(id)arg1 consumer:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_reallySyncLocallyChangedFolder:(id)arg1 consumer:(id)arg2 dataclasses:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)reissuePingFromTimer:(id)arg1 ;
-(void)_refirePingAfterDelay:(float)arg1 withGrowthAction:(int)arg2 ;
-(void)removeFolderIDFromPingHistoryBlacklist:(id)arg1 ;
-(void)addFolderIDToPingHistoryBlacklist:(id)arg1 ;
-(id)_foldersToSyncGivenResults:(id)arg1 ;
-(void)_reissuePingTaskWithGrowthAction:(int)arg1 ;
-(void)_pollFolders;
-(void)_fixUpTimers;
-(void)monitorFolder:(id)arg1 ;
-(void)resumeMonitoringFolderID:(id)arg1 ;
-(id)_ASSyncTaskAndMeetingResponseCommandsFromDAEventActions:(id)arg1 meetingResponseActions:(id)arg2 emailEvents:(id)arg3 ;
-(void)_respondToMeetingsForActions:(id)arg1 inFolderWithId:(id)arg2 consumer:(id)arg3 ;
-(id)_copyICSDateFromDate:(id)arg1 timeZone:(id)arg2 ;
-(id)_localizedStringForResponse:(int)arg1 ;
-(id)copyMessageStringWithPlainTextString:(id)arg1 vCalMethod:(int)arg2 vCalAttachmentData:(id)arg3 fromAddress:(id)arg4 toAddresses:(id)arg5 date:(id)arg6 subject:(id)arg7 outMessageID:(id*)arg8 ;
-(id)_stringWithRFC822DataFromEvent:(ASEvent*)arg1 icsMethod:(int)arg2 recipients:(id)arg3 recipientBareEmails:(id)arg4 exceptionDate:(id)arg5 outMessageID:(id*)arg6 ;
-(void)addStringsToEmailForEventIOriginated:(id)arg1 deletedExceptionOccurrenceDate:(id)arg2 stringsToEmail:(id)arg3 eventUUIDsToEmail:(id)arg4 externalIDs:(id)arg5 messageIDsToEmail:(id)arg6 eventsDroppedDueToAge:(id)arg7 checkEventForNeedingInvite:(char)arg8 ;
-(char)addStringsToEmailForEventIAmAttending:(id)arg1 recipient:(id)arg2 stringsToEmail:(id)arg3 eventUUIDsToEmail:(id)arg4 externalIDs:(id)arg5 messageIDsToEmail:(id)arg6 eventsDroppedDueToAge:(id)arg7 checkEventForNeedingInvite:(char)arg8 ;
-(char)_clearOutInviteWithDeliveryFolderId:(id)arg1 deliveryServerId:(id)arg2 wasSoftDelete:(char)arg3 considerInvitedToInvitations:(char)arg4 ;
-(void)_reallyAttemptInvitationLinkageForMetaDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)removeFolderIDFromPingBlacklist:(id)arg1 ;
-(void)addFolderIDToPingBlacklist:(id)arg1 ;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(void)deviceWillSleep;
-(void)deviceDidWake;
-(void)_turnIntoGmailAccount;
-(NSString *)pingPowerAssertionUUID;
-(void)meetingResponseTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 ;
-(void)settingsTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 response:(id)arg4 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(id)_newPolicyManager;
-(id)stateString;
-(void)_reportFolderItemSyncSuccess:(char)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned)arg3 ;
-(void)suspendMonitoringFoldersWithIDs:(id)arg1 ;
-(void)resumeMonitoringFoldersWithIDs:(id)arg1 ;
-(char)shouldSavePropertiesForFolderPathsThatClientsCareAbout;
-(char)_shouldSaveLastKnownProtocolVersion;
-(void)accountDidUpdateProtocolVersion;
-(char)_shouldEditNotesSupportOnProtocolChange;
-(char)shouldFixOnDiskDeviceId;
-(void)sendMailTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 ;
-(void)resolveRecipientsTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 queriedEmailAddressToRecpient:(id)arg4 ;
-(void)folderLocalUpdateTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 updatedFolder:(id)arg4 newSyncKey:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)folderSyncTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 foldersChanged:(id)arg4 newSyncKey:(id)arg5 ;
-(void)pingTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 resultFolders:(id)arg4 resultMaxFolders:(int)arg5 resultHBInterval:(int)arg6 ;
-(void)messageWriter:(id)arg1 willGenerateHeadersForMimePart:(id)arg2 ;
-(void)messageWriter:(id)arg1 willEncodeHeaders:(id)arg2 forMimePart:(id)arg3 ;
-(int)performMoveRequests:(id)arg1 consumer:(id)arg2 ;
-(char)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 ;
@end

