/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPColumn : CPRegion {

	char hasCentredParagraph;
	char hasColumnBreak;
	float maxLeftPad;
	float maxRightPad;
	float maxRight;
	float minLeft;
	char complete;

}

@property (assign) char complete; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setComplete:(char)arg1 ;
-(char)complete;
-(void)accept:(id)arg1 ;
-(CGRect)columnBounds;
-(float)leftPad;
-(float)rightPad;
-(float)selectionBottom;
-(void)setHasColumnBreak:(char)arg1 ;
-(char)isBoxRegion;
-(char)isGraphicalRegion;
-(char)isRowRegion;
-(void)setIsImageRegion:(char)arg1 ;
-(char)isImageRegion;
-(char)isShapeRegion;
-(float)bottomBaseline;
-(char)hasCentredParagraph;
-(void)setHasCentredParagraph:(char)arg1 ;
-(float)maxLeftPad;
-(void)setMaxLeftPad:(float)arg1 ;
-(float)maxRightPad;
-(void)setMaxRightPad:(float)arg1 ;
-(CGRect)paddedBounds;
-(int)outOrder;
-(int)inOrder;
@end

