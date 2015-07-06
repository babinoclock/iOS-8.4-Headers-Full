/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>

@interface CPImage : CPGraphicObject {

	CPPDFImage* imageData;
	char renderedBoundsComputed;

}
-(id)initWithBounds:(CGRect)arg1 ;
-(CGRect)bounds;
-(char)isVisible;
-(id)initWithPDFImage:(CPPDFImage*)arg1 ;
-(long)zOrder;
-(CGRect)renderedBounds;
-(void)accept:(id)arg1 ;
-(void)recomputeRenderedBounds;
-(CPPDFImage*)imageData;
@end
