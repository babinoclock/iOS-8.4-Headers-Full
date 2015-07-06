/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/NSCopying.h>

@class UIColor, NSArray;

@interface IKColor : NSObject <NSCopying> {

	UIColor* _color;
	NSArray* _gradientColors;
	int _colorType;
	int _gradientType;
	int _gradientDirectionType;

}

@property (nonatomic,retain) UIColor * color;                        //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) int colorType;                          //@synthesize colorType=_colorType - In the implementation block
@property (nonatomic,copy) NSArray * gradientColors;                 //@synthesize gradientColors=_gradientColors - In the implementation block
@property (assign,nonatomic) int gradientDirectionType;              //@synthesize gradientDirectionType=_gradientDirectionType - In the implementation block
@property (assign,nonatomic) int gradientType;                       //@synthesize gradientType=_gradientType - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
-(void)setColorType:(int)arg1 ;
-(void)setGradientType:(int)arg1 ;
-(void)setGradientDirectionType:(int)arg1 ;
-(int)colorType;
-(int)gradientDirectionType;
-(int)gradientType;
@end
