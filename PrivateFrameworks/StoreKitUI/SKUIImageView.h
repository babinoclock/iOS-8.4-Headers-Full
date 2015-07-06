/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UITapGestureRecognizer;

@interface SKUIImageView : UIImageView {

	CGSize _imageSize;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (assign,nonatomic) CGSize imageSize;                                      //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapRecognizer; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)drawDecorationsWithImageRect:(CGRect)arg1 ;
@end
