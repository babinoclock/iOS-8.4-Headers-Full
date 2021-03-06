/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface FaceWrapper : NSObject {

	char _imageMirrored;
	char _smiling;
	char _blinking;
	int _imageWidth;
	int _imageHeight;
	int _size;
	int _screenOrientation;
	CGRect _bounds;

}

@property (assign,nonatomic) int imageWidth;                     //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) int imageHeight;                    //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) int size;                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGRect bounds;                      //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) int screenOrientation;              //@synthesize screenOrientation=_screenOrientation - In the implementation block
@property (assign,nonatomic) char imageMirrored;                 //@synthesize imageMirrored=_imageMirrored - In the implementation block
@property (assign,nonatomic) char smiling;                       //@synthesize smiling=_smiling - In the implementation block
@property (assign,nonatomic) char blinking;                      //@synthesize blinking=_blinking - In the implementation block
-(int)getFaceLocationOnScreen;
-(char)isLargeFace;
-(void)setScreenOrientation:(int)arg1 ;
-(void)setImageMirrored:(char)arg1 ;
-(char)blinking;
-(CGRect)getFaceCoordsInImage;
-(char)smiling;
-(void)setSmiling:(char)arg1 ;
-(CGRect)bounds;
-(int)size;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSize:(int)arg1 ;
-(int)getFaceLeftRightLocationInImage;
-(int)getFaceTopBottomLocationInImage;
-(int)computeFaceLocationUsingLeftRightLoc:(int)arg1 andTopBottomLoc:(int)arg2 ;
-(void)swap:(int*)arg1 with:(int*)arg2 ;
-(int)getFaceLocationInImage;
-(int)screenOrientation;
-(char)imageMirrored;
-(void)setBlinking:(char)arg1 ;
-(void)setImageWidth:(int)arg1 ;
-(void)setImageHeight:(int)arg1 ;
-(int)imageWidth;
-(int)imageHeight;
@end

