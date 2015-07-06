/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIControl.h>

@class NSLayoutConstraint, UILabel;

@interface TPStarkPhoneCallViewCell : UIControl {

	NSLayoutConstraint* _containerSpecificLeftConstraint;
	NSLayoutConstraint* _containerSpecificRightConstraint;
	UILabel* _mainLabel;
	UILabel* _subtitleLabel;

}

@property (retain) NSLayoutConstraint * containerSpecificLeftConstraint;               //@synthesize containerSpecificLeftConstraint=_containerSpecificLeftConstraint - In the implementation block
@property (retain) NSLayoutConstraint * containerSpecificRightConstraint;              //@synthesize containerSpecificRightConstraint=_containerSpecificRightConstraint - In the implementation block
@property (retain) UILabel * mainLabel;                                                //@synthesize mainLabel=_mainLabel - In the implementation block
@property (retain) UILabel * subtitleLabel;                                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setDimmed:(char)arg1 animated:(char)arg2 ;
-(UILabel *)mainLabel;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 animated:(char)arg3 ;
-(NSLayoutConstraint *)containerSpecificLeftConstraint;
-(void)setContainerSpecificLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerSpecificRightConstraint;
-(void)setContainerSpecificRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMainLabel:(UILabel *)arg1 ;
@end

