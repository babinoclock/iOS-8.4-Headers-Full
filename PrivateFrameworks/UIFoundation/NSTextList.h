/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSCoding.h>
#import <UIFoundation/NSCopying.h>

@class NSString;

@interface NSTextList : NSObject <NSCoding, NSCopying> {

	NSString* _markerFormat;
	unsigned _listFlags;
	int _startIndex;
	void* _listSecondary;

}
+(void)initialize;
+(id)_standardMarkerAttributesForAttributes:(id)arg1 ;
-(char)_isOrdered;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)options;
-(unsigned)listOptions;
-(id)markerFormat;
-(id)_markerForMarkerFormat:(id)arg1 itemNumber:(int)arg2 isNumbered:(char*)arg3 substitutionStart:(unsigned*)arg4 end:(unsigned*)arg5 specifierStart:(unsigned*)arg6 end:(unsigned*)arg7 ;
-(id)_unaffixedMarkerForItemNumber:(int)arg1 ;
-(id)_markerAtIndex:(unsigned)arg1 inText:(id)arg2 ;
-(id)_markerTitle;
-(id)_markerPrefix;
-(id)_markerSpecifier;
-(id)_unaffixedMarkerFormat;
-(id)_unaffixedMarkerTitle;
-(id)_markerSuffix;
-(id)initWithMarkerFormat:(id)arg1 options:(unsigned)arg2 ;
-(void)setStartingItemNumber:(int)arg1 ;
-(int)startingItemNumber;
-(id)markerForItemNumber:(int)arg1 ;
@end

