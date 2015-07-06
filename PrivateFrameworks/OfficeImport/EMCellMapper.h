/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class EDReference;

@interface EMCellMapper : CMMapper {

	EDCellHeader* edCell;
	EDReference* edMergedCellReference;
	int rowNumber;
	int firstColumn;
	int lastColumn;
	int columnSpan;
	char firstCellFlag;
	char spreadLeftFlag;
	double columnWidth;

}
+(char)isCellEmpty:(EDCellHeader*)arg1 ;
-(double)columnWidth;
-(int)lastColumn;
-(int)firstColumn;
-(void)mapRowColSpansAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithEDCell:(EDCellHeader*)arg1 rowInfo:(EDRowInfo*)arg2 parent:(id)arg3 state:(id)arg4 ;
-(void)setLastColumn:(int)arg1 ;
-(void)setFirstColumn:(int)arg1 ;
-(void)resetColumnSpan:(int)arg1 ;
-(char)isCellEmpty;
-(void)setFirstCellFlag;
-(char)isFirstCell;
-(char)isCellSpreading:(id)arg1 ;
-(char)isCellMerged;
-(void)adjustColumnSpanForGrid:(double*)arg1 columnCount:(unsigned)arg2 nextCell:(EDCellHeader*)arg3 withState:(id)arg4 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3 nextCell:(EDCellHeader*)arg4 ;
-(id)mapHyperlinkAt:(id)arg1 ;
-(int)columnSpan;
-(id)initWithParent:(id)arg1 ;
@end
