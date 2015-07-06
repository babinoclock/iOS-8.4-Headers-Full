/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLAssetFormats : NSObject
+(CGSize)sizeForFormat:(int)arg1 ;
+(char)formatIsCropped:(int)arg1 ;
+(char)formatIsFullscreen:(int)arg1 ;
+(char)formatIsReferringToLatestVersion:(int)arg1 ;
+(char)formatIsBadgedForVideo:(int)arg1 ;
+(unsigned)minShortSideForFullSizeFormat:(int)arg1 ;
+(unsigned)desiredLongSideForFullSizeFormat:(int)arg1 ;
+(unsigned)maxLongSideForFullSizeFormat:(int)arg1 ;
+(CGSize)scaledSizeForSize:(CGSize)arg1 format:(int)arg2 capLength:(char)arg3 ;
+(char)transformForImage:(CGImageRef)arg1 captureOrientation:(int)arg2 format:(int)arg3 sizeInOut:(CGSize*)arg4 contextSizeOut:(CGSize*)arg5 transformOut:(CGAffineTransform*)arg6 ;
+(char)formatSizeIsShortSide:(int)arg1 ;
+(id)descriptionForImageFormat:(int)arg1 ;
+(id)descriptionForVideoFormat:(int)arg1 ;
+(char)isAlbumVideoPath:(id)arg1 ;
+(int)bestFormatWithSize:(CGSize)arg1 contentMode:(int)arg2 demoteFactor:(double)arg3 srcAspectRatio:(double)arg4 isTableFormat:(char*)arg5 desiredImagePixelSize:(CGSize*)arg6 ;
@end

