/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UINibStringIDTable : NSObject {

	UIStringIDTableBucket* table;
	UIStringIDTableBucket* buckets;
	unsigned hashMask;
	unsigned count;

}
-(void)dealloc;
-(int)count;
-(char)lookupKey:(id)arg1 identifier:(int*)arg2 ;
-(id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned)arg2 ;
@end

