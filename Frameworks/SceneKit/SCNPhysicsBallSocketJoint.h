/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld, SCNPhysicsBody;

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior {

	SCD_Struct_SC33 _definition;
	btPoint2PointConstraint* _constraint;
	SCNPhysicsWorld* _world;

}

@property (nonatomic,readonly) SCNPhysicsBody * bodyA; 
@property (assign,nonatomic) SCNVector3 anchorA; 
@property (nonatomic,readonly) SCNPhysicsBody * bodyB; 
@property (assign,nonatomic) SCNVector3 anchorB; 
+(id)SCNJSExportProtocol;
+(id)jointWithBodyA:(id)arg1 anchorA:(SCNVector3)arg2 bodyB:(id)arg3 anchorB:(SCNVector3)arg4 ;
+(id)jointWithBody:(id)arg1 anchor:(SCNVector3)arg2 ;
-(SCNVector3)anchorA;
-(void)setAnchorA:(SCNVector3)arg1 ;
-(SCNVector3)anchorB;
-(void)setAnchorB:(SCNVector3)arg1 ;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(id)initWithBodyA:(id)arg1 anchorA:(SCNVector3)arg2 bodyB:(id)arg3 anchorB:(SCNVector3)arg4 ;
-(id)initWithBody:(id)arg1 anchor:(SCNVector3)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCNPhysicsBody *)bodyA;
-(SCNPhysicsBody *)bodyB;
@end

