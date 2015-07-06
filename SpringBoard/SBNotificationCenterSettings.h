/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:52 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBBounceSettings;

@interface SBNotificationCenterSettings : _UISettings {

	SBBounceSettings* _bounceSettings;
	float _actionButtonVibrantTintLevel;
	float _actionButtonVibrantTintAlpha;
	float _actionButtonSelectedVibrantTintLevel;
	float _actionButtonSelectedVibrantTintAlpha;
	float _actionButtonOverlayTintLevel;
	float _actionButtonOverlayTintAlpha;
	float _actionButtonSelectedOverlayTintLevel;
	float _actionButtonSelectedOverlayTintAlpha;
	float _modeButtonTintLevel;
	float _modeButtonTintAlpha;
	float _modeLabelTintLevel;
	float _modeLabelTintAlpha;
	double _grabberAnimationDuration;

}

@property (nonatomic,retain) SBBounceSettings * bounceSettings;                       //@synthesize bounceSettings=_bounceSettings - In the implementation block
@property (assign) double grabberAnimationDuration;                                   //@synthesize grabberAnimationDuration=_grabberAnimationDuration - In the implementation block
@property (assign,nonatomic) float actionButtonVibrantTintLevel;                      //@synthesize actionButtonVibrantTintLevel=_actionButtonVibrantTintLevel - In the implementation block
@property (assign,nonatomic) float actionButtonVibrantTintAlpha;                      //@synthesize actionButtonVibrantTintAlpha=_actionButtonVibrantTintAlpha - In the implementation block
@property (assign,nonatomic) float actionButtonSelectedVibrantTintLevel;              //@synthesize actionButtonSelectedVibrantTintLevel=_actionButtonSelectedVibrantTintLevel - In the implementation block
@property (assign,nonatomic) float actionButtonSelectedVibrantTintAlpha;              //@synthesize actionButtonSelectedVibrantTintAlpha=_actionButtonSelectedVibrantTintAlpha - In the implementation block
@property (assign,nonatomic) float actionButtonOverlayTintLevel;                      //@synthesize actionButtonOverlayTintLevel=_actionButtonOverlayTintLevel - In the implementation block
@property (assign,nonatomic) float actionButtonOverlayTintAlpha;                      //@synthesize actionButtonOverlayTintAlpha=_actionButtonOverlayTintAlpha - In the implementation block
@property (assign,nonatomic) float actionButtonSelectedOverlayTintLevel;              //@synthesize actionButtonSelectedOverlayTintLevel=_actionButtonSelectedOverlayTintLevel - In the implementation block
@property (assign,nonatomic) float actionButtonSelectedOverlayTintAlpha;              //@synthesize actionButtonSelectedOverlayTintAlpha=_actionButtonSelectedOverlayTintAlpha - In the implementation block
@property (assign,nonatomic) float modeButtonTintLevel;                               //@synthesize modeButtonTintLevel=_modeButtonTintLevel - In the implementation block
@property (assign,nonatomic) float modeButtonTintAlpha;                               //@synthesize modeButtonTintAlpha=_modeButtonTintAlpha - In the implementation block
@property (assign,nonatomic) float modeLabelTintLevel;                                //@synthesize modeLabelTintLevel=_modeLabelTintLevel - In the implementation block
@property (assign,nonatomic) float modeLabelTintAlpha;                                //@synthesize modeLabelTintAlpha=_modeLabelTintAlpha - In the implementation block
+(id)settingsControllerModule;
-(SBBounceSettings *)bounceSettings;
-(double)grabberAnimationDuration;
-(void)setGrabberAnimationDuration:(double)arg1 ;
-(void)setBounceSettings:(SBBounceSettings *)arg1 ;
-(float)actionButtonVibrantTintLevel;
-(void)setActionButtonVibrantTintLevel:(float)arg1 ;
-(float)actionButtonVibrantTintAlpha;
-(void)setActionButtonVibrantTintAlpha:(float)arg1 ;
-(float)actionButtonSelectedVibrantTintLevel;
-(void)setActionButtonSelectedVibrantTintLevel:(float)arg1 ;
-(float)actionButtonSelectedVibrantTintAlpha;
-(void)setActionButtonSelectedVibrantTintAlpha:(float)arg1 ;
-(float)actionButtonOverlayTintLevel;
-(void)setActionButtonOverlayTintLevel:(float)arg1 ;
-(float)actionButtonOverlayTintAlpha;
-(void)setActionButtonOverlayTintAlpha:(float)arg1 ;
-(float)actionButtonSelectedOverlayTintLevel;
-(void)setActionButtonSelectedOverlayTintLevel:(float)arg1 ;
-(float)actionButtonSelectedOverlayTintAlpha;
-(void)setActionButtonSelectedOverlayTintAlpha:(float)arg1 ;
-(float)modeButtonTintLevel;
-(void)setModeButtonTintLevel:(float)arg1 ;
-(float)modeButtonTintAlpha;
-(void)setModeButtonTintAlpha:(float)arg1 ;
-(float)modeLabelTintLevel;
-(void)setModeLabelTintLevel:(float)arg1 ;
-(float)modeLabelTintAlpha;
-(void)setModeLabelTintAlpha:(float)arg1 ;
-(void)setDefaultValues;
@end
