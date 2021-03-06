/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWPixelBufferPool, BWVideoFormat;

@interface FigCapturePixelConverter : NSObject {

	OpaqueVTPixelTransferSessionRef _transferSession;
	BWPixelBufferPool* _pool;
	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)_purgeResources;
-(long)updateOutputPixelFormat:(unsigned long)arg1 dimensions:(SCD_Struct_BW28)arg2 poolCapacity:(int)arg3 ;
-(long)convertSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputSampleBuffer:(opaqueCMSampleBuffer*)arg2 ;
-(long)_buildBufferPoolWithFormat:(unsigned long)arg1 dimensions:(SCD_Struct_BW28)arg2 poolCapacity:(int)arg3 ;
-(long)_buildTransferSession;
@end

