/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOMapServiceCompletionTicket.h>

@class GEOMapServiceTraits, GEOSearchRequest, NSString;

@interface _GEOAutoCompleteTicket : NSObject <GEOMapServiceCompletionTicket> {

	GEOSearchRequest* _searchRequest;
	GEOMapServiceTraits* _traits;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;              //@synthesize traits=_traits - In the implementation block
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(GEOMapServiceTraits *)traits;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(char)matchesFragment:(id)arg1 ;
-(id)initWithAutoCompleteRequest:(id)arg1 traits:(id)arg2 ;
@end

