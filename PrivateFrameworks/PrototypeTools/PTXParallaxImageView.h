/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTXParallaxView.h>

@class UIImageView, UIImage;

@interface PTXParallaxImageView : PTXParallaxView {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * image; 
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(id)initWithImage:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3 ;
@end

