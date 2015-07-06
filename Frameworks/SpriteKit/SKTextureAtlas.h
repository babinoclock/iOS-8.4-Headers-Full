/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/NSCoding.h>

@class NSDictionary, NSString, NSArray;

@interface SKTextureAtlas : NSObject <NSCoding> {

	NSDictionary* _textureDict;
	NSString* _atlasName;

}

@property (nonatomic,readonly) NSArray * textureNames; 
+(id)findTextureNamed:(id)arg1 ;
+(id)atlasNamed:(id)arg1 ;
+(char)canUseObjectForAtlas:(id)arg1 ;
+(void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)getSupportedPostfixes;
+(id)atlasWithDictionary:(id)arg1 ;
-(id)textureNamed:(id)arg1 ;
-(id)_copyImageData;
-(void)preloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)preload;
-(void)loadTextures;
-(void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2 ;
-(id)findTextureNamedFromAtlas:(id)arg1 ;
-(NSArray *)textureNames;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)unload;
@end
