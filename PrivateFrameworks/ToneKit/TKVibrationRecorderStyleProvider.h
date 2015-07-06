/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIColor, UIScreen, UIFont, UIImage;


@protocol TKVibrationRecorderStyleProvider <NSObject>
@property (nonatomic,readonly) UIColor * vibrationRecorderBarsBackgroundColor; 
@property (nonatomic,retain) UIScreen * screen; 
@property (nonatomic,readonly) UIFont * vibrationRecorderInstructionsLabelFont; 
@property (nonatomic,readonly) UIColor * vibrationRecorderInstructionsLabelTextColor; 
@property (nonatomic,readonly) UIColor * vibrationRecorderInstructionsLabelBackgroundColor; 
@property (nonatomic,readonly) UIOffset vibrationRecorderInstructionsLabelPositionOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets; 
@property (nonatomic,readonly) double vibrationRecorderInstructionsLabelFadeAnimationDuration; 
@property (nonatomic,readonly) float vibrationRecorderControlsToolbarVerticalOffset; 
@property (nonatomic,readonly) float vibrationRecorderControlsToolbarAdditionalHeight; 
@property (nonatomic,readonly) float vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge; 
@property (nonatomic,readonly) float vibrationRecorderProgressToolbarVerticalOffset; 
@property (nonatomic,readonly) float vibrationRecorderProgressToolbarAdditionalHeight; 
@property (nonatomic,readonly) float vibrationRecorderProgressViewHorizontalOffsetFromEdge; 
@property (nonatomic,readonly) float vibrationRecorderProgressViewHeight; 
@property (nonatomic,readonly) UIColor * vibrationRecorderProgressViewTrackColor; 
@property (nonatomic,readonly) float vibrationRecorderProgressViewDotHorizontalInset; 
@property (nonatomic,readonly) UIImage * vibrationRecorderProgressViewResizableDotImage; 
@property (nonatomic,readonly) float vibrationRecorderProgressViewAccessibilityAdditionalHeight; 
@property (nonatomic,readonly) UIColor * vibrationRecorderRippleViewBackgroundColor; 
@property (nonatomic,readonly) float vibrationRecorderRippleRingLineWidth; 
@property (nonatomic,readonly) float vibrationRecorderRippleInitialRadius; 
@property (nonatomic,readonly) float vibrationRecorderRippleFinalRadius; 
@property (nonatomic,readonly) float vibrationRecorderRippleFingerStillSpeed; 
@property (nonatomic,readonly) float vibrationRecorderRippleFingerMovingSpeed; 
@required
-(UIScreen *)screen;
-(void)setScreen:(id)arg1;
-(UIImage *)vibrationRecorderProgressViewResizableDotImage;
-(UIColor *)vibrationRecorderBarsBackgroundColor;
-(UIFont *)vibrationRecorderInstructionsLabelFont;
-(UIColor *)vibrationRecorderInstructionsLabelTextColor;
-(UIColor *)vibrationRecorderInstructionsLabelBackgroundColor;
-(UIOffset)vibrationRecorderInstructionsLabelPositionOffset;
-(UIEdgeInsets)vibrationRecorderInstructionsLabelEdgeInsets;
-(double)vibrationRecorderInstructionsLabelFadeAnimationDuration;
-(float)vibrationRecorderControlsToolbarVerticalOffset;
-(float)vibrationRecorderControlsToolbarAdditionalHeight;
-(float)vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
-(float)vibrationRecorderProgressToolbarVerticalOffset;
-(float)vibrationRecorderProgressToolbarAdditionalHeight;
-(float)vibrationRecorderProgressViewHorizontalOffsetFromEdge;
-(float)vibrationRecorderProgressViewHeight;
-(UIColor *)vibrationRecorderProgressViewTrackColor;
-(float)vibrationRecorderProgressViewDotHorizontalInset;
-(float)vibrationRecorderProgressViewAccessibilityAdditionalHeight;
-(UIColor *)vibrationRecorderRippleViewBackgroundColor;
-(float)vibrationRecorderRippleRingLineWidth;
-(float)vibrationRecorderRippleInitialRadius;
-(float)vibrationRecorderRippleFinalRadius;
-(float)vibrationRecorderRippleFingerStillSpeed;
-(float)vibrationRecorderRippleFingerMovingSpeed;

@end

