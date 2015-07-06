/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <DACalDAV/CalDAVCalendar.h>

@class NSString, NSURL, NSSet, NSTimeZone, NSDictionary, NSArray, MobileCalDAVPrincipal, NSMutableDictionary, CalDiagCalendarCollectionSync;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar> {

	MobileCalDAVPrincipal* _principal;
	void* _calCalendar;
	NSString* _calendarURLString;
	char _isScheduleOutbox;
	char _isEnabled;
	char _isAffectingAvailability;
	char _wasModifiedLocally;
	char _needsResync;
	char _didResync;
	char _isDirty;
	char _needsPublishUpdate;
	NSString* _guid;
	unsigned _numDownloadedElements;
	unsigned _numUploadedElements;
	int _mostRecentSequenceNumber;
	int _mostRecentShareeChangeIndex;
	int _mostRecentEventActionChangeIndex;
	NSMutableDictionary* _deletedCalendarItems;
	NSArray* _syncActions;
	NSArray* _shareeActions;
	NSDictionary* _hrefsToModDeleteActions;
	NSDictionary* _uuidsToAddActions;
	NSMutableDictionary* _uniqueIdentifierToRecordIDMap;
	NSMutableDictionary* _URLToRecordIDMap;
	NSMutableDictionary* _URLToEtagMap;
	CalDiagCalendarCollectionSync* _calendarCollectionSyncDiagnostics;

}

