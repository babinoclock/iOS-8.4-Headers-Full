/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKMapItemVendorDeal;
@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject {

	char _hasCheckedForVendorDeal;
	GEOBusiness* _business;
	id<MKMapItemVendorDeal> _deal;
	NSMutableDictionary* _imageCache;

}

@property (nonatomic,readonly) GEOBusiness * business;                      //@synthesize business=_business - In the implementation block
@property (nonatomic,retain) id<MKMapItemVendorDeal> deal;                  //@synthesize deal=_deal - In the implementation block
@property (assign,nonatomic) char hasCheckedForVendorDeal;                  //@synthesize hasCheckedForVendorDeal=_hasCheckedForVendorDeal - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(char)hasCheckedForVendorDeal;
-(void)setDeal:(id<MKMapItemVendorDeal>)arg1 ;
-(void)setHasCheckedForVendorDeal:(char)arg1 ;
-(id<MKMapItemVendorDeal>)deal;
-(id)initWithBusiness:(id)arg1 ;
-(void)addImage:(id)arg1 forURL:(id)arg2 ;
-(id)imageForURL:(id)arg1 ;
-(id)description;
-(GEOBusiness *)business;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
@end

