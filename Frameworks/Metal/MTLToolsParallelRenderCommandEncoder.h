/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLToolsCommandEncoder.h>
#import <Metal/MTLParallelRenderCommandEncoder.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder> {

	MTLToolsPointerArray* _renderCommandEncoders;

}

@property (nonatomic,readonly) MTLToolsPointerArray * renderCommandEncoders;              //@synthesize renderCommandEncoders=_renderCommandEncoders - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)renderCommandEncoder;
-(MTLToolsPointerArray *)renderCommandEncoders;
@end
