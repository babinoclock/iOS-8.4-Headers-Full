/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/NSSecureCoding.h>

@class NSString, NSNumber;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding> {

	unsigned char _networkType;
	char _hasDuplicates;
	NSString* _deviceName;
	NSString* _deviceIdentifier;
	NSNumber* _batteryLife;
	NSNumber* _signalStrength;

}

@property (copy) NSString * deviceName;                    //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (retain) NSNumber * batteryLife;                 //@synthesize batteryLife=_batteryLife - In the implementation block
@property (assign) unsigned char networkType;              //@synthesize networkType=_networkType - In the implementation block
@property (retain) NSNumber * signalStrength;              //@synthesize signalStrength=_signalStrength - In the implementation block
@property (assign) char hasDuplicates;                     //@synthesize hasDuplicates=_hasDuplicates - In the implementation block
+(char)supportsSecureCoding;
-(unsigned char)networkType;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSNumber *)signalStrength;
-(void)setSignalStrength:(NSNumber *)arg1 ;
-(NSNumber *)batteryLife;
-(void)setBatteryLife:(NSNumber *)arg1 ;
-(char)hasDuplicates;
-(void)setHasDuplicates:(char)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setNetworkType:(unsigned char)arg1 ;
@end

