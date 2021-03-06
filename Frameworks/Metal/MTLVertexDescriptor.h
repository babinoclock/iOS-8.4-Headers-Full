/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/NSCopying.h>

@class MTLVertexBufferLayoutDescriptorArray, MTLVertexAttributeDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying> {

	MTLVertexBufferLayoutDescriptorArray* _vertexBufferArray;
	MTLVertexAttributeDescriptorArray* _attributeArray;

}

@property (readonly) MTLVertexBufferLayoutDescriptorArray * layouts;              //@synthesize vertexBufferArray=_vertexBufferArray - In the implementation block
@property (readonly) MTLVertexAttributeDescriptorArray * attributes;              //@synthesize attributeArray=_attributeArray - In the implementation block
+(id)vertexDescriptor;
-(MTLVertexBufferLayoutDescriptorArray *)layouts;
-(id)serializeDescriptor;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MTLVertexAttributeDescriptorArray *)attributes;
@end

