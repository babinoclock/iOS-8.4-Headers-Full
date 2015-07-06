/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface NSAttributeDictionary : NSDictionary {

	unsigned numElements;
	NSAttributeDictionaryElement elements[1];

}
+(id)newWithDictionary:(id)arg1 ;
+(id)emptyAttributeDictionary;
+(void)initialize;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(id)newWithKey:(id)arg1 object:(id)arg2 ;
-(void)dealloc;
-(unsigned)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqualToDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
@end

