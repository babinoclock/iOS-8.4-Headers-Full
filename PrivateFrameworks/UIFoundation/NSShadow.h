/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSCopying.h>
#import <UIFoundation/NSCoding.h>

@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSCoding> {

	unsigned _shadowFlags;
	CGSize _shadowOffset;
	float _shadowBlurRadius;
	NSColor* _shadowColor;

}

@property (assign,nonatomic) CGSize shadowOffset;                 //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) float shadowBlurRadius;              //@synthesize shadowBlurRadius=_shadowBlurRadius - In the implementation block
@property (nonatomic,retain) id shadowColor; 
+(void)initialize;
+(id)shadow;
+(id)defaultShadowColor;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(id)shadowColor;
-(void)setShadowBlurRadius:(float)arg1 ;
-(float)shadowBlurRadius;
-(id)initWithShadow:(id)arg1 ;
@end

