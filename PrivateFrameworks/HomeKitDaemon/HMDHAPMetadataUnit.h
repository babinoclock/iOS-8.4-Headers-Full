/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/NSSecureCoding.h>

@class HAPMetadataUnit;

@interface HMDHAPMetadataUnit : NSObject <NSSecureCoding> {

	HAPMetadataUnit* _hapUnitMetadata;

}

@property (nonatomic,retain) HAPMetadataUnit * hapUnitMetadata;              //@synthesize hapUnitMetadata=_hapUnitMetadata - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHapUnitMetadata:(HAPMetadataUnit *)arg1 ;
-(HAPMetadataUnit *)hapUnitMetadata;
-(id)initWithHAPUnit:(id)arg1 ;
@end

