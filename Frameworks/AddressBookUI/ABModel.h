/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSMutableArray, NSRecursiveLock, NSArray, ABContactsFilter;

@interface ABModel : NSObject {

	void* _addressBook;
	SCD_Struct_AB8* _sectionLists;
	CFDictionaryRef _headerSortKeyToHeaderString;
	NSRange _displayedMemberPreparedRange;
	unsigned _numberOfDisplayedMembers;
	char _displayedMembersAreSearchResults;
	void* _selectedPerson;
	unsigned _displayOrdering;
	CFArrayRef _databaseChangeDelegates;
	void* _backgroundAddressBook;
	char _backgroundAddressBookInvalidated;
	NSMutableArray* _cachedModelRecords;
	NSRecursiveLock* _memberLock;
	char _loadingInBackground;
	NSRecursiveLock* _backgroundLoadingLock;
	char _backgroundInvalidated;
	id _delayedNotificationHandler;
	char _autoInvalidateOnDatabaseChange;
	NSArray* _lastSeenSources;
	NSArray* _lastSeenGroups;
	int _meID;
	ABContactsFilter* _displayedContactsFilter;
	ABContactsFilter* _selectedContactsFilter;
	ABContactsFilter* _lastSelectedContactsFilter;

}

@property (nonatomic,retain) ABContactsFilter * displayedContactsFilter;                   //@synthesize displayedContactsFilter=_displayedContactsFilter - In the implementation block
@property (nonatomic,readonly) ABContactsFilter * selectedContactsFilter;                  //@synthesize selectedContactsFilter=_selectedContactsFilter - In the implementation block
@property (nonatomic,readonly) ABContactsFilter * lastSelectedContactsFilter;              //@synthesize lastSelectedContactsFilter=_lastSelectedContactsFilter - In the implementation block
@property (nonatomic,readonly) void* sourceForNewRecords; 
@property (nonatomic,readonly) void* groupForNewRecords; 
@property (assign,nonatomic) void* addressBook; 
+(unsigned)sortOrdering;
+(void)initialize;
-(void)removeDatabaseChangeDelegate:(id)arg1 ;
-(ABContactsFilter *)selectedContactsFilter;
-(void)addDatabaseChangeDelegate:(id)arg1 ;
-(void)setSelectedContactsFilter:(ABContactsFilter *)arg1 ;
-(void*)groupForNewRecords;
-(void*)sourceForNewRecords;
-(ABContactsFilter *)displayedContactsFilter;
-(void*)selectedPerson;
-(unsigned)numberOfDisplayedMembers;
-(int)indexForDisplayedMember:(void*)arg1 ;
-(void)setDisplayNameOrdering:(unsigned)arg1 ;
-(id)allGroups;
-(SCD_Struct_AB8*)displayedMemberSectionLists;
-(unsigned)displayedMemberSectionListsCount;
-(void*)displayedMemberAtIndex:(int)arg1 ;
-(void)updateForMajorAddressBookChange;
-(void)setSelectedPerson:(void*)arg1 ;
-(void)invalidateDisplayedMembers;
-(ABContactsFilter *)lastSelectedContactsFilter;
-(void)resetSectionList;
-(void)_cacheMeID;
-(void)setAutoInvalidateOnDatabaseChange:(char)arg1 ;
-(void)prepareDisplayedMembersInRange:(NSRange)arg1 ;
-(void)_waitUntilBackgroundThreadFinished;
-(CFDictionaryRef)headerSortKeyToHeaderStringDictionary;
-(char)shouldUsePartialLoadingForContactsFilter:(id)arg1 ;
-(long)resetPartialSectionListWithMaximumCount:(int)arg1 headerSortKeyToHeaderString:(CFDictionaryRef)arg2 ;
-(long)resetFullSectionList:(CFDictionaryRef)arg1 maximumSectionCount:(int)arg2 ;
-(void)_cachePeople:(CFArrayRef)arg1 atEnd:(char)arg2 ;
-(id)displayedMembersInRange:(NSRange)arg1 ;
-(id)_newModelRecordFromRecord:(void*)arg1 ;
-(CFArrayRef)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(NSRange)arg1 inBackground:(char)arg2 ;
-(void)_loadMembersInBackground:(id)arg1 ;
-(void)_startBackgroundThreadIfNecessaryScanningForward:(char)arg1 ;
-(id)_partialDisplayedGroupMembersInRange:(NSRange)arg1 ;
-(id)_displayedGroupMembersInRange:(NSRange)arg1 ;
-(int)_indexOfMember:(void*)arg1 inDisplayedMembers:(id)arg2 ;
-(void)setLastSelectedContactsFilter:(ABContactsFilter *)arg1 ;
-(void)setDisplayedContactsFilter:(ABContactsFilter *)arg1 ;
-(void)_updateForMajorAddressBookChange:(char)arg1 ;
-(void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(char)arg1 deletedPerson:(char)arg2 ;
-(void)resetSortKeyToHeaderStringDictionary;
-(void)setFilteredDisplayedMembers:(CFArrayRef)arg1 ;
-(id)allCachedModelRecords;
-(void)copyDisplayedNamePieces:(id*)arg1 isGroup:(char*)arg2 highlightIndex:(int*)arg3 forMemberID:(int*)arg4 atindex:(int)arg5 ;
-(void)invalidateLastSelectedContactsFilter;
-(int)meID;
-(void)_modelDatabaseChangedLocally:(CFDictionaryRef)arg1 ;
-(void)_modelDatabaseChangedExternally:(CFDictionaryRef)arg1 ;
-(CFArrayRef)_databaseChangeDelegates;
-(void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 ;
-(void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(char)arg2 ;
-(void)setSortOrdering:(unsigned)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(id)allSources;
-(void*)addressBook;
-(id)initWithAddressBook:(void*)arg1 ;
@end

