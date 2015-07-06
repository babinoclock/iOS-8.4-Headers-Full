/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDTable, WMBordersProperty, WMTableStyle, WMTableColumnInfo;

@interface WMTableMapper : CMMapper {

	WDTable* mWdTable;
	WMBordersProperty* mInsideBorders;
	WMTableStyle* mStyle;
	WMTableColumnInfo* mColumnInfo;

}
+(char)isTableDeleted:(id)arg1 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDTable:(id)arg1 parent:(id)arg2 ;
-(id)columnInfo;
-(id)insideBorders;
-(id)copyColumnInfo;
-(void)setInsideBorders:(id)arg1 ;
-(id)copyStopArrayForRow:(unsigned)arg1 ;
@end

