/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIFoundation/NSConcreteTextStorage.h>

@class NSMutableDictionary, UIFont, UIColor, NSDictionary;

@interface _UICascadingTextStorage : NSConcreteTextStorage {

	NSMutableDictionary* _defaultAttributes;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) int lineBreakMode; 
@property (assign,nonatomic) float shadowBlur; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
+(id)defaultFont;
-(void)dealloc;
-(void)setTextAlignment:(int)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setLineBreakMode:(int)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(UIFont *)font;
-(UIColor *)textColor;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
-(int)textAlignment;
-(NSDictionary *)defaultAttributes;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(int)_ui_resolvedTextAlignment;
-(id)_defaultAttributes;
-(id)_shadow;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(int)lineBreakMode;
-(void)_setShadow:(id)arg1 ;
-(void)setShadowBlur:(float)arg1 ;
-(float)shadowBlur;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(char)_shouldSetOriginalFontAttribute;
-(void)_restoreOriginalFontAttribute;
@end

