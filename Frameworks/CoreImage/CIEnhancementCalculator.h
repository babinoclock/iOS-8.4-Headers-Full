/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIEnhancementCalculation.h>

@interface CIEnhancementCalculator : CIEnhancementCalculation {

	char faceBalanceEnabled;
	char vibranceEnabled;
	char curvesEnabled;
	char shadowsEnabled;

}

@property (assign) char faceBalanceEnabled; 
@property (assign) char vibranceEnabled; 
@property (assign) char curvesEnabled; 
@property (assign) char shadowsEnabled; 
-(void)setFaceBalanceEnabled:(char)arg1 ;
-(void)setVibranceEnabled:(char)arg1 ;
-(void)setCurvesEnabled:(char)arg1 ;
-(void)setShadowsEnabled:(char)arg1 ;
-(char)faceBalanceEnabled;
-(void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3 ;
-(void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4 ;
-(char)vibranceEnabled;
-(char)curvesEnabled;
-(char)shadowsEnabled;
-(void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3 ;
-(id)histogramFromRows:(id)arg1 componentOffset:(unsigned)arg2 ;
-(id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end
