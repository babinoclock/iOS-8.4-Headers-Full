/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface PTIconSettings : _UISettings {

	char _on;
	float _alphaStrength;
	float _radiusStrength;

}

@property (assign,nonatomic) char on;                           //@synthesize on=_on - In the implementation block
@property (assign,nonatomic) float alphaStrength;               //@synthesize alphaStrength=_alphaStrength - In the implementation block
@property (assign,nonatomic) float radiusStrength;              //@synthesize radiusStrength=_radiusStrength - In the implementation block
+(id)archivedSettingsGroup;
-(id)settingsHUDConfiguration;
-(void)setDefaultValues;
-(char)on;
-(void)setOn:(char)arg1 ;
-(void)setAlphaStrength:(float)arg1 ;
-(void)setRadiusStrength:(float)arg1 ;
-(void)settingsResetByHUD;
-(float)alphaStrength;
-(float)radiusStrength;
@end
