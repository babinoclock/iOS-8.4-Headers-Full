/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData, _CUIThemePixelRendition, _CSIRenditionBlockData, NSString;

@interface CSIHelper : NSObject {

	slice slice;
	NSData* csiData;
	csibitmap* bmp;
	int renditionLock;
	_CUIThemePixelRendition* rendition;
	_CSIRenditionBlockData* sharedBlockDataBGRX;
	_CSIRenditionBlockData* sharedBlockDataRGBX;
	NSString* blockDataCacheKeyBGRX;
	NSString* blockDataCacheKeyRGBX;
	unsigned long sourceRowbytes;

}
@end

