/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion {

	char isFirstLayout;

}
-(id)init;
-(id)description;
-(id)properties;
-(void)accept:(id)arg1 ;
-(float)selectionBottom;
-(char)isBoxRegion;
-(char)isGraphicalRegion;
-(char)isRowRegion;
-(void)setIsImageRegion:(char)arg1 ;
-(char)isImageRegion;
-(char)isShapeRegion;
-(CGRect)layoutAreaBounds;
-(char)isSimilarTo:(id)arg1 ;
-(char)isFirstLayout;
-(void)setIsFirstLayout:(char)arg1 ;
-(void)addColumnBreaks;
@end

