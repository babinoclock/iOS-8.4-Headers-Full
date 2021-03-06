/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/NSCopying.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;

@interface MTLRenderPassDescriptor : NSObject <NSCopying> {

	MTLRenderPassDescriptorPrivate _private;

}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray * colorAttachments; 
@property (nonatomic,copy) MTLRenderPassDepthAttachmentDescriptor * depthAttachment; 
@property (nonatomic,copy) MTLRenderPassStencilAttachmentDescriptor * stencilAttachment; 
@property (nonatomic,retain) id<MTLBuffer> visibilityResultBuffer; 
+(id)renderPassDescriptor;
-(char)validate:(id)arg1 width:(unsigned*)arg2 height:(unsigned*)arg3 ;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(void)setDepthAttachment:(MTLRenderPassDepthAttachmentDescriptor *)arg1 ;
-(MTLRenderPassDepthAttachmentDescriptor *)depthAttachment;
-(void)setStencilAttachment:(MTLRenderPassStencilAttachmentDescriptor *)arg1 ;
-(MTLRenderPassStencilAttachmentDescriptor *)stencilAttachment;
-(void)setVisibilityResultBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)visibilityResultBuffer;
-(MTLRenderPassColorAttachmentDescriptorArray *)colorAttachments;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

