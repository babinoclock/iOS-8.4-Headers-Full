/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface __NSCFSet : NSMutableSet {

	unsigned char _cfinfo[4];
	unsigned _bits[4];
	void* _callbacks;
	id* _values;

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned)_trueCount;
-(id)retain;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS15*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)removeObject:(id)arg1 ;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(oneway void)release;
-(void)finalize;
@end

