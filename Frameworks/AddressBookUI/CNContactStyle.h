/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor;

@interface CNContactStyle : NSObject {

	char _usesOpaqueBackground;
	UIColor* _textColor;
	UIColor* _placeholderTextColor;
	UIColor* _backgroundColor;
	UIColor* _separatorColor;
	UIColor* _sectionBackgroundColor;
	UIColor* _selectedCellBackgroundColor;
	int _separatorStyle;
	int _barStyle;
	int _separatorBackdropOverlayBlendMode;
	int _keyboardAppearance;

}

@property (nonatomic,retain) UIColor * textColor;                                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) UIColor * placeholderTextColor;                   //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                           //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIColor * sectionBackgroundColor;                   //@synthesize sectionBackgroundColor=_sectionBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedCellBackgroundColor;              //@synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                 //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) int barStyle;                                       //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) char usesOpaqueBackground;                          //@synthesize usesOpaqueBackground=_usesOpaqueBackground - In the implementation block
@property (assign,nonatomic) int separatorBackdropOverlayBlendMode;              //@synthesize separatorBackdropOverlayBlendMode=_separatorBackdropOverlayBlendMode - In the implementation block
@property (assign,nonatomic) int keyboardAppearance;                             //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
-(UIColor *)sectionBackgroundColor;
-(void)setSectionBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)selectedCellBackgroundColor;
-(void)setSelectedCellBackgroundColor:(UIColor *)arg1 ;
-(void)setUsesOpaqueBackground:(char)arg1 ;
-(void)setSeparatorBackdropOverlayBlendMode:(int)arg1 ;
-(char)usesOpaqueBackground;
-(int)separatorBackdropOverlayBlendMode;
-(UIColor *)placeholderTextColor;
-(void)dealloc;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(int)barStyle;
-(UIColor *)separatorColor;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(int)separatorStyle;
-(UIColor *)textColor;
-(int)keyboardAppearance;
-(void)setKeyboardAppearance:(int)arg1 ;
@end

