/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/NSCopying.h>

@interface MTLStencilDescriptor : NSObject <NSCopying> {

	MTLStencilDescriptorPrivate _private;

}

@property (assign,nonatomic) unsigned stencilCompareFunction; 
@property (assign,nonatomic) unsigned stencilFailureOperation; 
@property (assign,nonatomic) unsigned depthFailureOperation; 
@property (assign,nonatomic) unsigned depthStencilPassOperation; 
@property (assign,nonatomic) unsigned readMask; 
@property (assign,nonatomic) unsigned writeMask; 
-(unsigned)writeMask;
-(void)setWriteMask:(unsigned)arg1 ;
-(MTLStencilDescriptorPrivate*)stencilPrivate;
-(unsigned)stencilCompareFunction;
-(void)setStencilCompareFunction:(unsigned)arg1 ;
-(unsigned)stencilFailureOperation;
-(void)setStencilFailureOperation:(unsigned)arg1 ;
-(unsigned)depthFailureOperation;
-(void)setDepthFailureOperation:(unsigned)arg1 ;
-(unsigned)depthStencilPassOperation;
-(void)setDepthStencilPassOperation:(unsigned)arg1 ;
-(unsigned)readMask;
-(void)setReadMask:(unsigned)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

