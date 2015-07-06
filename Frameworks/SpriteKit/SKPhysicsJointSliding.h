/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSliding : SKPhysicsJoint {

	char _shouldEnableLimits;
	float _lowerDistanceLimit;
	float _upperDistanceLimit;

}

@property (assign,nonatomic) char shouldEnableLimits;               //@synthesize shouldEnableLimits=_shouldEnableLimits - In the implementation block
@property (assign,nonatomic) float lowerDistanceLimit;              //@synthesize lowerDistanceLimit=_lowerDistanceLimit - In the implementation block
@property (assign,nonatomic) float upperDistanceLimit;              //@synthesize upperDistanceLimit=_upperDistanceLimit - In the implementation block
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)shouldEnableLimits;
-(void)setShouldEnableLimits:(char)arg1 ;
-(float)lowerDistanceLimit;
-(void)setLowerDistanceLimit:(float)arg1 ;
-(float)upperDistanceLimit;
-(void)setUpperDistanceLimit:(float)arg1 ;
@end

