/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionSliceInformation, CUIRenditionMetrics;

@interface CUIMutableThemeRendition : CUIThemeRendition {

	renditionkeytoken* _renditionKey;
	CGImageRef _image;
	CUIRenditionSliceInformation* _sliceInformation;
	CUIRenditionMetrics* _renditionMetrics;

}
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(const renditionkeytoken*)key;
-(id)metrics;
-(id)initWithCGImage:(CGImageRef)arg1 withDescription:(id)arg2 forKey:(const renditionkeytoken*)arg3 ;
-(CGImageRef)unslicedImage;
-(id)sliceInformation;
@end
