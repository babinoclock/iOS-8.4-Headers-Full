/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <StoreKitUI/SSMetricsEventFieldProvider.h>

@class NSArray, SKUICarouselViewElement, NSString;

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSArray* _carouselItems;
	double _cycleInterval;
	int _missingItemCount;

}

@property (nonatomic,readonly) SKUICarouselViewElement * viewElement; 
@property (nonatomic,readonly) double cycleInterval;                               //@synthesize cycleInterval=_cycleInterval - In the implementation block
@property (nonatomic,readonly) NSArray * carouselItems;                            //@synthesize carouselItems=_carouselItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewElement:(id)arg1 ;
-(int)componentType;
-(id)valueForMetricsField:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)isMissingItemData;
-(id)metricsElementName;
-(void)updateWithMissingItems:(id)arg1 ;
-(NSArray *)carouselItems;
-(double)cycleInterval;
@end

