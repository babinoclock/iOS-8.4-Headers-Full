/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DASearchQueryConsumer;
#import <DataAccessExpress/DataAccessExpress-Structs.h>
@class NSString;

@interface DASearchQuery : NSObject {

	NSString* _searchString;
	int _timeLimit;
	id<DASearchQueryConsumer> _consumer;
	NSString* _searchID;
	int _state;
	NSRange _range;

}

@property (nonatomic,copy) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned maxResults; 
@property (assign,nonatomic) int timeLimit;                                          //@synthesize timeLimit=_timeLimit - In the implementation block
@property (assign,nonatomic,__weak) id<DASearchQueryConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,copy) NSString * searchID;                                      //@synthesize searchID=_searchID - In the implementation block
@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
+(id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)searchString;
-(NSRange)range;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(void)sendFinishedToConsumerWithError:(id)arg1 ;
-(void)sendResultsToConsumer:(id)arg1 ;
-(void)setSearchID:(NSString *)arg1 ;
-(NSString *)searchID;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(void)setTimeLimit:(int)arg1 ;
-(int)timeLimit;
-(char)isQueryRunning;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(id<DASearchQueryConsumer>)consumer;
-(void)setConsumer:(id<DASearchQueryConsumer>)arg1 ;
@end

