/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIMorphingLabelGlyphSet, NSMutableArray, UIView, _UIViewAnimationAttributes, NSString, UIFont, UIColor;

@interface UIMorphingLabel : UIView {

	UIMorphingLabelGlyphSet* _srcGlyphSet;
	UIMorphingLabelGlyphSet* _dstGlyphSet;
	NSMutableArray* _hiddenGlyphViews;
	UIView* _colorView;
	NSRange _memo[5151];
	SCD_Struct_UI89 _alignment[100];
	unsigned _alignmentSize;
	float _alignmentDelays[100];
	_UIViewAnimationAttributes* _textAnimationAttributes;
	_UIViewAnimationAttributes* _textColorAnimationAttributes;
	float _lastUpdateTime;
	float _slowdown;
	float _rippleFactor;
	float _scaleFactor;
	char _isDoingFastAnimation;
	char _textDidChange;
	char _textColorDidChange;
	char _suppressLayoutSubviews;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	int _textAlignment;
	CGRect _visibleRect;

}

@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) int textAlignment;                        //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                       //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) char suppressLayoutSubviews;              //@synthesize suppressLayoutSubviews=_suppressLayoutSubviews - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(int)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(int)textAlignment;
-(CGRect)visibleRect;
-(id)attributedString;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)setSuppressLayoutSubviews:(char)arg1 ;
-(id)glyphViewWithImage:(id)arg1 isColorGlyph:(char)arg2 ;
-(float)flushAmount;
-(void)hideGlyph:(id)arg1 ;
-(void)baseInit;
-(float)alphaForFrame:(CGRect)arg1 ;
-(unsigned)calculateHardAlignment:(SCD_Struct_UI90*)arg1 size:(unsigned)arg2 fromGlyphs:(const unsigned short*)arg3 count:(unsigned)arg4 toGlyphs:(const unsigned short*)arg5 count:(unsigned)arg6 ;
-(float)currentMediaTime;
-(id)uniqueStringWithPrefix:(id)arg1 ;
-(void)animateShowGlyph:(id)arg1 alpha:(float)arg2 alphaDuration:(float)arg3 delay:(float)arg4 ;
-(void)animateGlyph:(id)arg1 toScale:(float)arg2 delay:(float)arg3 ;
-(void)animateGlyph:(id)arg1 toAlpha:(float)arg2 duration:(float)arg3 delay:(float)arg4 ;
-(float)totalRightOffsetForAlignmentHunkAtIndex:(unsigned)arg1 ;
-(float)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)animateGlyph:(id)arg1 toPosition:(CGPoint)arg2 delay:(float)arg3 ;
-(float)changeInWidthDueToAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)animateGlyphsInRange:(NSRange)arg1 ofGlyphSet:(id)arg2 byOffset:(float)arg3 delay:(float)arg4 ;
-(void)animateHideGlyph:(id)arg1 alphaDuration:(float)arg2 delay:(float)arg3 ;
-(void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2 ;
-(void)initInsertionAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)initDeletionAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)initSubstitutionAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)initMovementAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)animateInsertionAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)animateDeletionAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)animateSubstitutionAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)animateMovementAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)calculateGlyphAlignment;
-(void)initAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned)arg1 ;
-(void)animateAlignmentHunkAtIndex:(unsigned)arg1 ;
-(id)attributedStringForText:(id)arg1 ;
-(char)suppressLayoutSubviews;
-(void)animateGlyphs;
-(void)animateTextColor;
-(float)requiredWidthForText:(id)arg1 ;
-(void)animateShowGlyph:(id)arg1 alphaDuration:(float)arg2 delay:(float)arg3 ;
-(char)canFitText:(id)arg1 ;
@end

