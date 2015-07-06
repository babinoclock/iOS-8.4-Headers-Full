/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDPhotoshopLayer;

@interface TDPhotoshopRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) TDPhotoshopLayer * photoshopLayer; 
-(id)debugDescription;
-(void)_logError:(id)arg1 ;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
-(int)_layerIndexInPSDImage:(id)arg1 ;
-(int)psdSliceNumberForRenditionRow:(int)arg1 sliceRow:(int)arg2 renditionColumn:(int)arg3 sliceColumn:(int)arg4 rowsPerRendition:(int)arg5 columnsPerRendition:(int)arg6 renditionColumnCount:(int)arg7 ;
-(void)_logWarning:(id)arg1 ;
-(id)createCSIRepresentationFromGradientPSDImage:(id)arg1 withCompression:(char)arg2 colorSpaceID:(unsigned)arg3 ;
-(id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(char)arg2 edgeMetricsMask:(id)arg3 textMetricsMask:(id)arg4 baselineMetricsMask:(id)arg5 colorSpaceID:(unsigned)arg6 ;
-(id)createCSIRepresentationWithCompression:(char)arg1 colorSpaceID:(unsigned)arg2 document:(id)arg3 ;
-(id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(char)arg2 colorSpaceID:(unsigned)arg3 ;
@end

