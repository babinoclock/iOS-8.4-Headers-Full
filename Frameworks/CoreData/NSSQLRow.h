/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSExternalRefCountedData.h>

@class _CDSnapshot;

@interface NSSQLRow : NSExternalRefCountedData {

	_CDSnapshot* _snapshot;

}
+(id)allocForSQLEntity:(id)arg1 ;
+(unsigned)newBatchRowAllocation:(id*)arg1 count:(unsigned)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(NSScalarObjectID*)arg4 andTimestamp:(double)arg5 ;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)sqlEntity;
-(long long)pk64;
-(unsigned)sqlEntityID;
-(long long)optLock;
-(long long)foreignKeyForSlot:(unsigned)arg1 ;
-(unsigned)foreignEntityKeyForSlot:(unsigned)arg1 ;
-(unsigned)foreignOrderKeyForSlot:(unsigned)arg1 ;
-(id)attributeValueForSlot:(unsigned)arg1 ;
-(CFBitVectorRef)newCalculatedDeltaMaskFrom:(id)arg1 ;
-(void)setOptLock:(long long)arg1 ;
-(unsigned)_versionNumber;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(id)initWithSQLEntity:(id)arg1 objectID:(NSScalarObjectID*)arg2 ;
-(void)setForeignEntityKeySlot:(unsigned)arg1 entityKey:(unsigned)arg2 ;
-(void)setForeignKeySlot:(unsigned)arg1 int64:(long long)arg2 ;
-(void)setForeignOrderKeySlot:(unsigned)arg1 orderKey:(unsigned)arg2 ;
-(id)initWithSQLEntity:(id)arg1 ownedObjectID:(NSScalarObjectID*)arg2 andTimestamp:(double)arg3 ;
-(void)_validateToOnes;
-(NSScalarObjectID*)newObjectIDForToOne:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(id)copy;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(long long)version;
-(NSScalarObjectID*)objectID;
-(void)setObjectID:(NSScalarObjectID*)arg1 ;
@end

