/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EDCollection.h>

@interface EDReferenceCollection : EDCollection {

	BOOL mCoalesce;

}
+(id)noCoalesceCollection;
+(id)coalesceCollection;
-(id)init;
-(unsigned)addObject:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)countOfCellsBeingReferenced;
-(id)reverseReferencesByRow:(BOOL)arg1 ;
-(id)referenceToCellWithIndex:(unsigned)arg1 byRow:(BOOL)arg2 ;
-(id)initWihNoCoalesce;
-(void)coalesce;
-(BOOL)coalesceReferenceAtIndex1:(unsigned)arg1 index2:(unsigned)arg2 ;
@end

