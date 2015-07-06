/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray, NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableArray : NSMutableArray {

	int _cd_rc;
	NSMutableArray* _realArray;
	NSManagedObject* _source;
	NSPropertyDescription* _relationship;
	struct {
		unsigned _isFault : 1;
		unsigned _reserved : 31;
	}  _flags;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) char fault; 
+(char)accessInstanceVariablesDirectly;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(char)arg3 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(void)willRead;
-(unsigned)indexOfObjectWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned)indexOfObjectAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(void)turnIntoFault;
-(NSPropertyDescription *)relationship;
-(id)retain;
-(id)valueForKey:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(unsigned)retainCount;
-(id)description;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeLastObject;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectEnumerator;
-(id)valueForKeyPath:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSManagedObject *)source;
-(id)indexesOfObjectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(char)isFault;
-(id)descriptionWithLocale:(id)arg1 ;
-(oneway void)release;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

