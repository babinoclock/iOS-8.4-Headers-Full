/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class NSString;

@interface SBControlCenterButtonSettings : _UISettings {

	char _enabled;
	NSString* _displayName;
	NSString* _identifier;

}

@property (assign,nonatomic) char enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
+(id)createWithSettingClass:(Class)arg1 ;
+(id)settingsControllerModule;
-(NSString *)identifier;
-(void)setEnabled:(char)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(char)enabled;
-(void)setDefaultValues;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

