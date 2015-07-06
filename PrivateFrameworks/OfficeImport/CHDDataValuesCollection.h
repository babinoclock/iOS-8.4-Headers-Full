/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHDDataValuesCollection : NSObject {

	CFDataRef mPackedValues;
	unsigned mDataValueCount;
	CFDictionaryRef mIndexToDataValueMap;
	BOOL mContainsStringValue;

}
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)cleanup;
-(id)dataValueAtIndex:(unsigned)arg1 ;
-(BOOL)addDataPoint:(CHDDataPoint*)arg1 ;
-(void)finishReading;
-(id)initWithDataPointCount:(unsigned)arg1 ;
-(CHDDataPoint*)dataPointAtIndex:(unsigned)arg1 ;
-(void)setupBufferForValues:(unsigned)arg1 ;
-(CHDDataPoint*)dataPointWithIndex:(unsigned)arg1 ;
-(void)resetWithDataPointCount:(unsigned)arg1 ;
-(BOOL)addDataValue:(id)arg1 ;
-(id)contentFormatAtIndex:(unsigned)arg1 resources:(id)arg2 ;
-(id)dataValueWithIndex:(unsigned)arg1 ;
-(BOOL)containsStringValue;
@end

