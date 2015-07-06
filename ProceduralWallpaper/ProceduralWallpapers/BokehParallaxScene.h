/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <SpriteKit/SKScene.h>

@class NSMutableArray, SKEffectNode, SKNode, BokehParallaxNode, SKLabelNode, WKMotionManager, NSString, SKSpriteNode, UIColor, NSArray;

@interface BokehParallaxScene : SKScene {

	float CAMERA_SPEED_X;
	float CAMERA_SPEED_Y;
	float CAMERA_DISTANCE;
	float DISTANCE_SCALE;
	float _filterCoefficient;
	NSMutableArray* _parallaxNodes;
	CGRect _cameraBounds;
	CGRect _worldBounds;
	CGRect _worldCameraBounds;
	SKEffectNode* _world;
	SKNode* _camera;
	BokehParallaxNode* _backdropNode;
	SKNode* _hudNode;
	SKLabelNode* _hudLabel;
	double _lastUpdate;
	double _dt;
	char _cameraWander;
	WKMotionManager* _motionManager;
	NSString* _bgImageName;
	SKSpriteNode* _bgImageNode;
	unsigned _baseFrameInterval;
	unsigned _stillFrameInterval;
	UIColor* _baseColor;
	double _timeLastGravitySample;

}

@property (assign) CGRect cameraBox; 
@property (readonly) CGRect bgBox; 
@property (assign) CGPoint cameraLocation; 
@property (assign) float previewScale; 
@property (assign) double timeLastGravitySample;              //@synthesize timeLastGravitySample=_timeLastGravitySample - In the implementation block
@property (readonly) NSArray * parallaxNodes; 
@property (assign) char cameraShouldWander; 
@property (assign) unsigned baseFrameInterval;                //@synthesize baseFrameInterval=_baseFrameInterval - In the implementation block
@property (assign) unsigned stillFrameInterval;               //@synthesize stillFrameInterval=_stillFrameInterval - In the implementation block
@property (assign) float filterCoefficient; 
@property (retain) NSString * bgImageName; 
@property (assign) float bgImageAlpha; 
@property (assign) float bgImageZPos; 
@property (retain) UIColor * baseColor;                       //@synthesize baseColor=_baseColor - In the implementation block
-(void)setBaseColor:(UIColor *)arg1 ;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copy;
-(id)initWithSize:(CGSize)arg1 ;
-(void)update:(double)arg1 ;
-(void)setPaused:(char)arg1 ;
-(UIColor *)baseColor;
-(void)setCameraLocation:(CGPoint)arg1 ;
-(CGPoint)cameraLocation;
-(CGRect)cameraBox;
-(void)setBaseFrameInterval:(unsigned)arg1 ;
-(void)setStillFrameInterval:(unsigned)arg1 ;
-(void)setFilterCoefficient:(float)arg1 ;
-(void)setCameraBox:(CGRect)arg1 ;
-(void)setBgImageAlpha:(float)arg1 ;
-(NSArray *)parallaxNodes;
-(void)setCameraShouldWander:(char)arg1 ;
-(void)setBgImageName:(NSString *)arg1 ;
-(void)setBgImageZPos:(float)arg1 ;
-(void)addParallaxNode:(id)arg1 ;
-(void)computeCameraBox;
-(void)updateParallaxNodes;
-(void)setup_world;
-(void)setup_parallaxNodes;
-(void)moveCameraToRandomPoint;
-(unsigned)baseFrameInterval;
-(unsigned)stillFrameInterval;
-(CGPoint)readGyro;
-(CGPoint)getCameraPositionFromNormalized:(CGPoint)arg1 ;
-(float)filterCoefficient;
-(CGPoint)clampCameraPosition:(CGPoint)arg1 ;
-(float)bgImageAlpha;
-(float)bgImageZPos;
-(NSString *)bgImageName;
-(char)cameraShouldWander;
-(void)addLabel:(id)arg1 toNode:(id)arg2 ;
-(CGRect)bgBox;
-(void)setPreviewScale:(float)arg1 ;
-(float)previewScale;
-(double)timeLastGravitySample;
-(void)setTimeLastGravitySample:(double)arg1 ;
@end
