/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3SpotlightNameCache, NSArray, NSString;

@interface ML3SpotlightMatchPredicate : ML3Predicate {

	ML3SpotlightNameCache* _names;
	NSArray* _searchProperties;
	NSString* _searchString;

}

@property (nonatomic,readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
+(id)predicateWithProperties:(id)arg1 searchString:(id)arg2 ;
-(void)dealloc;
-(NSString *)searchString;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)spotlightPredicate;
-(id)initWithSearchString:(id)arg1 matchingProperties:(id)arg2 ;
@end
