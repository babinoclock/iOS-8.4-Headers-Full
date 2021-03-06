/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MPMediaQuery, MPUSearchDataSource, NSString;

@interface _MPUSearchOperation : NSOperation {

	int _entityType;
	MPMediaQuery* _query;
	MPUSearchDataSource* _dataSource;
	NSString* _searchString;

}

@property (nonatomic,__weak,readonly) MPUSearchDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
-(id)description;
-(MPUSearchDataSource *)dataSource;
-(NSString *)searchString;
-(void)main;
-(id)initWithSearchDataSource:(id)arg1 searchString:(id)arg2 ;
-(void)executeSearch;
@end

