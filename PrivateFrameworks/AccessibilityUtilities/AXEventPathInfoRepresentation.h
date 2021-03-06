/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/NSSecureCoding.h>
#import <AccessibilityUtilities/NSCopying.h>

@interface AXEventPathInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	unsigned char _pathProximity;
	unsigned long _pathWindowContextID;
	float _pathPressure;
	float _pathMajorRadius;
	float _pathMinorRadius;
	float _pathMajorRadiusTolerance;
	float _pathTwist;
	float _pathQuality;
	float _pathDensity;
	unsigned _pathEventMask;
	void* _pathWindow;
	CGPoint _pathLocation;

}

@property (assign,nonatomic) unsigned char pathIndex;                        //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,nonatomic) unsigned char pathIdentity;                     //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (assign,nonatomic) CGPoint pathLocation;                           //@synthesize pathLocation=_pathLocation - In the implementation block
@property (assign,nonatomic) unsigned long pathWindowContextID;              //@synthesize pathWindowContextID=_pathWindowContextID - In the implementation block
@property (assign,nonatomic) unsigned char pathProximity;                    //@synthesize pathProximity=_pathProximity - In the implementation block
@property (assign,nonatomic) float pathPressure;                             //@synthesize pathPressure=_pathPressure - In the implementation block
@property (assign,nonatomic) float pathMajorRadius;                          //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (assign,nonatomic) float pathMinorRadius;                          //@synthesize pathMinorRadius=_pathMinorRadius - In the implementation block
@property (assign,nonatomic) float pathMajorRadiusTolerance;                 //@synthesize pathMajorRadiusTolerance=_pathMajorRadiusTolerance - In the implementation block
@property (assign,nonatomic) float pathTwist;                                //@synthesize pathTwist=_pathTwist - In the implementation block
@property (assign,nonatomic) float pathQuality;                              //@synthesize pathQuality=_pathQuality - In the implementation block
@property (assign,nonatomic) float pathDensity;                              //@synthesize pathDensity=_pathDensity - In the implementation block
@property (assign,nonatomic) unsigned pathEventMask;                         //@synthesize pathEventMask=_pathEventMask - In the implementation block
@property (assign,nonatomic) void* pathWindow;                               //@synthesize pathWindow=_pathWindow - In the implementation block
+(char)supportsSecureCoding;
+(id)representationWithPathInfo:(SCD_Struct_AX11*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)pathLocation;
-(unsigned long)pathWindowContextID;
-(void)setPathIndex:(unsigned char)arg1 ;
-(void)setPathIdentity:(unsigned char)arg1 ;
-(void)setPathProximity:(unsigned char)arg1 ;
-(void)setPathPressure:(float)arg1 ;
-(void)setPathMajorRadius:(float)arg1 ;
-(void)setPathLocation:(CGPoint)arg1 ;
-(void)setPathWindowContextID:(unsigned long)arg1 ;
-(void)setPathWindow:(void*)arg1 ;
-(unsigned char)pathIndex;
-(unsigned char)pathIdentity;
-(unsigned char)pathProximity;
-(float)pathPressure;
-(float)pathMajorRadius;
-(void*)pathWindow;
-(float)pathMajorRadiusTolerance;
-(void)setPathMajorRadiusTolerance:(float)arg1 ;
-(float)pathTwist;
-(void)setPathTwist:(float)arg1 ;
-(float)pathMinorRadius;
-(void)setPathMinorRadius:(float)arg1 ;
-(float)pathQuality;
-(void)setPathQuality:(float)arg1 ;
-(float)pathDensity;
-(void)setPathDensity:(float)arg1 ;
-(unsigned)pathEventMask;
-(void)setPathEventMask:(unsigned)arg1 ;
-(void)writeToPathInfo:(SCD_Struct_AX11*)arg1 ;
@end

