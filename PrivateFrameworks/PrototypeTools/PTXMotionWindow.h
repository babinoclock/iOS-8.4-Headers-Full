/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTXMotionWindow : NSObject {

	float _radius;
	float _maxIncrease;
	int _direction;
	float _effectiveRadius;
	float _center;
	float _upperLimit;
	float _lowerLimit;

}
-(void)reset;
-(float)mappedOffset:(float)arg1 ;
-(void)setIncreaseFactor:(float)arg1 fixingOffset:(float)arg2 ;
-(id)initWithRadius:(float)arg1 maxIncrease:(float)arg2 direction:(int)arg3 ;
@end