@property (assign,nonatomic,__weak) id<CalDAVPrincipal> principal; 
@property (nonatomic,retain) NSString * guid;                                                                //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSURL * calendarURL; 
@property (nonatomic,retain) NSString * calendarURLString;                                                   //@synthesize calendarURLString=_calendarURLString - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * notes; 
@property (nonatomic,retain) NSString * color; 
@property (nonatomic,retain) NSString * symbolicColorName; 
@property (nonatomic,retain) NSString * pushKey; 
@property (nonatomic,retain) NSURL * owner; 
@property (nonatomic,retain) NSString * ownerDisplayName; 
@property (nonatomic,readonly) NSString * ownerEmailAddress; 
@property (nonatomic,retain) NSSet * calendarUserAddresses; 
@property (nonatomic,retain) NSURL * publishURL; 
@property (nonatomic,retain) NSURL * prePublishURL; 
@property (assign,nonatomic) int order; 
@property (assign,nonatomic) int sharingStatus; 
@property (nonatomic,retain) NSSet * sharees; 
@property (assign,nonatomic) char isTaskContainer; 
@property (assign,nonatomic) char isEventContainer; 
@property (assign,nonatomic) char isSubscribed; 
@property (assign,nonatomic) char isManagedByServer; 
@property (assign,nonatomic) char isScheduleInbox; 
@property (assign,nonatomic) char isScheduleOutbox;                                                          //@synthesize isScheduleOutbox=_isScheduleOutbox - In the implementation block
@property (assign,nonatomic) char isNotification; 
@property (assign,nonatomic) char isEditable; 
@property (assign,nonatomic) char isRenameable; 
@property (assign,nonatomic) char isEnabled;                                                                 //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) char isAffectingAvailability;                                                   //@synthesize isAffectingAvailability=_isAffectingAvailability - In the implementation block
@property (assign,nonatomic) char canBePublished; 
@property (assign,nonatomic) char canBeShared; 
@property (assign,nonatomic) char isFamilyCalendar; 
@property (assign,nonatomic) char isMarkedUndeletable; 
@property (assign,nonatomic) char isMarkedImmutableSharees; 
@property (assign,nonatomic) char wasModifiedLocally;                                                        //@synthesize wasModifiedLocally=_wasModifiedLocally - In the implementation block
@property (nonatomic,retain) NSString * ctag; 
@property (nonatomic,retain) NSDictionary * bulkRequests; 
@property (nonatomic,retain) NSString * syncToken; 
@property (assign,nonatomic) char needsResync;                                                               //@synthesize needsResync=_needsResync - In the implementation block
@property (assign,nonatomic) char didResync;                                                                 //@synthesize didResync=_didResync - In the implementation block
@property (nonatomic,readonly) NSSet * allItemURLs; 
@property (assign,nonatomic) char isDirty;                                                                   //@synthesize isDirty=_isDirty - In the implementation block
@property (nonatomic,readonly) NSString * displayColor; 
@property (nonatomic,readonly) char isHidden; 
@property (nonatomic,readonly) NSString * accountID; 
@property (assign,nonatomic) char needsPublishUpdate;                                                        //@synthesize needsPublishUpdate=_needsPublishUpdate - In the implementation block
@property (assign,nonatomic) unsigned numDownloadedElements;                                                 //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
@property (assign,nonatomic) unsigned numUploadedElements;                                                   //@synthesize numUploadedElements=_numUploadedElements - In the implementation block
@property (nonatomic,readonly) void* calCalendar; 
@property (assign,nonatomic) int mostRecentSequenceNumber;                                                   //@synthesize mostRecentSequenceNumber=_mostRecentSequenceNumber - In the implementation block
@property (assign,nonatomic) int mostRecentShareeChangeIndex;                                                //@synthesize mostRecentShareeChangeIndex=_mostRecentShareeChangeIndex - In the implementation block
@property (assign,nonatomic) int mostRecentEventActionChangeIndex;                                           //@synthesize mostRecentEventActionChangeIndex=_mostRecentEventActionChangeIndex - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deletedCalendarItems;                                     //@synthesize deletedCalendarItems=_deletedCalendarItems - In the implementation block
@property (nonatomic,retain) NSArray * syncActions;                                                          //@synthesize syncActions=_syncActions - In the implementation block
@property (nonatomic,retain) NSArray * shareeActions;                                                        //@synthesize shareeActions=_shareeActions - In the implementation block
@property (nonatomic,retain) NSDictionary * hrefsToModDeleteActions;                                         //@synthesize hrefsToModDeleteActions=_hrefsToModDeleteActions - In the implementation block
@property (nonatomic,retain) NSDictionary * uuidsToAddActions;                                               //@synthesize uuidsToAddActions=_uuidsToAddActions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uniqueIdentifierToRecordIDMap;                            //@synthesize uniqueIdentifierToRecordIDMap=_uniqueIdentifierToRecordIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * URLToRecordIDMap;                                         //@synthesize URLToRecordIDMap=_URLToRecordIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * URLToEtagMap;                                             //@synthesize URLToEtagMap=_URLToEtagMap - In the implementation block
@property (nonatomic,readonly) MobileCalDAVPrincipal * daPrincipal; 
@property (nonatomic,retain) CalDiagCalendarCollectionSync * calendarCollectionSyncDiagnostics;              //@synthesize calendarCollectionSyncDiagnostics=_calendarCollectionSyncDiagnostics - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (assign,nonatomic) char isPoll; 
@property (assign,nonatomic) char isPublished; 
+(id)calendarWithCalCalendar:(void*)arg1 principal:(id)arg2 ;
+(int)addedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(int)modifiedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(int)deletedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(char)clearCalendarChangesToIndex:(int)arg1 inPrincipal:(id)arg2 forChangeTrackingClient:(id)arg3 ;
+(void)cacheCalendarUID:(int)arg1 forCalendarURLString:(id)arg2 ;
+(id)calURLToUIDCache;
+(void)removeUIDCacheEntryForCalendarURLString:(id)arg1 ;
+(int)cachedCalendarUIDForURLString:(id)arg1 ;
+(void)clearCalendarUIDCache;
-(char)isSubscribed;
-(int)sharingStatus;
-(NSSet *)sharees;
-(void)setCanBeShared:(char)arg1 ;
-(void)setCanBePublished:(char)arg1 ;
-(NSString *)symbolicColorName;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(void)setSharingStatus:(int)arg1 ;
-(void)setIsPublished:(char)arg1 ;
-(char)isPublished;
-(char)canBePublished;
-(char)canBeShared;
-(char)isFamilyCalendar;
-(char)isMarkedUndeletable;
-(char)isMarkedImmutableSharees;
-(char)hasEvents;
-(void)setSharees:(NSSet *)arg1 ;
-(NSDictionary *)bulkRequests;
-(void)setBulkRequests:(NSDictionary *)arg1 ;
-(NSString *)pushKey;
-(void)setPushKey:(NSString *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)setIsFamilyCalendar:(char)arg1 ;
-(void)setIsMarkedUndeletable:(char)arg1 ;
-(void)setIsMarkedImmutableSharees:(char)arg1 ;
-(void)dealloc;
-(char)isHidden;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(char)isEditable;
-(char)isEnabled;
-(void)setIsEnabled:(char)arg1 ;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(void)setIsEditable:(char)arg1 ;
-(NSString *)accountID;
-(NSURL *)owner;
-(unsigned)numDownloadedElements;
-(void)setNumDownloadedElements:(unsigned)arg1 ;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(NSDictionary *)uuidsToAddActions;
-(NSDictionary *)hrefsToModDeleteActions;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(NSSet *)calendarUserAddresses;
-(NSString *)calendarURLString;
-(void)deleteCalendar;
-(NSURL *)calendarURL;
-(void)flushCaches;
-(void)setIsDirty:(char)arg1 ;
-(void)setWasModifiedLocally:(char)arg1 ;
-(char)needsPublishUpdate;
-(void)setNeedsPublishUpdate:(char)arg1 ;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 ;
-(void)setCalendarUserAddresses:(NSSet *)arg1 ;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(void)_dropCalStoreContext;
-(void*)getCalCalendar;
-(void*)initCalCalendarWithTitle:(id)arg1 ;
-(void*)calCalendar;
-(char)_updateCalendarOwnerInfo;
-(void)setUniqueIdentifierToRecordIDMap:(NSMutableDictionary *)arg1 ;
-(void)setURLToRecordIDMap:(NSMutableDictionary *)arg1 ;
-(void)setURLToEtagMap:(NSMutableDictionary *)arg1 ;
-(void)setCalendarURLString:(NSString *)arg1 ;
-(char)isEventContainer;
-(void)_setSupportsEvents:(char)arg1 supportsTodos:(char)arg2 ;
-(char)isTaskContainer;
-(NSURL *)publishURL;
-(NSString *)ownerDisplayName;
-(MobileCalDAVPrincipal *)daPrincipal;
-(char)isRenameable;
-(CalRecordIDRef)recordIDForUniqueIdentifier:(id)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 forRecordID:(CalRecordIDRef)arg2 ;
-(NSMutableDictionary *)uniqueIdentifierToRecordIDMap;
-(void*)_copyCalItemWithUniqueIdentifier:(id)arg1 inCalendar:(void*)arg2 orStore:(void*)arg3 ;
-(void*)_copyCalItemWithExternalID:(id)arg1 ;
-(char)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(CalDiagCalendarCollectionSync *)calendarCollectionSyncDiagnostics;
-(NSMutableDictionary *)URLToRecordIDMap;
-(char)_removeCalendarItemWithURL:(id)arg1 ;
-(NSString *)ownerEmailAddress;
-(void)_addCalendarItemWithRowID:(int)arg1 toArrayIfNeeded:(id)arg2 withChangeRowid:(int)arg3 changeType:(id)arg4 ;
-(int)_addAddedItemsOfType:(int)arg1 toArray:(id)arg2 ;
-(int)mostRecentSequenceNumber;
-(void)setMostRecentSequenceNumber:(int)arg1 ;
-(int)_gatherModifiedItemsFromCalChangesCall:(/*function pointer*/void*)arg1 forType:(id)arg2 inArray:(id)arg3 ;
-(int)_gatherModifiedTasksInArray:(id)arg1 ;
-(int)_gatherModifiedEventsInArray:(id)arg1 ;
-(id)_itemPropertyDictForItemAtIndex:(long)arg1 withChangedIDs:(CFArrayRef)arg2 withChangedRowids:(CFArrayRef)arg3 withExternalIDs:(CFArrayRef)arg4 uniqueIdentifiers:(CFArrayRef)arg5 significantAttributeChanges:(CFArrayRef)arg6 oldCalendarIDs:(CFArrayRef)arg7 entityType:(int)arg8 ;
-(int)_gatherDeletedChanges:(/*function pointer*/void*)arg1 inDictionary:(id)arg2 ;
-(void)setMostRecentEventActionChangeIndex:(int)arg1 ;
-(int)mostRecentEventActionChangeIndex;
-(void)setDeletedCalendarItems:(NSMutableDictionary *)arg1 ;
-(void)_clearChangesAtIndices:(id)arg1 forType:(int)arg2 ;
-(void)_clearChangesFromItem:(id)arg1 ;
-(unsigned)numUploadedElements;
-(void)setNumUploadedElements:(unsigned)arg1 ;
-(void)_forceRefreshNextSync;
-(void)_collectShareeActions;
-(int)mostRecentShareeChangeIndex;
-(void)setMostRecentShareeChangeIndex:(int)arg1 ;
-(void)setShareeActions:(NSArray *)arg1 ;
-(void)_addShareeWithRowID:(id)arg1 toDictionaryIfNeeded:(id)arg2 ;
-(id)copyDeletedItems;
-(id)copyAddedItems;
-(id)_createActionsForItems:(id)arg1 withAction:(int)arg2 alreadySentItems:(id)arg3 createServerIDs:(char)arg4 shouldSave:(char*)arg5 ;
-(id)copyModifiedItems;
-(id)_copyDeletedEventActions;
-(id)removeInvitationsForItemWithUniqueIdentifier:(id)arg1 ;
-(id)copyAllItems;
-(void)setUuidsToAddActions:(NSDictionary *)arg1 ;
-(void)setHrefsToModDeleteActions:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)URLToEtagMap;
-(void)setSyncActions:(NSArray *)arg1 ;
-(id)etagsForItemURLs:(id)arg1 ;
-(char)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(char)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(char)updateResourcesFromServer:(id)arg1 ;
-(char)deleteResourcesAtURLs:(id)arg1 ;
-(char)hasCalendarUserAddressEquivalentToURL:(id)arg1 ;
-(Class)appSpecificCalendarItemClass;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)clearShareeActions;
-(void)syncDidFinishWithError:(id)arg1 ;
-(void)putAction:(id)arg1 completedWithError:(id)arg2 ;
-(void)deleteAction:(id)arg1 completedWithError:(id)arg2 ;
-(void)setCalendarURL:(NSURL *)arg1 ;
-(void)setOwnerDisplayName:(NSString *)arg1 ;
-(void)setPublishURL:(NSURL *)arg1 ;
-(NSURL *)prePublishURL;
-(void)setPrePublishURL:(NSURL *)arg1 ;
-(void)setIsTaskContainer:(char)arg1 ;
-(void)setIsEventContainer:(char)arg1 ;
-(void)setIsSubscribed:(char)arg1 ;
-(char)isManagedByServer;
-(void)setIsManagedByServer:(char)arg1 ;
-(char)isScheduleInbox;
-(void)setIsScheduleInbox:(char)arg1 ;
-(char)isScheduleOutbox;
-(void)setIsScheduleOutbox:(char)arg1 ;
-(char)isNotification;
-(void)setIsNotification:(char)arg1 ;
-(char)isPoll;
-(void)setIsPoll:(char)arg1 ;
-(void)setIsRenameable:(char)arg1 ;
-(char)isAffectingAvailability;
-(void)setIsAffectingAvailability:(char)arg1 ;
-(char)wasModifiedLocally;
-(char)needsResync;
-(void)setNeedsResync:(char)arg1 ;
-(NSArray *)syncActions;
-(NSArray *)shareeActions;
-(NSSet *)allItemURLs;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 title:(id)arg3 ;
-(NSString *)displayColor;
-(id)_calExternalRep;
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(char)didResync;
-(void)setDidResync:(char)arg1 ;
-(NSMutableDictionary *)deletedCalendarItems;
-(void)setCalendarCollectionSyncDiagnostics:(CalDiagCalendarCollectionSync *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(char)isDirty;
-(void)setOwner:(NSURL *)arg1 ;
@end

