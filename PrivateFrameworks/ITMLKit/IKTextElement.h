/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextParser, IKViewElementFactory, NSMutableArray, NSAttributedString, NSArray, UIColor;

@interface IKTextElement : IKViewElement {

	IKTextParser* _textParser;
	IKViewElementFactory* _elementFactory;
	NSMutableArray* _textBadges;
	unsigned _textStyle;

}

@property (nonatomic,retain,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) NSArray * badges; 
@property (nonatomic,readonly) unsigned textStyle;                            //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) int maxLines; 
@property (nonatomic,readonly) unsigned alignment; 
@property (nonatomic,readonly) UIColor * color; 
+(char)shouldParseChildDOMElements;
-(id)textAttributes;
-(NSAttributedString *)text;
-(unsigned)alignment;
-(UIColor *)color;
-(unsigned)textStyle;
-(unsigned)_styleForTagName:(id)arg1 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(int)arg3 ;
-(id)attributedStringWithFont:(id)arg1 ;
-(int)maxLines;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)accessibilityText;
-(NSArray *)badges;
@end

