/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelResource.h>

@interface MTLIOAccelBuffer : MTLIOAccelResource {

	unsigned _length;
	void* _pointer;
	/*^block*/id _deallocator;
	MTLIOAccelBuffer* _masterBuffer;
	short _masterHeapIndex;
	short _masterBufferIndex;
	int _masterBufferOffset;

}

@property (readonly) unsigned length;                       //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) void* contents; 
-(CFArrayRef)copyAnnotations;
-(void)flushModifiedRange:(NSRange)arg1 ;
-(id)initWithDevice:(id)arg1 pointer:(void*)arg2 length:(unsigned)arg3 options:(unsigned)arg4 sysMemSize:(unsigned)arg5 vidMemSize:(unsigned)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 deallocator:(/*^block*/id)arg9 ;
-(id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(unsigned)arg5 ;
-(void)dealloc;
-(unsigned)length;
-(void*)contents;
@end

