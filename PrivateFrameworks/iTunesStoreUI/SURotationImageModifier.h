/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SURotationImageModifier : SUImageModifier {

	float _degrees;
	int _orientation;

}

@property (assign,nonatomic) float degrees;                //@synthesize degrees=_degrees - In the implementation block
@property (assign,nonatomic) int orientation;              //@synthesize orientation=_orientation - In the implementation block
-(char)isEqual:(id)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)drawBeforeImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(float)degrees;
-(void)setDegrees:(float)arg1 ;
@end

