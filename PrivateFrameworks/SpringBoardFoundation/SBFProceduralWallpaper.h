/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoardFoundation/SBFProceduralWallpaper.h>

@protocol SBFProceduralWallpaper <NSObject>
@property (assign,nonatomic) id<SBFProceduralWallpaperDelegate> delegate; 
@optional
+(id)presetWallpaperOptions;
+(id)thumbnailImageForOptions:(id)arg1;
+(char)colorChangesSignificantly;
+(id)thumbnailImageName;
+(id)representativeThumbnailImageName;
-(void)setDelegate:(id)arg1;
-(id<SBFProceduralWallpaperDelegate>)delegate;
-(void)setWallpaperOptions:(id)arg1;
-(void)stopGeneratingBlurs;
-(void)stopComputingAverageColor;
-(void)setWallpaperVariant:(int)arg1;
-(id)averageColorForRect:(CGRect)arg1;
-(id)averageLifetimeColor;
-(void)startGeneratingBlursForRect:(CGRect)arg1;
-(IOSurfaceRef)copyBlurForRect:(inout CGRect*)arg1;
-(void)startComputingAverageColorForRect:(CGRect)arg1;

@required
+(id)identifier;
-(id)view;
-(void)setAnimating:(char)arg1;

@end


@class NSString;

@interface SBFProceduralWallpaper : UIView <SBFProceduralWallpaper>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBFProceduralWallpaperDelegate> delegate; 
+(id)identifier;
-(id)view;
-(void)setAnimating:(char)arg1 ;
@end
