/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNBoundingSphere : NSObject {

	SCNVector3 center;
	float radius;

}

@property (assign,nonatomic) SCNVector3 center; 
@property (assign,nonatomic) float radius; 
+(id)SCNJSExportProtocol;
-(id)description;
-(SCNVector3)center;
-(void)setCenter:(SCNVector3)arg1 ;
-(float)radius;
-(void)setRadius:(float)arg1 ;
@end
