/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:15:00 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBIconColorSettings : _UISettings {

	char _blurryFolderIcons;
	char _blurryCloseBoxes;
	char _suppressJitter;
	char _closeBoxesEverywhere;
	float _maxSaturationBoost;
	float _maxSaturation;
	float _maxBrightnessBoost;
	float _maxBrightness;
	float _colorAlpha;
	float _whiteAlpha;

}

@property (assign,nonatomic) char blurryFolderIcons;                 //@synthesize blurryFolderIcons=_blurryFolderIcons - In the implementation block
@property (assign,nonatomic) char blurryCloseBoxes;                  //@synthesize blurryCloseBoxes=_blurryCloseBoxes - In the implementation block
@property (assign,nonatomic) float maxSaturationBoost;               //@synthesize maxSaturationBoost=_maxSaturationBoost - In the implementation block
@property (assign,nonatomic) float maxSaturation;                    //@synthesize maxSaturation=_maxSaturation - In the implementation block
@property (assign,nonatomic) float maxBrightnessBoost;               //@synthesize maxBrightnessBoost=_maxBrightnessBoost - In the implementation block
@property (assign,nonatomic) float maxBrightness;                    //@synthesize maxBrightness=_maxBrightness - In the implementation block
@property (assign,nonatomic) float colorAlpha;                       //@synthesize colorAlpha=_colorAlpha - In the implementation block
@property (assign,nonatomic) float whiteAlpha;                       //@synthesize whiteAlpha=_whiteAlpha - In the implementation block
@property (assign,nonatomic) char suppressJitter;                    //@synthesize suppressJitter=_suppressJitter - In the implementation block
@property (assign,nonatomic) char closeBoxesEverywhere;              //@synthesize closeBoxesEverywhere=_closeBoxesEverywhere - In the implementation block
+(id)settingsControllerModule;
-(char)closeBoxesEverywhere;
-(char)suppressJitter;
-(char)blurryCloseBoxes;
-(float)maxSaturationBoost;
-(float)maxSaturation;
-(float)maxBrightnessBoost;
-(float)maxBrightness;
-(float)colorAlpha;
-(float)whiteAlpha;
-(char)blurryFolderIcons;
-(void)setBlurryCloseBoxes:(char)arg1 ;
-(void)setBlurryFolderIcons:(char)arg1 ;
-(void)setMaxSaturationBoost:(float)arg1 ;
-(void)setMaxSaturation:(float)arg1 ;
-(void)setMaxBrightnessBoost:(float)arg1 ;
-(void)setMaxBrightness:(float)arg1 ;
-(void)setColorAlpha:(float)arg1 ;
-(void)setWhiteAlpha:(float)arg1 ;
-(void)setSuppressJitter:(char)arg1 ;
-(void)setCloseBoxesEverywhere:(char)arg1 ;
-(void)setDefaultValues;
@end

