/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPContentIndexer.h>

@class SPMatcher, NSString, NSArray;

@interface SPTopHitIndexer : SPContentIndexer {

	SPMatcher* _matcher;
	NSString* _queryString;
	NSArray* _searchDomains;

}
+(void)preheat;
+(id)indexerForTopHits;
-(void)dealloc;
-(id)init;
-(char)nextSearchResults:(id*)arg1 ;
-(float)_calculateMovingAverageWithLastTime:(double)arg1 andLastAverage:(float)arg2 ;
-(id)_externalRecordForIdentifier:(id)arg1 domain:(unsigned)arg2 ;
-(id)_recordForExternalID:(id)arg1 displayIdentifier:(id)arg2 category:(id)arg3 ;
-(void)_setTopHitWithCurrentHit:(id)arg1 content:(id)arg2 stringIdentifier:(id)arg3 domain:(unsigned)arg4 query:(id)arg5 ;
-(id)_getDisplayIdentifierForDomain:(unsigned)arg1 ;
-(id)_fetchAndCleanQueryResults:(id)arg1 ;
-(void)setIdentifier:(id)arg1 forRecordDictionary:(id)arg2 ;
-(void)removeIdentifier:(id)arg1 ;
-(void)setTopHit:(id)arg1 domain:(unsigned)arg2 queryString:(id)arg3 ;
-(void)beginSearch:(id)arg1 domains:(id)arg2 ;
@end

