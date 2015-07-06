/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UILabel;

@interface RegionFormatSampleView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	float _sized;
	float _labelTopPadding[4];

}
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTextForRegionExample:(id)arg1 ;
-(id)generateRegionSampleLabel;
-(id)_accessibilityLabels;
@end

