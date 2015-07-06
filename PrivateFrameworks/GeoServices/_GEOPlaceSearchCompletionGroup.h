/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOCompletionGroup.h>

@class NSString, NSArray;

@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup> {

	NSString* _localizedSectionHeader;
	NSArray* _items;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * localizedSectionHeader;              //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
-(void)dealloc;
-(NSArray *)items;
-(NSString *)localizedSectionHeader;
-(id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 ;
@end

