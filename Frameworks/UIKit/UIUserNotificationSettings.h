/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>
#import <UIKit/NSSecureCoding.h>

@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding> {

	unsigned _types;
	NSSet* _categories;

}

@property (nonatomic,readonly) unsigned types;                       //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSSet * categories;              //@synthesize categories=_categories - In the implementation block
+(id)settingsForTypes:(unsigned)arg1 categories:(id)arg2 ;
+(char)supportsSecureCoding;
+(id)settingsForUserNotificationTypes:(unsigned)arg1 userNotificationActionSettings:(id)arg2 ;
+(id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)types;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validatedSettings;
-(id)initWithUserNotificationTypes:(unsigned)arg1 userNotificationActionSettings:(id)arg2 ;
-(id)initWithTypes:(unsigned)arg1 categories:(id)arg2 ;
-(NSSet *)categories;
-(char)mayPresentUserNotificationOfType:(unsigned)arg1 ;
-(unsigned)allowedUserNotificationTypes;
-(id)userNotificationActionSettings;
@end

