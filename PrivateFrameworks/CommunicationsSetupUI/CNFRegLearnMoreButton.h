/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIButton.h>

@class NSString;

@interface CNFRegLearnMoreButton : UIButton {

	int _style;
	NSString* _buttonText;
	char _alwaysUnderline;
	char _usesImage;

}

@property (assign,nonatomic) int style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * buttonText;               //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic) char alwaysUnderline;              //@synthesize alwaysUnderline=_alwaysUnderline - In the implementation block
@property (assign,nonatomic) char usesImage;                    //@synthesize usesImage=_usesImage - In the implementation block
+(id)roundedButtonWithText:(id)arg1 color:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setSelected:(char)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setUsesImage:(char)arg1 ;
-(void)setAlwaysUnderline:(char)arg1 ;
-(void)_setupLearnMoreTextForCurrentStyle;
-(void)_setupArrowImageForCurrentStyle;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 text:(id)arg3 ;
-(char)usesImage;
-(char)alwaysUnderline;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end
