/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:53 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITextField.h>

@class _UILegibilityView, _UILegibilitySettings;

@interface SBFolderTitleTextField : UITextField {

	char _showingEditUI;
	_UILegibilityView* _legibilityView;
	char _allowsEditing;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) char allowsEditing;                                      //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) float fontSize; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
+(void)warmupIfNecessary;
+(id)_editBackgroundImage;
+(id)_clearButtonImage;
-(void)_updateLegibility;
-(id)_clearButtonImage;
-(float)_legibilityStrength;
-(CGRect)_textRectForBounds:(CGRect)arg1 ;
-(void)setShowsEditUI:(char)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(id)_backgroundImage;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(float)fontSize;
-(void)_updateLegibilityView;
@end

