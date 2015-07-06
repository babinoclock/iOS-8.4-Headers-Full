/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/NSCoding.h>

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSCoding> {

	char __implicit;
	SKPhysicsBody* bodyA;
	SKPhysicsBody* bodyB;
	float reactionTorque;
	CGVector reactionForce;

}

@property (nonatomic,retain) SKPhysicsBody * bodyA; 
@property (nonatomic,retain) SKPhysicsBody * bodyB; 
@property (nonatomic,readonly) CGVector reactionForce; 
@property (nonatomic,readonly) float reactionTorque; 
@property (assign,nonatomic) char _implicit;                        //@synthesize _implicit=__implicit - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)_implicit;
-(void)set_implicit:(char)arg1 ;
-(void)setBodyA:(SKPhysicsBody *)arg1 ;
-(void)setBodyB:(SKPhysicsBody *)arg1 ;
-(CGVector)reactionForce;
-(float)reactionTorque;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SKPhysicsBody *)bodyA;
-(SKPhysicsBody *)bodyB;
@end

