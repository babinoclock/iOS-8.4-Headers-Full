/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <RadioUI/RURadioStationsCollectionViewTemplate.h>

@class RURadioStationsCollectionViewTemplateTextElement;

@interface RURadioMyStationsCollectionViewTemplate : RURadioStationsCollectionViewTemplate

@property (nonatomic,readonly) RURadioStationsCollectionViewTemplateTextElement * titleTextElement; 
@property (nonatomic,readonly) RURadioStationsCollectionViewTemplateTextElement * subtitleTextElement; 
+(SCD_Struct_RU9)_attributesForStackItemAtIndex:(int)arg1 displayScale:(float)arg2 ;
+(float)_targetStackBaseWidthForHorizontalSizeClass:(int)arg1 displayScale:(float)arg2 rootViewWidth:(float)arg3 ;
+(float)_horizontalSpacingBetweenItemsForHorizontalSizeClass:(int)arg1 displayScale:(float)arg2 rootViewWidth:(float)arg3 ;
+(float)_horizontalEdgePaddingForHorizontalSizeClass:(int)arg1 displayScale:(float)arg2 rootViewWidth:(float)arg3 ;
+(SCD_Struct_RU8)_stackAttributesForHorizontalSizeClass:(int)arg1 displayScale:(float)arg2 rootViewHeight:(float)arg3 ;
-(id)init;
-(RURadioStationsCollectionViewTemplateTextElement *)titleTextElement;
-(RURadioStationsCollectionViewTemplateTextElement *)subtitleTextElement;
@end

