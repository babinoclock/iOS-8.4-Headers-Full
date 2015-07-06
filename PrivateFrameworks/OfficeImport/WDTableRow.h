/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDTable, WDTableRowProperties, NSMutableArray;

@interface WDTableRow : NSObject {

	unsigned mIndex;
	WDTable* mTable;
	WDTableRowProperties* mProperties;
	NSMutableArray* mCells;

}
-(void)dealloc;
-(id)description;
-(id)table;
-(unsigned)index;
-(id)properties;
-(void)setIndex:(unsigned)arg1 ;
-(unsigned)cellCount;
-(id)cellAt:(unsigned)arg1 ;
-(id)addCell;
-(id)initWithTable:(id)arg1 at:(unsigned)arg2 ;
-(id)cellIterator;
-(id)newCellIterator;
-(id)addCellWithIndex:(unsigned)arg1 ;
@end

