/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRCDevice.h>

@interface CoreIRDevice : CoreRCDevice {

	char _isLocalDevice;

}

@property (assign,nonatomic) char isLocalDevice;              //@synthesize isLocalDevice=_isLocalDevice - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsLocalDevice:(char)arg1 ;
-(char)isLocalDevice;
@end

