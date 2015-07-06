/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject {

	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _tintColor;
	float _tintAlpha;
	float _blurRadius;
	unsigned _style;
	int _quality;
	_UIBackdropViewSettings* _settings;

}

@property (nonatomic,readonly) float tintAlpha;                  //@synthesize tintAlpha=_tintAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) float blurRadius;                 //@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,readonly) unsigned style;                   //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) int graphicsQuality;              //@synthesize quality=_quality - In the implementation block
-(void)_configure;
-(void)dealloc;
-(id)description;
-(float)blurRadius;
-(unsigned)style;
-(UIColor *)tintColor;
-(int)graphicsQuality;
-(id)initWithStyle:(unsigned)arg1 quality:(int)arg2 ;
-(id)_stringForStyle;
-(id)_stringForQuality;
-(id)_settingsForStyle;
-(float)tintAlpha;
@end

