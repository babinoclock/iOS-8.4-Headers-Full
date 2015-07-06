/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSSecureCoding.h>
#import <HealthKit/NSCopying.h>

@class NSString;

@interface HKSource : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _bundleIdentifier;
	char _localDevice;
	NSString* _productType;
	unsigned long long _options;

}

@property (readonly) NSString * name; 
@property (readonly) NSString * bundleIdentifier; 
@property (assign,setter=_setLocalDevice:,getter=_isLocalDevice,nonatomic) char localDevice;                  //@synthesize localDevice=_localDevice - In the implementation block
@property (setter=_setProductType:,getter=_productType,nonatomic,retain) NSString * productType;              //@synthesize productType=_productType - In the implementation block
@property (assign,setter=_setOptions:,getter=_options,nonatomic) unsigned long long options;                  //@synthesize options=_options - In the implementation block
+(char)_representsCurrentDeviceWithBundleIdentifier:(id)arg1 ;
+(id)_currentSourceProductType:(char)arg1 ;
+(id)_sourceNameWithRepresentsCurrentDevice:(char)arg1 defaultSource:(char)arg2 ;
+(id)defaultSource;
+(id)_generateIdentifierForAppleDevice;
+(char)supportsSecureCoding;
+(id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1 ;
+(id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4 ;
+(id)_sourceBundleIdentifierWithEntitlements:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(void)_setOptions:(unsigned long long)arg1 ;
-(char)_isApplication;
-(char)_isPreferredSource;
-(char)_isAppleWatch;
-(char)_isLocalDevice;
-(char)_requiresAuthorization;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(id)_init;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_options;
-(void)_setBundleIdentifier:(id)arg1 ;
-(void)_setLocalDevice:(char)arg1 ;
-(void)_setProductType:(id)arg1 ;
-(id)_productType;
@end

