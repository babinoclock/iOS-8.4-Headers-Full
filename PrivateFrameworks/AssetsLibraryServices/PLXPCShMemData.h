/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@interface PLXPCShMemData : NSData {

	void* _buffer;
	unsigned long _dataLength;
	unsigned long _bufferLength;

}
-(void)dealloc;
-(id)description;
-(unsigned)length;
-(const void*)bytes;
-(id)initWithXPCShmem:(id)arg1 ;
-(id)initWithXPCShmem:(id)arg1 length:(long long)arg2 ;
@end

