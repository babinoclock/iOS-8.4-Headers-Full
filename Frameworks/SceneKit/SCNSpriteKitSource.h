/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class SKScene;

@interface SCNSpriteKitSource : SCNImageSource {

	SKScene* _scene;

}

@property (nonatomic,retain) SKScene * scene;              //@synthesize scene=_scene - In the implementation block
-(SKScene *)scene;
-(void)setScene:(SKScene *)arg1 ;
-(id)textureSourceForContext:(void*)arg1 ;
-(void)dealloc;
-(char)isOpaque;
@end

