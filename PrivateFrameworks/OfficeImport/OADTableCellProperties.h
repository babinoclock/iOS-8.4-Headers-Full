/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADStroke, OADTableCell3DProperties, OADFill;

@interface OADTableCellProperties : NSObject {

	OADStroke* mLeftStroke;
	char mIsLeftStrokeOverridden;
	OADStroke* mRightStroke;
	char mIsRightStrokeOverridden;
	OADStroke* mTopStroke;
	char mIsTopStrokeOverridden;
	OADStroke* mBottomStroke;
	char mIsBottomStrokeOverridden;
	OADStroke* mTopLeftToBottomRightStroke;
	char mIsTopLeftToBottomRightStrokeOverridden;
	OADStroke* mBottomLeftToTopRightStroke;
	char mIsBottomLeftToTopRightStrokeOverridden;
	OADTableCell3DProperties* mThreeDProperties;
	char mIsThreeDPropertiesOverridden;
	OADFill* mFill;
	char mIsFillOverridden;
	float mLeftMargin;
	char mIsLeftMarginOverridden;
	float mRightMargin;
	char mIsRightMarginOverridden;
	float mTopMargin;
	char mIsTopMarginOverridden;
	float mBottomMargin;
	char mIsBottomMarginOverridden;
	int mTextFlow;
	char mIsTextFlowOverridden;
	int mTextAnchor;
	char mIsTextAnchorOverridden;
	char mTextAnchorCenter;
	char mIsTextAnchorCenterOverridden;
	int mTextHorizontalOverflow;
	char mIsTextHorizontalOverflowOverridden;

}
-(float)topMargin;
-(void)setTopMargin:(float)arg1 ;
-(void)dealloc;
-(id)fill;
-(void)setRightMargin:(float)arg1 ;
-(float)rightMargin;
-(float)leftMargin;
-(float)bottomMargin;
-(char)isLeftMarginOverridden;
-(char)isRightMarginOverridden;
-(char)isTopMarginOverridden;
-(char)isBottomMarginOverridden;
-(void)setLeftMargin:(float)arg1 ;
-(char)isFillOverridden;
-(void)setFill:(id)arg1 ;
-(int)textAnchor;
-(char)isTopStrokeOverridden;
-(id)topStroke;
-(char)isBottomStrokeOverridden;
-(id)bottomStroke;
-(char)isLeftStrokeOverridden;
-(id)leftStroke;
-(char)isRightStrokeOverridden;
-(id)rightStroke;
-(char)isTextAnchorOverridden;
-(void)setLeftStroke:(id)arg1 ;
-(void)setRightStroke:(id)arg1 ;
-(void)setTopStroke:(id)arg1 ;
-(void)setBottomStroke:(id)arg1 ;
-(void)setTopLeftToBottomRightStroke:(id)arg1 ;
-(void)setBottomLeftToTopRightStroke:(id)arg1 ;
-(void)setBottomMargin:(float)arg1 ;
-(void)setTextFlow:(int)arg1 ;
-(void)setTextAnchor:(int)arg1 ;
-(void)setTextAnchorCenter:(char)arg1 ;
-(void)setTextHorizontalOverflow:(int)arg1 ;
-(id)topLeftToBottomRightStroke;
-(id)bottomLeftToTopRightStroke;
-(id)stroke:(int)arg1 ;
-(char)isTopLeftToBottomRightStrokeOverridden;
-(char)isBottomLeftToTopRightStrokeOverridden;
-(id)strokeNormalToDir:(int)arg1 bound:(int)arg2 ;
-(id)threeDProperties;
-(void)setThreeDProperties:(id)arg1 ;
-(char)isThreeDPropertiesOverridden;
-(int)textFlow;
-(char)isTextFlowOverridden;
-(char)textAnchorCenter;
-(char)isTextAnchorCenterOverridden;
-(int)textHorizontalOverflow;
-(char)isTextHorizontalOverflowOverridden;
@end

