/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation {

	CGColorRef _highLightColor;

}
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(Class)viewClass;
-(char)recognizeGestures;
-(void)drawLayerUpright:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned)arg4 ;
-(void)drawLayerRotated:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned)arg4 ;
-(int)annotationType;
@end

