/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPredicate.h>

@class NSString, NSDate;

@interface EKReminderPredicate : EKPredicate {

	char _limitToCompletedOrIncomplete;
	char _completed;
	char _useCompletionDateAsAlternate;
	char _useDueDateAsCompletionDate;
	NSString* _title;
	NSString* _listTitle;
	NSDate* _dueAfter;
	NSDate* _dueBefore;
	NSString* _searchTerm;
	int _sortOrder;
	unsigned _maxResults;

}

@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * listTitle;                           //@synthesize listTitle=_listTitle - In the implementation block
@property (assign,nonatomic) char limitToCompletedOrIncomplete;              //@synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete - In the implementation block
@property (assign,nonatomic) char completed;                                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSDate * dueAfter;                              //@synthesize dueAfter=_dueAfter - In the implementation block
@property (nonatomic,retain) NSDate * dueBefore;                             //@synthesize dueBefore=_dueBefore - In the implementation block
@property (assign,nonatomic) char useCompletionDateAsAlternate;              //@synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate - In the implementation block
@property (assign,nonatomic) char useDueDateAsCompletionDate;                //@synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate - In the implementation block
@property (nonatomic,retain) NSString * searchTerm;                          //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) int sortOrder;                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) unsigned maxResults;                            //@synthesize maxResults=_maxResults - In the implementation block
+(id)predicateWithCalendars:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)completed;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)setUseDueDateAsCompletionDate:(char)arg1 ;
-(void)setLimitToCompletedOrIncomplete:(char)arg1 ;
-(void)setCompleted:(char)arg1 ;
-(void)setDueAfter:(NSDate *)arg1 ;
-(void)setDueBefore:(NSDate *)arg1 ;
-(void)setUseCompletionDateAsAlternate:(char)arg1 ;
-(void)setListTitle:(NSString *)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(NSString *)listTitle;
-(char)limitToCompletedOrIncomplete;
-(NSDate *)dueAfter;
-(NSDate *)dueBefore;
-(char)useCompletionDateAsAlternate;
-(char)useDueDateAsCompletionDate;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
@end

