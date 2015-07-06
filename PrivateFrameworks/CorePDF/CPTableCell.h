/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <CorePDF/CPDisposable.h>

@interface CPTableCell : CPChunk <CPDisposable> {

	CGRect cellBounds;
	SCD_Struct_CP15 rowSpan;
	SCD_Struct_CP15 columnSpan;
	SCD_Struct_CP16* borders;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;

}

@property (nonatomic,readonly) CGRect cellBounds; 
@property (assign,nonatomic) SCD_Struct_CP15 rowSpan; 
@property (assign,nonatomic) SCD_Struct_CP15 columnSpan; 
@property (nonatomic,readonly) unsigned backgroundGraphicCount; 
-(id)initWithBounds:(CGRect)arg1 ;
-(void)dealloc;
-(CGColorRef)backgroundColor;
-(void)dispose;
-(CGRect)cellBounds;
-(CGRect)boundsOfBorder:(int)arg1 ;
-(CGColorRef)colorOfBorder:(int)arg1 ;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
-(void)setBorder:(int)arg1 bounds:(CGRect)arg2 graphics:(id)arg3 ;
-(unsigned)graphicCountOfBorder:(int)arg1 ;
-(id)graphicObjectOfBorder:(int)arg1 atIndex:(unsigned)arg2 ;
-(int)compareCellOrdinal:(id)arg1 ;
-(void)setColumnSpan:(SCD_Struct_CP15)arg1 ;
-(void)finalize;
-(SCD_Struct_CP15)rowSpan;
-(void)setRowSpan:(SCD_Struct_CP15)arg1 ;
-(SCD_Struct_CP15)columnSpan;
@end

