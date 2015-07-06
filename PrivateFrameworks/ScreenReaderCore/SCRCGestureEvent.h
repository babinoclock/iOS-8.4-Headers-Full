/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject {

	unsigned _deviceIdentifier;
	SCRCGestureFinger* _finger[8];
	unsigned _fingerCount;
	double _time;
	CGPoint _averageLocation;

}
-(void)dealloc;
-(id)description;
-(double)time;
-(unsigned)deviceIdentifier;
-(CGRect)fingerFrame;
-(void)addFingerWithIdentifier:(unsigned)arg1 location:(CGPoint)arg2 ;
-(void)removeFingerWithIdentifier:(unsigned)arg1 ;
-(unsigned)fingerCount;
-(id)fingerAtIndex:(unsigned)arg1 ;
-(id)fingerWithIdentifier:(unsigned)arg1 ;
-(id)fingerWithoutIdentifier:(unsigned)arg1 ;
-(id)fingers;
-(CGPoint)averageLocation;
-(CGPoint)balancedLocation;
-(char)isCancelEvent;
-(CGPoint)magneticLocation;
-(id)initWithDeviceIdentifier:(unsigned)arg1 ;
@end

