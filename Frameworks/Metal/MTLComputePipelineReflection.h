/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class NSArray;

@interface MTLComputePipelineReflection : NSObject {

	NSArray* _builtInArguments;
	struct {
		unsigned kernelRegisterSpill : 1;
		unsigned threadgroupBarrier : 1;
		unsigned deviceMemoryAtomics : 1;
		unsigned threadgroupMemoryAtomics : 1;
		unsigned reserved : 60;
	}  _flags;
	NSArray* _arguments;

}

@property (readonly) NSArray * arguments;              //@synthesize arguments=_arguments - In the implementation block
-(id)builtInArguments;
-(id)initWithSerializedData:(id)arg1 options:(unsigned)arg2 flags:(SCD_Struct_MT37)arg3 ;
-(void)dealloc;
-(id)description;
-(NSArray *)arguments;
@end

