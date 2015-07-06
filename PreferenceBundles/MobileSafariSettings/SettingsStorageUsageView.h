/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MobileSafariSettings/PSHeaderFooterView.h>

@class UILabel;

@interface SettingsStorageUsageView : UIView <PSHeaderFooterView> {

	UILabel* _usedLabel;
	UILabel* _titleLabel;
	float _height;

}
+(id)groupSpecifierWithTitle:(id)arg1 totalUsage:(id)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)layoutSubviews;
-(void)setUsageText:(id)arg1 ;
@end

