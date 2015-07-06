/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKUIInviteesViewConflictResolutionSection.h>

@class NSDate, NSArray, NSMutableSet, NSString, EKUIInviteeAlternativeTimeSearcher;

@interface EKUIInviteesViewOriginalConflictSection : NSObject <EKUIInviteesViewConflictResolutionSection> {

	char _checked;
	char _conflictFound;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _busyParticipants;
	NSMutableSet* _rowsShowingAllParticipants;
	NSString* _cachedCellReuseIdentifier;
	unsigned _reuseIdentifierVersion;
	/*^block*/id _tableViewCellHook;
	/*^block*/id _newTimeChosen;
	/*^block*/id _showPreviewOfEventAtTime;
	EKUIInviteeAlternativeTimeSearcher* _availabilitySearcher;

}

@property (nonatomic,retain) NSDate * startDate;                                                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                       //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * busyParticipants;                                             //@synthesize busyParticipants=_busyParticipants - In the implementation block
@property (nonatomic,retain) NSMutableSet * rowsShowingAllParticipants;                              //@synthesize rowsShowingAllParticipants=_rowsShowingAllParticipants - In the implementation block
@property (assign,nonatomic) char checked;                                                           //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) char conflictFound;                                                     //@synthesize conflictFound=_conflictFound - In the implementation block
@property (nonatomic,retain) NSString * cachedCellReuseIdentifier;                                   //@synthesize cachedCellReuseIdentifier=_cachedCellReuseIdentifier - In the implementation block
@property (assign,nonatomic) unsigned reuseIdentifierVersion;                                        //@synthesize reuseIdentifierVersion=_reuseIdentifierVersion - In the implementation block
@property (nonatomic,copy) id tableViewCellHook;                                                     //@synthesize tableViewCellHook=_tableViewCellHook - In the implementation block
@property (nonatomic,copy) id newTimeChosen;                                                         //@synthesize newTimeChosen=_newTimeChosen - In the implementation block
@property (nonatomic,copy) id showPreviewOfEventAtTime;                                              //@synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime - In the implementation block
@property (nonatomic,retain) EKUIInviteeAlternativeTimeSearcher * availabilitySearcher;              //@synthesize availabilitySearcher=_availabilitySearcher - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRowsShowingAllParticipants:(NSMutableSet *)arg1 ;
-(char)_isValidRow:(int)arg1 ;
-(id)showPreviewOfEventAtTime;
-(void)setShowPreviewOfEventAtTime:(id)arg1 ;
-(NSMutableSet *)rowsShowingAllParticipants;
-(unsigned)reuseIdentifierVersion;
-(void)setReuseIdentifierVersion:(unsigned)arg1 ;
-(id)tableViewCellHook;
-(id)newTimeChosen;
-(void)setNewTimeChosen:(id)arg1 ;
-(void)clearCheckmark;
-(void)refreshCellsAfterStateChange;
-(char)injectNewRowsBeforeLastExistingRow;
-(void)setAvailabilitySearcher:(EKUIInviteeAlternativeTimeSearcher *)arg1 ;
-(EKUIInviteeAlternativeTimeSearcher *)availabilitySearcher;
-(void)availabilitySearcherChangedState:(int)arg1 ;
-(id)debugTitle;
-(char)sectionShouldBeShown;
-(id)cellForIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg1 ;
-(char)canSelectRow:(id)arg1 ;
-(void)selectRow:(id)arg1 ;
-(float)estimatedHeightForRow:(id)arg1 ;
-(char)canEditRow:(id)arg1 ;
-(int)editingStyleForRow:(id)arg1 ;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg1 ;
-(void)commitEditingStyle:(int)arg1 forRow:(id)arg2 ;
-(void)setTableViewCellHook:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(char)conflictFound;
-(NSString *)cachedCellReuseIdentifier;
-(NSArray *)busyParticipants;
-(void)setCachedCellReuseIdentifier:(NSString *)arg1 ;
-(void)setBusyParticipants:(NSArray *)arg1 ;
-(void)setConflictFound:(char)arg1 ;
-(id)init;
-(void)setChecked:(char)arg1 ;
-(unsigned)numberOfRows;
-(id)headerTitle;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(char)checked;
@end

