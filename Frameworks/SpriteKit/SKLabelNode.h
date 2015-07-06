/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSString, SKBitmapFont, NSMutableArray, UIColor, SKSpriteNode;

@interface SKLabelNode : SKNode {

	float _fontSize;
	SCD_Struct_SK21 _fontColor;
	NSString* _fontName;
	NSString* _text;
	SKBitmapFont* _bmf;
	NSMutableArray* _textSprites;
	UIColor* _labelColor;
	float _labelColorBlend;
	int _labelBlendMode;
	SKSpriteNode* _textSprite;
	int _horizontalAlignmentMode;
	int _verticalAlignmentMode;
	CGRect _textRect;

}

@property (assign,nonatomic) int verticalAlignmentMode; 
@property (assign,nonatomic) int horizontalAlignmentMode; 
@property (nonatomic,copy) NSString * fontName; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) float fontSize; 
@property (nonatomic,retain) UIColor * fontColor; 
@property (assign,nonatomic) float colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) int blendMode; 
+(id)labelNodeWithFontNamed:(id)arg1 ;
+(id)labelNodeWithText:(id)arg1 ;
+(id)_labelNodeWithFontNamed:(id)arg1 ;
+(id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2 ;
-(id)nodeAtPoint:(CGPoint)arg1 recursive:(char)arg2 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(float)colorBlendFactor;
-(void)setColorBlendFactor:(float)arg1 ;
-(char)isEqualToNode:(id)arg1 ;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(char)arg1 to:(char)arg2 ;
-(id)nodesAtPoint:(CGPoint)arg1 ;
-(id)childrenInRect:(CGRect)arg1 ;
-(id)_getTextSprites;
-(void)createSpritesForText;
-(int)verticalAlignmentMode;
-(int)horizontalAlignmentMode;
-(id)initWithFontNamed:(id)arg1 ;
-(void)setHorizontalAlignmentMode:(int)arg1 ;
-(void)setVerticalAlignmentMode:(int)arg1 ;
-(void)createBitmapSpritesForText;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(CGRect)frame;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)color;
-(NSString *)fontName;
-(void)setColor:(UIColor *)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(float)fontSize;
-(void)_initialize;
-(UIColor *)fontColor;
-(void)setFontColor:(UIColor *)arg1 ;
@end

