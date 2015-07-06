/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNPlane : SCNGeometry {

	id _reserved;
	float _width;
	float _height;
	float _cornerRadius;
	int _widthSegmentCount;
	int _heightSegmentCount;
	int _cornerSegmentCount;
	int _primitiveType;

}

@property (assign,nonatomic) float width; 
@property (assign,nonatomic) float height; 
@property (assign,nonatomic) int widthSegmentCount; 
@property (assign,nonatomic) int heightSegmentCount; 
@property (assign,nonatomic) float cornerRadius; 
@property (assign,nonatomic) int cornerSegmentCount; 
+(id)SCNJSExportProtocol;
+(id)planeWithWidth:(float)arg1 height:(float)arg2 ;
+(char)supportsSecureCoding;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 ;
-(id)presentationGeometry;
-(char)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(char)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(float*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(void)setPrimitiveType:(int)arg1 ;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)presentationPlane;
-(int)widthSegmentCount;
-(void)setWidthSegmentCount:(int)arg1 ;
-(int)heightSegmentCount;
-(void)setHeightSegmentCount:(int)arg1 ;
-(int)cornerSegmentCount;
-(void)setCornerSegmentCount:(int)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(float)width;
-(float)height;
-(void)setWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(int)primitiveType;
@end
