/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@protocol MFDeviceDriver;
@class NSObject;

@interface MFTransform : NSObject <NSCopying> {

	CGAffineTransform m_world;
	CGPoint m_windowOrg;
	CGPoint m_windowExt;
	CGPoint m_viewportOrg;
	CGPoint m_viewportExt;
	CGAffineTransform m_combinedTransform;
	int m_mapMode;
	NSObject*<MFDeviceDriver> m_deviceDriver;

}
-(int)setWorldTransform:(const CGAffineTransform*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDriver:(id)arg1 ;
-(CGAffineTransform)getTransformMatrix;
-(int)setWindowExt:(int)arg1 :(int)arg2 ;
-(int)setWindowOrg:(int)arg1 :(int)arg2 ;
-(int)setViewportExt:(int)arg1 :(int)arg2 ;
-(int)offsetWindowOrg:(int)arg1 :(int)arg2 ;
-(int)offsetViewportOrg:(int)arg1 :(int)arg2 ;
-(int)setViewportOrg:(int)arg1 :(int)arg2 ;
-(int)scaleViewportExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)scaleWindowExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)modifyWorldTransform:(const CGAffineTransform*)arg1 :(int)arg2 ;
-(int)updateTransform;
-(CGAffineTransform)getWorldMatrix;
-(void)setWorldMatrix:(CGAffineTransform)arg1 ;
-(CGPoint)getWindowOrg;
-(void)setWindowOrg:(CGPoint)arg1 ;
-(CGPoint)getWindowExtent;
-(void)setWindowExt:(CGPoint)arg1 ;
-(CGPoint)getViewportOrg;
-(void)setViewportOrg:(CGPoint)arg1 ;
-(CGPoint)getViewportExtent;
-(void)setViewportExt:(CGPoint)arg1 ;
-(void)setTransformMatrix:(CGAffineTransform)arg1 ;
-(int)getMapMode;
-(char)isUpsideDown;
-(CGPoint)DPtoLP:(CGPoint)arg1 ;
-(CGPoint)LPtoDP:(CGPoint)arg1 ;
-(int)setMapMode:(int)arg1 ;
@end
