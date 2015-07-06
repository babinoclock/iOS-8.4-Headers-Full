/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPRegion : CPChunk {

	char isTextRegion;
	char isImageRegion;
	char isCompoundShape;
	CPRegion* nextRegion;
	int order;
	id link;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isRotated;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(void)setLink:(id)arg1 ;
-(id)link;
-(void)accept:(id)arg1 ;
-(char)isIndivisible;
-(char)isBoxRegion;
-(char)isGraphicalRegion;
-(char)isRowRegion;
-(void)setIsImageRegion:(char)arg1 ;
-(char)isImageRegion;
-(char)isShapeRegion;
-(char)isParagraphRegion;
-(char)isListItemRegion;
-(char)isTextRegion;
-(void)setIsTextRegion:(char)arg1 ;
-(char)isTableCellRegion;
-(char)isBodyZone;
-(char)isCompoundShape;
-(void)setIsCompoundShape:(char)arg1 ;
-(char)isZone;
-(id)nextRegion;
-(void)setNextRegion:(id)arg1 ;
@end

