/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class NSArray;

@interface MTLRenderPipelineReflection : NSObject {

	struct {
		unsigned fragmentUsesDiscard : 1;
		unsigned fragmentWritesSampleMask : 1;
		unsigned fragmentWritesDepth : 1;
		unsigned vertexRegisterSpill : 1;
		unsigned fragmentRegisterSpill : 1;
		unsigned fragmentReadsFramebufferValues : 1;
		unsigned reserved : 58;
	}  _flags;
	NSArray* _vertexBuiltInArguments;
	NSArray* _vertexArguments;
	NSArray* _fragmentArguments;

}

@property (readonly) NSArray * vertexArguments;                //@synthesize vertexArguments=_vertexArguments - In the implementation block
@property (readonly) NSArray * fragmentArguments;              //@synthesize fragmentArguments=_fragmentArguments - In the implementation block
-(NSArray *)vertexArguments;
-(NSArray *)fragmentArguments;
-(id)vertexBuiltInArguments;
-(id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 options:(unsigned)arg4 flags:(SCD_Struct_MT41)arg5 ;
-(void)dealloc;
-(id)description;
@end

