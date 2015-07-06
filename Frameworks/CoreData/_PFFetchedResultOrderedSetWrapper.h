/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>

@class NSArray, _PFWeakReference;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {

	int _cd_rc;
	NSArray* _underlyingArray;
	_PFWeakReference* _weakmoc;

}
+(char)accessInstanceVariablesDirectly;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(void)willRead;
-(unsigned)indexOfObjectWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned)indexOfObjectAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(Class)classForArchiver;
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)initWithArray:(id)arg1 andContext:(id)arg2 ;
-(id)retain;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(id)description;
-(id)array;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)containsObject:(id)arg1 ;
-(id)allObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(char)isEqualToOrderedSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)managedObjectIDAtIndex:(unsigned)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(oneway void)release;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

