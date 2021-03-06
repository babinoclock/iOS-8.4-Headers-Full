/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDRowBlocks, EDRowBlock;

@interface EDCellIterator : NSObject {

	EDRowBlocks* mRowBlocks;
	EDRowBlock* mCurrentRowBlock;
	EDRowInfo* mCurrentRowInfo;
	unsigned mCurrentRowInfoIndex;
	EDCellHeader* mCurrentCell;
	unsigned mCurrentCellIndex;
	unsigned mDesiredRowNumber;
	unsigned mDesiredColumnNumber;

}
-(void)dealloc;
-(id)initWithWorksheet:(id)arg1 ;
-(EDCellHeader*)adjacentCell:(int)arg1 ;
-(EDCellHeader*)adjacentCellLeft;
-(EDCellHeader*)adjacentCellRight;
-(EDCellHeader*)scanToRowNumber:(unsigned)arg1 columnNumber:(unsigned)arg2 ;
@end

