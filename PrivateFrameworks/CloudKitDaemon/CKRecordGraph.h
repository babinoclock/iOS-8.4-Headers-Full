/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSArray;

@interface CKRecordGraph : NSObject {

	NSMutableSet* _nodes;
	NSArray* _sortedRecords;

}

@property (nonatomic,copy) NSMutableSet * nodes;                   //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) NSArray * sortedRecords;              //@synthesize sortedRecords=_sortedRecords - In the implementation block
-(id)init;
-(id)description;
-(void)setSortedRecords:(NSArray *)arg1 ;
-(NSArray *)sortedRecords;
-(char)addRecords:(id)arg1 error:(id*)arg2 ;
-(id)recordsByTopologicalSortWithError:(id*)arg1 ;
-(void)setNodes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)nodes;
@end

