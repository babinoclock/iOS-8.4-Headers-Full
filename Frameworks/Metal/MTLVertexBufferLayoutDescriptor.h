/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/NSCopying.h>

@interface MTLVertexBufferLayoutDescriptor : NSObject <NSCopying> {

	unsigned _stride;
	unsigned _stepFunction;
	unsigned _instanceStepRate;

}

@property (assign,nonatomic) unsigned stride; 
@property (assign,nonatomic) unsigned stepFunction; 
@property (assign,nonatomic) unsigned stepRate;                  //@synthesize instanceStepRate=_instanceStepRate - In the implementation block
-(unsigned)stride;
-(unsigned)stepFunction;
-(unsigned)stepRate;
-(void)setStride:(unsigned)arg1 ;
-(void)setStepFunction:(unsigned)arg1 ;
-(void)setStepRate:(unsigned)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

