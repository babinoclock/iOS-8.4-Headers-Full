/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUIReview : NSObject <SKUICacheCoding> {

	NSString* _body;
	NSString* _dateString;
	float _rating;
	NSString* _reviewer;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * body;                                        //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSString * dateString;                                  //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,readonly) float rating;                                           //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) NSString * reviewer;                                    //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(NSString *)title;
-(NSString *)body;
-(NSString *)reviewer;
-(float)rating;
-(id)initWithReviewDictionary:(id)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(NSString *)dateString;
-(id)formattedBylineWithClientContext:(id)arg1 ;
@end

