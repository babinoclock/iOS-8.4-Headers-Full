/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ConstantClasses/ConstantClasses-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <ConstantClasses/NSFastEnumeration.h>

@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>
+(void)load;
+(id)alloc;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)retain;
-(id)allKeys;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS0*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(unsigned)retainCount;
-(id)objectEnumerator;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(oneway void)release;
-(unsigned)capacity;
@end
