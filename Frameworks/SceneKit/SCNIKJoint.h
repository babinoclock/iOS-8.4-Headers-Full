/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SCNNode;

@interface SCNIKJoint : NSObject {

	SCNNode* joint;
	float maxAllowedRotationAngle;

}

@property (assign,nonatomic,__weak) SCNNode * joint; 
@property (assign,nonatomic) float maxAllowedRotationAngle; 
-(SCNNode *)joint;
-(void)setJoint:(SCNNode *)arg1 ;
-(float)maxAllowedRotationAngle;
-(void)setMaxAllowedRotationAngle:(float)arg1 ;
@end

