/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {

	SCD_Struct_NS66 _details;
	NSObject* _originalObservable;
	char _isPriorNotification;
	char _isRetainingObjects;

}
-(void)setOriginalObservable:(id)arg1 ;
-(void)setDetailsNoCopy:(SCD_Struct_NS67)arg1 originalObservable:(id)arg2 ;
-(id)initWithDetailsNoCopy:(SCD_Struct_NS67)arg1 originalObservable:(id)arg2 isPriorNotification:(char)arg3 ;
-(void)retainObjects;
-(void)dealloc;
-(unsigned)count;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
@end

