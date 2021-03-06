/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLToolsSamplerState.h>

@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState {

	MTLSamplerDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLSamplerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(id)description;
-(MTLSamplerDescriptor *)descriptor;
@end

