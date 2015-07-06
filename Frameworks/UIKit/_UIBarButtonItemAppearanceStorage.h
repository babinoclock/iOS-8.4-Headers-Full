/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor, NSValue, _UIBarBackButtonItemAppearanceStorage;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {

	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	UIColor* tintColor;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;
	_UIBarBackButtonItemAppearanceStorage* backButtonAppearance;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSValue * titlePositionOffset; 
@property (nonatomic,retain) NSValue * miniTitlePositionOffset; 
@property (nonatomic,retain) NSValue * backButtonTitlePositionOffset; 
@property (nonatomic,retain) NSValue * miniBackButtonTitlePositionOffset; 
-(void)dealloc;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)backgroundImageForState:(unsigned)arg1 style:(int)arg2 isMini:(char)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 style:(int)arg3 isMini:(char)arg4 ;
-(id)backButtonBackgroundImageForState:(unsigned)arg1 isMini:(char)arg2 ;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned)arg2 isMini:(char)arg3 ;
-(id)anyBackgroundImage;
-(NSValue *)miniTitlePositionOffset;
-(NSValue *)titlePositionOffset;
-(float)backgroundVerticalAdjustmentForBarMetrics:(int)arg1 ;
-(void)setBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(void)setMiniTitlePositionOffset:(NSValue *)arg1 ;
-(void)setTitlePositionOffset:(NSValue *)arg1 ;
-(id)anyBackButtonBackgroundImage;
-(NSValue *)miniBackButtonTitlePositionOffset;
-(NSValue *)backButtonTitlePositionOffset;
-(float)backButtonBackgroundVerticalAdjustmentForBarMetrics:(int)arg1 ;
-(void)setBackButtonBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(void)setMiniBackButtonTitlePositionOffset:(NSValue *)arg1 ;
-(void)setBackButtonTitlePositionOffset:(NSValue *)arg1 ;
@end

