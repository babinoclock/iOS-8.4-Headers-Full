/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class NSNumberFormatter, UIColor, NSMutableArray, _MKScaleUnitsView, UIView, NSMutableDictionary, NSString;

@interface MKScaleView : UIView {

	double _distanceInMeters;
	char _useMetric;
	char _useYardsForShortDistances;
	NSNumberFormatter* _floatNumberFormatter;
	double _magicNumbers[3];
	UIColor* _lightSegmentColorRegular;
	UIColor* _darkSegmentColorRegular;
	UIColor* _borderColorRegular;
	UIColor* _lightSegmentColorSatellite;
	UIColor* _darkSegmentColorSatellite;
	UIColor* _borderColorSatellite;
	NSMutableArray* _segments;
	_MKScaleUnitsView* _unitsView;
	int _oldNumberOfSegments;
	UIView* _outlineViewA;
	UIView* _outlineViewB;
	UIView* _displayedOutline;
	float _segmentLengthInPixels;
	double _resultSegmentLength;
	double _resultSegmentLengthInMeters;
	NSMutableDictionary* _formattedNumberCache;
	NSString* _feetAbbreviation;
	NSString* _yardAbbreviation;
	NSString* _milesAbbreviation;
	NSString* _metersAbbreviation;
	NSString* _kilometersAbbreviation;
	int _grQuality;
	int _layoutCounter;
	char _useLightText;

}

@property (assign,nonatomic) char useLightText; 
@property (assign,nonatomic) double distanceInMeters; 
-(void)setUseLightText:(char)arg1 ;
-(void)setDistanceInMeters:(double)arg1 ;
-(void)updateLocale:(id)arg1 ;
-(void)memoryWarning:(id)arg1 ;
-(void)_updateStrings;
-(void)_updateSegmentStrokes;
-(void)_localizedDistanceStringsWithMeters:(unsigned)arg1 imperial:(double)arg2 useFeet:(char)arg3 inMetric:(char)arg4 displaysYardsForShortDistances:(char)arg5 strings:(id)arg6 ;
-(void)_calculateSegments;
-(id)_formattedStringForFloat:(float)arg1 ;
-(id)_scaleViewFormattedStringForFloat:(float)arg1 ;
-(id)_scaleViewFormattedStringForInteger:(int)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
