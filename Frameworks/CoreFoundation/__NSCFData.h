/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface __NSCFData : NSMutableData {

	unsigned char _cfinfo[4];
	long _length;
	long _capacity;
	CFAllocatorRef _bytesDeallocator;
	char* _bytes;

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)retain;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(unsigned)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)setLength:(unsigned)arg1 ;
-(void*)mutableBytes;
-(oneway void)release;
-(void)finalize;
@end

