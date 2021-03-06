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
#import <CorePDF/CPGraphicUser.h>

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {

	CGRect tableBounds;
	unsigned rowCount;
	float* rowY;
	unsigned columnCount;
	float* columnX;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;
	unsigned usedGraphicCount;
	char disposed;

}

@property (nonatomic,readonly) CGRect tableBounds; 
@property (assign,nonatomic) unsigned rowCount; 
@property (nonatomic,readonly) float* rowY; 
@property (assign,nonatomic) unsigned columnCount; 
@property (nonatomic,readonly) float* columnX; 
@property (nonatomic,readonly) unsigned backgroundGraphicCount; 
-(id)initWithBounds:(CGRect)arg1 ;
-(void)dealloc;
-(CGColorRef)backgroundColor;
-(unsigned)columnCount;
-(void)setColumnCount:(unsigned)arg1 ;
-(void)dispose;
-(CGRect)tableBounds;
-(void)incrementUsedGraphicCount;
-(unsigned)usedGraphicCount;
-(float*)rowY;
-(float*)columnX;
-(void)setRowCount:(unsigned)arg1 ;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
-(unsigned)rowCount;
-(void)finalize;
@end

