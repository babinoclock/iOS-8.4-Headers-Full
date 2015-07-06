/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDResources, NSString, EDReference, EDCollection;

@interface EDPivotTable : NSObject {

	EDResources* mResources;
	BOOL mShowLastColumn;
	BOOL mShowRowHeaders;
	BOOL mShowColumnHeaders;
	BOOL mShowRowStripes;
	BOOL mShowColumnStripes;
	BOOL mApplyNumberFormats;
	BOOL mApplyBorderFormats;
	BOOL mApplyFontFormats;
	BOOL mApplyPatternFormats;
	BOOL mApplyAlignmentFormats;
	BOOL mApplyWidthHeightFormats;
	BOOL mUseAutoFormatting;
	BOOL mColGrandTotals;
	BOOL mRowGrandTotals;
	BOOL mCustomListSort;
	BOOL mCompactData;
	BOOL mCompact;
	BOOL mDataCaption;
	BOOL mDataOnRows;
	BOOL mDisableFieldList;
	BOOL mMergeItem;
	BOOL mMultipleFieldFilters;
	BOOL mOutline;
	BOOL mOutlineData;
	BOOL mPageOverThenDown;
	BOOL mShowCalcMbrs;
	BOOL mShowDataDropDown;
	BOOL mShowDropZones;
	BOOL mShowEmptyCol;
	BOOL mShowEmptyRow;
	BOOL mShowHeaders;
	BOOL mShowMemberPropertyTips;
	BOOL mShowMissing;
	BOOL mShowMultipleLabel;
	BOOL mSubtotalHiddenItems;
	NSString* mName;
	NSString* mStyleName;
	NSString* mColumnHeaderCaption;
	NSString* mRowHeaderCaption;
	NSString* mPageStyleName;
	EDReference* mPivotTableRange;
	unsigned mStyleIndex;
	long mFirstHeaderRow;
	long mFirstDataRow;
	long mFirstDataColumn;
	unsigned long mRowPageCount;
	unsigned long mColumnPageCount;
	unsigned long mPageWrap;
	unsigned long mAutoFormatId;
	unsigned long mDataPosition;
	EDCollection* mRowFields;
	EDCollection* mColumnFields;
	EDCollection* mRowItems;
	EDCollection* mColumnItems;
	EDCollection* mPivotFields;
	EDCollection* mDataFields;
	EDCollection* mConditionalFields;
	EDCollection* mPivotAreas;
	EDCollection* mPageFields;

}
+(id)pivotTableWithResources:(id)arg1 ;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(unsigned)styleIndex;
-(id)initWithResources:(id)arg1 ;
-(void)setStyleIndex:(unsigned)arg1 ;
-(id)columnHeaderCaption;
-(id)rowHeaderCaption;
-(id)pageStyleName;
-(unsigned long)rowPageCount;
-(unsigned long)columnPageCount;
-(unsigned long)pageWrap;
-(unsigned long)autoFormatId;
-(unsigned long)dataPosition;
-(BOOL)applyNumberFormats;
-(BOOL)applyBorderFormats;
-(BOOL)applyFontFormats;
-(BOOL)applyPatternFormats;
-(BOOL)applyAlignmentFormats;
-(BOOL)applyWidthHeightFormats;
-(BOOL)colGrandTotals;
-(BOOL)useAutoFormatting;
-(BOOL)rowGrandTotals;
-(BOOL)customListSort;
-(BOOL)compactData;
-(BOOL)dataCaption;
-(BOOL)dataOnRows;
-(BOOL)disableFieldList;
-(BOOL)mergeItem;
-(BOOL)multipleFieldFilters;
-(BOOL)outlineData;
-(BOOL)pageOverThenDown;
-(BOOL)showCalcMbrs;
-(BOOL)showDataDropDown;
-(BOOL)showDropZones;
-(BOOL)showEmptyCol;
-(BOOL)showEmptyRow;
-(BOOL)showHeaders;
-(BOOL)showMemberPropertyTips;
-(BOOL)showMissing;
-(BOOL)showMultipleLabel;
-(BOOL)subtotalHiddenItems;
-(id)pivotAreas;
-(void)setStyleName:(id)arg1 ;
-(BOOL)showLastColumn;
-(void)setShowLastColumn:(BOOL)arg1 ;
-(BOOL)showRowStripes;
-(void)setShowRowStripes:(BOOL)arg1 ;
-(BOOL)showColumnStripes;
-(void)setShowColumnStripes:(BOOL)arg1 ;
-(BOOL)showColumnHeaders;
-(BOOL)showRowHeaders;
-(id)rowItems;
-(id)columnItems;
-(id)pivotTableRange;
-(long)firstHeaderRow;
-(long)firstDataRow;
-(long)firstDataColumn;
-(id)rowFields;
-(id)columnFields;
-(id)pageFields;
-(id)pivotFields;
-(id)dataFields;
-(id)conditionalFormats;
-(void)setColumnHeaderCaption:(id)arg1 ;
-(void)setRowHeaderCaption:(id)arg1 ;
-(void)setPageStyleName:(id)arg1 ;
-(void)setApplyNumberFormats:(BOOL)arg1 ;
-(void)setApplyBorderFormats:(BOOL)arg1 ;
-(void)setApplyFontFormats:(BOOL)arg1 ;
-(void)setApplyPatternFormats:(BOOL)arg1 ;
-(void)setApplyAlignmentFormats:(BOOL)arg1 ;
-(void)setApplyWidthHeightFormats:(BOOL)arg1 ;
-(void)setColGrandTotals:(BOOL)arg1 ;
-(void)setUseAutoFormatting:(BOOL)arg1 ;
-(void)setRowGrandTotals:(BOOL)arg1 ;
-(void)setCustomListSort:(BOOL)arg1 ;
-(void)setCompactData:(BOOL)arg1 ;
-(void)setDataCaption:(BOOL)arg1 ;
-(void)setDataOnRows:(BOOL)arg1 ;
-(void)setMergeItem:(BOOL)arg1 ;
-(void)setDisableFieldList:(BOOL)arg1 ;
-(void)setMultipleFieldFilters:(BOOL)arg1 ;
-(void)setOutlineData:(BOOL)arg1 ;
-(void)setPageOverThenDown:(BOOL)arg1 ;
-(void)setShowCalcMbrs:(BOOL)arg1 ;
-(void)setShowDataDropDown:(BOOL)arg1 ;
-(void)setShowDropZones:(BOOL)arg1 ;
-(void)setShowEmptyCol:(BOOL)arg1 ;
-(void)setShowEmptyRow:(BOOL)arg1 ;
-(void)setShowHeaders:(BOOL)arg1 ;
-(void)setShowMemberPropertyTips:(BOOL)arg1 ;
-(void)setShowMultipleLabel:(BOOL)arg1 ;
-(void)setShowMissing:(BOOL)arg1 ;
-(void)setSubtotalHiddenItems:(BOOL)arg1 ;
-(void)setPageWrap:(unsigned long)arg1 ;
-(void)setAutoFormatId:(unsigned long)arg1 ;
-(void)setDataPosition:(unsigned long)arg1 ;
-(void)setShowRowHeaders:(BOOL)arg1 ;
-(void)setShowColumnHeaders:(BOOL)arg1 ;
-(void)setPivotTableRange:(id)arg1 ;
-(void)setFirstHeaderRow:(long)arg1 ;
-(void)setFirstDataRow:(long)arg1 ;
-(void)setFirstDataColumn:(long)arg1 ;
-(void)setRowPageCount:(unsigned long)arg1 ;
-(void)setColumnPageCount:(unsigned long)arg1 ;
-(id)styleName;
-(BOOL)outline;
-(void)setOutline:(BOOL)arg1 ;
-(BOOL)compact;
-(void)setCompact:(BOOL)arg1 ;
@end

