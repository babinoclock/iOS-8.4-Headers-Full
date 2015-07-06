/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CHDDataValuesCollection, CHDFormula, EDResources;

@interface CHDData : NSObject {

	CHDDataValuesCollection* mDataValues;
	CHDFormula* mFormula;
	unsigned mContentFormatId;
	unsigned mDataValueIndexCount;
	EDResources* mResources;

}
+(id)dataWithDataPointCount:(unsigned)arg1 resources:(id)arg2 ;
+(id)dataWithResources:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(unsigned)contentFormatId;
-(id)contentFormat;
-(id)dataValues;
-(id)formula;
-(void)setContentFormatId:(unsigned)arg1 ;
-(void)setFormula:(id)arg1 chart:(id)arg2 ;
-(void)setDataValueIndexCount:(unsigned)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(id)initWithDataPointCount:(unsigned)arg1 resources:(id)arg2 ;
-(unsigned)countOfCellsBeingReferenced;
-(unsigned)dataValueIndexCount;
-(unsigned)averageDataPointDecimalCount;
-(id)firstValueContentFormatWithWorkbook:(id)arg1 ;
@end

