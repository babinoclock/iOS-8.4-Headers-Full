/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNSourceRendererRegistry : NSObject {

	CFDictionaryRef _registry;

}
+(id)sharedRegistry;
-(void)removeSourceRenderersForCGLContextObj:(void*)arg1 ;
-(void)removeSourceRenderersForSource:(id)arg1 ;
-(id)sourceRendererForCGLContextObj:(void*)arg1 source:(id)arg2 ;
-(void)rendererDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

