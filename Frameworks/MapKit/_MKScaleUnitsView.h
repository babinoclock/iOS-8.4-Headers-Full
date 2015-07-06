/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, NSString, NSMapTable, NSMutableDictionary, NSNumberFormatter;

@interface _MKScaleUnitsView : UIView {

	char _useLightText;
	double _segmentLengthInPixels;
	float _unitsWidth;
	float _justUnitsWidth;
	NSDictionary* _legendAttributes;
	NSMutableArray* _strings;
	NSString* _legendBaseString;
	NSString* _unitsString;
	NSString* _unpaddedUnitsString;
	NSMapTable* _legendStringWidthCache;
	NSMutableDictionary* _legendStringForDistanceStringCache;
	NSNumberFormatter* _floatNumberFormatter;

}

@property (assign,nonatomic) char useLightText; 
@property (assign,nonatomic) double segmentLengthInPixels; 
@property (nonatomic,readonly) float unitsWidth;                                    //@synthesize unitsWidth=_unitsWidth - In the implementation block
@property (nonatomic,retain) NSString * legendBaseString;                           //@synthesize legendBaseString=_legendBaseString - In the implementation block
@property (nonatomic,retain) NSString * unitsString;                                //@synthesize unitsString=_unitsString - In the implementation block
@property (nonatomic,copy) NSString * unpaddedUnitsString;                          //@synthesize unpaddedUnitsString=_unpaddedUnitsString - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * floatNumberFormatter;              //@synthesize floatNumberFormatter=_floatNumberFormatter - In the implementation block
-(void)setUseLightText:(char)arg1 ;
-(NSString *)unpaddedUnitsString;
-(void)setUnitsString:(NSString *)arg1 ;
-(void)setUnpaddedUnitsString:(NSString *)arg1 ;
-(float)_widthForString:(id)arg1 attributes:(id)arg2 ;
-(NSString *)legendBaseString;
-(void)setLegendBaseString:(NSString *)arg1 ;
-(void)_calculateLegend:(char)arg1 ;
-(id)_legendStringForDistanceString:(id)arg1 appendUnits:(char)arg2 index:(int)arg3 ;
-(id)_uncachedLegendStringsForDistanceString:(id)arg1 ;
-(void)clearCaches:(id)arg1 ;
-(char)canDisplaySegment:(unsigned)arg1 ;
-(void)setSegmentLengthInPixels:(double)arg1 ;
-(char)useLightText;
-(float)unitsWidth;
-(NSString *)unitsString;
-(NSNumberFormatter *)floatNumberFormatter;
-(void)setFloatNumberFormatter:(NSNumberFormatter *)arg1 ;
-(id)init;
-(void)setUnits:(id)arg1 ;
@end

