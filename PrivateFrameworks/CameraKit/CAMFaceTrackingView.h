/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CAMFocusView.h>

@interface CAMFaceTrackingView : CAMFocusView {

	char _isInFrame;

}

@property (assign,nonatomic) char isInFrame;              //@synthesize isInFrame=_isInFrame - In the implementation block
-(id)init;
-(void)fadeOut;
-(void)fadeIn;
-(double)fadeOutDuration;
-(void)_loadImagesWithColor:(id)arg1 imageSize:(CGSize*)arg2 ;
-(id)_createContentsAnimation;
-(id)_createBoundsAnimation;
-(void)setIsInFrame:(char)arg1 ;
-(char)isInFrame;
-(void)animateToFrame:(CGRect)arg1 ;
@end

