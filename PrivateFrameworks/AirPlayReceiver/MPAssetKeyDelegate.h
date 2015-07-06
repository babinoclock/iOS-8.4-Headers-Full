/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPAssetKeyDelegate <NSObject>
@optional
-(id)mapTileCenteredAt:(id)arg1 size:(CGSize)arg2 inset:(CGSize)arg3;
-(id)mapTileForPath:(id)arg1;
-(id)flightPlanFrom:(CGPoint)arg1 to:(CGPoint)arg2;
-(CGSize*)resolutionForAssetKey:(id)arg1;
-(id)relativePathForAssetWithAttributes:(id)arg1;
-(id)relativeTiledPathsForAssetWithAttributes:(id)arg1;
-(id)attributeForKey:(id)arg1 forAssetKey:(id)arg2 withOptions:(id)arg3;
-(id)attributesforAssetPath:(id)arg1;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3;
-(CGImageRef)retainedThumbnailCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(char)arg4 now:(char)arg5;
-(id)imageDataForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)detectRegionsOfInterestForAssetKey:(id)arg1;
-(IOSurfaceRef)retainedIOSurfaceForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(IOSurfaceRef)retainedIOSurfaceForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3;
-(CGImageRef)cgImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;

@required
-(id)absolutePathForAssetKey:(id)arg1;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2;

@end

