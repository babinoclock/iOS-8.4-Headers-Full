/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface PKPassPaymentSummaryHeaderView : UIView {

	UILabel* _titleLabel;

}

@property (nonatomic,retain) NSString * title; 
+(float)preferredHeight;
+(id)_titleFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

