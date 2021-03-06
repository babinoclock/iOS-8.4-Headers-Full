/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKUIInviteesViewSection.h>

@class NSMutableArray, EKEvent, NSString;

@interface EKUIInviteesViewRespondedInviteesSection : NSObject <EKUIInviteesViewSection> {

	char _editable;
	/*^block*/id _participantTapped;
	/*^block*/id _participantRemoved;
	NSMutableArray* _participants;
	EKEvent* _event;
	NSString* _cachedCellReuseIdentifier;
	unsigned _reuseIdentifierVersion;
	/*^block*/id _tableViewCellHook;

}

@property (nonatomic,copy) id participantTapped;                                //@synthesize participantTapped=_participantTapped - In the implementation block
@property (nonatomic,copy) id participantRemoved;                               //@synthesize participantRemoved=_participantRemoved - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;                     //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                   //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSString * cachedCellReuseIdentifier;              //@synthesize cachedCellReuseIdentifier=_cachedCellReuseIdentifier - In the implementation block
@property (assign,nonatomic) unsigned reuseIdentifierVersion;                   //@synthesize reuseIdentifierVersion=_reuseIdentifierVersion - In the implementation block
@property (nonatomic,copy) id tableViewCellHook;                                //@synthesize tableViewCellHook=_tableViewCellHook - In the implementation block
@property (assign,nonatomic) char editable;                                     //@synthesize editable=_editable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_isValidRow:(int)arg1 ;
-(unsigned)reuseIdentifierVersion;
-(void)setReuseIdentifierVersion:(unsigned)arg1 ;
-(id)tableViewCellHook;
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
-(NSString *)cachedCellReuseIdentifier;
-(void)setCachedCellReuseIdentifier:(NSString *)arg1 ;
-(id)participantTapped;
-(id)participantRemoved;
-(void)updateWithEvent:(id)arg1 editable:(char)arg2 ;
-(void)setParticipantTapped:(id)arg1 ;
-(void)setParticipantRemoved:(id)arg1 ;
-(unsigned)numberOfRows;
-(void)setEditable:(char)arg1 ;
-(char)editable;
-(void)setEvent:(EKEvent *)arg1 ;
-(EKEvent *)event;
-(id)headerTitle;
-(NSMutableArray *)participants;
-(void)setParticipants:(NSMutableArray *)arg1 ;
@end

