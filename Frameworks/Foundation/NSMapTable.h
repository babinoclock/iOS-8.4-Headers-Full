/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSCoding.h>
#import <Foundation/NSFastEnumeration.h>

@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>

@property (copy,readonly) NSPointerFunctions * keyPointerFunctions; 
@property (copy,readonly) NSPointerFunctions * valuePointerFunctions; 
@property (readonly) unsigned count; 
+(id)mapTableWithStrongToStrongObjects;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)mapTableWithKeyOptions:(unsigned)arg1 valueOptions:(unsigned)arg2 ;
+(id)mapTableWithWeakToWeakObjects;
+(id)strongToStrongObjectsMapTable;
+(id)mapTableWithWeakToStrongObjects;
+(id)mapTableWithStrongToWeakObjects;
+(id)weakToWeakObjectsMapTable;
+(id)weakToStrongObjectsMapTable;
+(id)strongToWeakObjectsMapTable;
+(id)alloc;
-(id)CKAllKeys;
-(id)CKAllValues;
-(id)bs_takeObjectForKey:(id)arg1 ;
-(id)enumerator;
-(NSPointerFunctions *)keyPointerFunctions;
-(NSPointerFunctions *)valuePointerFunctions;
-(void)setItem:(const void*)arg1 forKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2 ;
-(char)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(id)mutableDictionary;
-(void)removeAllItems;
-(id)allKeys;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(id)copy;
-(void)removeAllObjects;
-(id)description;
-(void)removeObjectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectEnumerator;
-(id)initWithKeyOptions:(unsigned)arg1 valueOptions:(unsigned)arg2 capacity:(unsigned)arg3 ;
-(id)allValues;
-(id)dictionaryRepresentation;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

