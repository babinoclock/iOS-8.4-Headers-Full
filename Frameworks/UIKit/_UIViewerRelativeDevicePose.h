/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>
#import <UIKit/NSCoding.h>

@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {

	_UIMotionEffectAcceleratedOutputRange* _acceleratedOutputRange;
	float _planarRotationAngle;
	UIOffset _viewerOffset;

}

@property (assign,nonatomic) UIOffset viewerOffset;                  //@synthesize viewerOffset=_viewerOffset - In the implementation block
@property (assign,nonatomic) float planarRotationAngle;              //@synthesize planarRotationAngle=_planarRotationAngle - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIOffset)viewerOffset;
-(void)_reset;
-(void)setViewerOffset:(UIOffset)arg1 ;
-(id)_acceleratedOutputRange;
-(void)_setAcceleration:(CGPoint)arg1 fixingOutputForViewerOffset:(UIOffset)arg2 ;
-(UIOffset)_acceleratedOutputForViewerOffset:(UIOffset)arg1 accelerationBoostFactor:(CGPoint)arg2 ;
-(float)planarRotationAngle;
-(void)setPlanarRotationAngle:(float)arg1 ;
@end

