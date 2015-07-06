/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/NSCopying.h>
#import <CoreRC/NSSecureCoding.h>

@protocol CoreRCDeviceDelegate;
@class CoreRCManager, NSUUID;

@interface CoreRCDevice : NSObject <NSCopying, NSSecureCoding> {

	id<CoreRCDeviceDelegate> _delegate;
	CoreRCManager* _manager;
	NSUUID* _uniqueID;
	NSUUID* _busUniqueID;

}

@property (nonatomic,readonly) char isLocalDevice; 
@property (nonatomic,readonly) NSUUID * uniqueID;                 //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSUUID * busUniqueID;              //@synthesize busUniqueID=_busUniqueID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)manager;
-(id)initWithBus:(id)arg1 ;
-(void)receivedHIDEvent:(id)arg1 fromDevice:(id)arg2 ;
-(id)bus;
-(void)readyToSend;
-(char)isLocalDevice;
-(id)mergeProperties;
-(NSUUID *)busUniqueID;
-(char)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3 ;
-(void)delloc;
-(void)mergePropertiesFromDevice:(id)arg1 ;
-(char)sendHIDEvent:(id)arg1 error:(id*)arg2 ;
-(void)setManager:(id)arg1 ;
-(NSUUID *)uniqueID;
@end

