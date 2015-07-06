/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLCropModel : NSObject {

	CGSize _nsqPhotoSize;
	float _angle;
	float _cropConstrain;
	CGSize _photoSize;
	CGRect _cropRect;

}

@property (readonly) CGSize photoSize;               //@synthesize photoSize=_photoSize - In the implementation block
@property (assign) float angle;                      //@synthesize angle=_angle - In the implementation block
@property (assign) CGRect cropRect;                  //@synthesize cropRect=_cropRect - In the implementation block
@property (assign) float cropConstrain;              //@synthesize cropConstrain=_cropConstrain - In the implementation block
+(char)validateCropRectFor0Angle:(CGRect)arg1 ;
-(CGSize)photoSize;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)reset;
-(id)initWithSize:(CGSize)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(id)initWithModel:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 andDictionary:(id)arg2 ;
-(CGSize)croppedSize;
-(CGAffineTransform)CGAffineTransform;
-(CGSize)croppedSizeForSize:(CGSize)arg1 ;
-(CGAffineTransform)CGAffineTransformForSize:(CGSize)arg1 ;
-(void)setCropAndAngleFromCIAffineTransform:(CGAffineTransform)arg1 andCICrop:(CGRect)arg2 forSourceSize:(CGSize)arg3 ;
-(void)calculateCornerPoints:(CGPoint*)arg1 forCropRect:(CGRect)arg2 ;
-(CGImageRef)newRenderedCroppedImageFromImage:(CGImageRef)arg1 forSize:(CGSize)arg2 andOrientation:(int)arg3 ;
-(CGRect)maxAllowedPanWithCropRect:(CGRect)arg1 ;
-(CGRect)bestCropRectForIntialCropRect:(CGRect)arg1 inTrialRect:(CGRect)arg2 withFaceDictionaries:(id)arg3 ;
-(CGAffineTransform)ciAffineTransformForSourceSize:(CGSize)arg1 ;
-(CGRect)ciCropRectForSourceSize:(CGSize)arg1 ;
-(CGAffineTransform)transformForTrialCropRect:(CGRect)arg1 ;
-(int)scoreFaces:(id)arg1 ForTransform:(CGAffineTransform)arg2 ;
-(CGPoint)maxAllowableEdgeAdjustmentForDragAction:(int)arg1 withDirection:(CGPoint)arg2 andLockAspectRatio:(char)arg3 ;
-(void)adjustEdgeForDragAction:(int)arg1 withAmount:(CGPoint)arg2 andLockAspectRatio:(char)arg3 ;
-(void)changeCropAspectRatioTo:(float)arg1 withNewCropRect:(CGRect)arg2 ;
-(CGRect)normalizedIntersectionPointsForCropWithLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(CGRect)newCropRectForRatio:(float)arg1 withCropRect:(CGRect)arg2 andFaceDictionaries:(id)arg3 ;
-(CGImageRef)newAspectedPreviewFromImage:(CGImageRef)arg1 forSize:(CGSize)arg2 withNewCropRect:(CGRect)arg3 andOrientation:(int)arg4 ;
-(id)croppedImageFromImage:(id)arg1 ;
-(int)touchedImageSidesForCurrentCrop;
-(float)maxAllowedTranslateWithDirection:(float)arg1 ;
-(void)translate:(float)arg1 atAngle:(float)arg2 ;
-(float)maxAllowedScaleFromPoint:(CGPoint)arg1 scaleUp:(char)arg2 ;
-(void)scale:(float)arg1 fromPoint:(CGPoint)arg2 ;
-(float)maxAllowedRotationFromPoint:(CGPoint)arg1 counterClockwise:(char)arg2 ;
-(void)rotate:(float)arg1 fromPoint:(CGPoint)arg2 ;
-(float)cropConstrain;
-(void)calculateCornerPoints:(CGPoint*)arg1 ;
-(CGRect)recomputeCropRect:(CGRect)arg1 forStraightenAngle:(float)arg2 ;
-(CGImageRef)newRenderedCroppedImageFromImage:(CGImageRef)arg1 forSize:(CGSize)arg2 ;
-(void)setCropConstrain:(float)arg1 ;
-(char)hasCrop;
@end

