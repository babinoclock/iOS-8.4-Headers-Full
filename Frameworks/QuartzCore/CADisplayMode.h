/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CADisplay;

@interface CADisplayMode : NSObject {

	void* _priv;
	CADisplay* _dpy;
	unsigned long _width;
	unsigned long _height;

}

@property (nonatomic,readonly) unsigned long width; 
@property (nonatomic,readonly) unsigned long height; 
@property (nonatomic,readonly) float pixelAspectRatio; 
+(id)_displayModeWithMode:(int)arg1 display:(id)arg2 ;
-(int)_mode;
-(id)_initWithMode:(int)arg1 display:(id)arg2 ;
-(void)_setWidth:(unsigned long)arg1 height:(unsigned long)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long)width;
-(unsigned long)height;
-(float)pixelAspectRatio;
-(id)_display;
@end

