/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/OccurrenceCacheDataSourceProtocol.h>

@class EKEventStore, NSSet, NSArray, NSString;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol> {

	EKEventStore* _eventStore;
	NSSet* _calendars;
	NSArray* _cachedDays;
	int _cachedDaysSeed;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopSearching;
-(void)searchWithTerm:(id)arg1 ;
-(char)cachedOccurrencesAreBeingGenerated;
-(char)cachedOccurrencesAreLoaded;
-(int)cachedDayCount;
-(char)supportsFakeTodaySection;
-(int)sectionForCachedOccurrencesOnDate:(id)arg1 ;
-(int)countOfOccurrencesAtDayIndex:(int)arg1 ;
-(id)dateAtDayIndex:(int)arg1 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 ;
-(void)fetchDaysInBackgroundStartingFromSection:(int)arg1 ;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2 ;
-(void)invalidateCachedOccurrences;
-(id)_cachedDays;
-(char)supportsInvitations;
-(void)invalidate;
@end

