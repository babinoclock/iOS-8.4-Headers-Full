/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMailSettings/MFNanoBridgeSettingsMailbox.h>
#import <MobileMailSettings/NSSecureCoding.h>

@interface MFNanoBridgeSettingsUnifiedMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding> {

	int _type;

}

@property (nonatomic,readonly) int type;              //@synthesize type=_type - In the implementation block
+(char)supportsSecureCoding;
-(id)icon;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(id)displayName;
@end

