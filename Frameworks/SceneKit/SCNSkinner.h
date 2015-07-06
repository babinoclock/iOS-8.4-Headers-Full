/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/NSSecureCoding.h>

@class SCNNode, SCNGeometry, NSArray, SCNGeometrySource;

@interface SCNSkinner : NSObject <NSSecureCoding> {

	id _reserved;
	C3DSkinnerRef _skinner;

}

@property (nonatomic,retain) SCNNode * skeleton; 
@property (nonatomic,retain) SCNGeometry * baseGeometry; 
@property (assign,nonatomic) SCNMatrix4 baseGeometryBindTransform; 
@property (nonatomic,readonly) NSArray * boneInverseBindTransforms; 
@property (nonatomic,readonly) NSArray * bones; 
@property (nonatomic,readonly) SCNGeometrySource * boneWeights; 
@property (nonatomic,readonly) SCNGeometrySource * boneIndices; 
+(id)skinnerWithSkinnerRef:(C3DSkinnerRef)arg1 ;
+(C3DSkinnerRef)createSkinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4 ;
+(id)skinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneInverseBindTransforms:(id)arg3 boneWeights:(id)arg4 boneIndices:(id)arg5 ;
+(char)supportsSecureCoding;
-(id)scene;
-(C3DSceneRef)sceneRef;
-(void*)__CFObject;
-(C3DSkinnerRef)skinnerRef;
-(SCNNode *)skeleton;
-(void)setSkeleton:(SCNNode *)arg1 ;
-(id)initWithSkinnerRef:(C3DSkinnerRef)arg1 ;
-(void)setBones:(NSArray *)arg1 ;
-(void)setBoneInverseBindTransforms:(NSArray *)arg1 ;
-(NSArray *)bones;
-(SCNGeometry *)baseGeometry;
-(SCNMatrix4)baseGeometryBindTransform;
-(SCNGeometrySource *)boneWeights;
-(SCNGeometrySource *)boneIndices;
-(NSArray *)boneInverseBindTransforms;
-(void)setBaseGeometryBindTransform:(SCNMatrix4)arg1 ;
-(void)setBaseGeometry:(SCNGeometry *)arg1 ;
-(id)joints;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
@end

