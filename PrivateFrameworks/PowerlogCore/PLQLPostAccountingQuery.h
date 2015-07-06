/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PowerlogCore-Structs.h>
#import <PowerlogCore/PLQLAccountingQuery.h>

@class NSDictionary, NSString, NSArray, NSMutableArray;

@interface PLQLPostAccountingQuery : PLQLAccountingQuery {

	NSDictionary* _skipProcess;
	NSString* _daemonToBreak;
	NSString* _parentAccountingQueryToRunOn;
	NSArray* _additionalAccountingGroups;
	NSMutableArray* _postpostAccountingQueries;

}

@property (retain,readonly) NSDictionary * skipProcess;                           //@synthesize skipProcess=_skipProcess - In the implementation block
@property (retain,readonly) NSString * daemonToBreak;                             //@synthesize daemonToBreak=_daemonToBreak - In the implementation block
@property (retain,readonly) NSString * parentAccountingQueryToRunOn;              //@synthesize parentAccountingQueryToRunOn=_parentAccountingQueryToRunOn - In the implementation block
@property (retain,readonly) NSArray * additionalAccountingGroups;                 //@synthesize additionalAccountingGroups=_additionalAccountingGroups - In the implementation block
@property (retain) NSMutableArray * postpostAccountingQueries;                    //@synthesize postpostAccountingQueries=_postpostAccountingQueries - In the implementation block
-(id)getAllAccountingEventsInRange:(PLTimeIntervalRange)arg1 ;
-(id)filteredAccountingEvents:(id)arg1 ;
-(NSArray *)additionalAccountingGroups;
-(NSDictionary *)skipProcess;
-(void)addPostPostAccountingChildren:(id)arg1 ;
-(void)setPostpostAccountingQueries:(NSMutableArray *)arg1 ;
-(void)setPostAccountingQueryAttributes:(id)arg1 withSkipProcessList:(id)arg2 withParentQuery:(id)arg3 withAdditionalAGs:(id)arg4 ;
-(void)setPostAccountingQueryAttributes:(id)arg1 withSkipProcessList:(id)arg2 withParentQueryID:(id)arg3 withAdditionalAGs:(id)arg4 ;
-(NSString *)parentAccountingQueryToRunOn;
-(NSString *)daemonToBreak;
-(id)runQueryForTimeRange:(PLTimeIntervalRange)arg1 withEnergy:(double)arg2 ;
-(NSMutableArray *)postpostAccountingQueries;
@end

