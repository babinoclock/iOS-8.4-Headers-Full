/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL, NSDictionary;

@interface SKUIURL : NSObject <NSCopying> {

	NSMutableDictionary* _queryDictionary;
	NSString* _referrerApplicationName;
	NSString* _referrerURLString;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * underlyingURL;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * actionString; 
@property (nonatomic,copy,readonly) NSDictionary * queryStringDictionary; 
@property (nonatomic,readonly) NSString * redeemCode; 
@property (nonatomic,readonly) NSString * searchTerm; 
@property (nonatomic,readonly) NSString * URLBagKey; 
@property (nonatomic,copy) NSString * referrerApplicationName;                         //@synthesize referrerApplicationName=_referrerApplicationName - In the implementation block
@property (nonatomic,copy) NSString * referrerURLString;                               //@synthesize referrerURLString=_referrerURLString - In the implementation block
-(NSString *)searchTerm;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)actionString;
-(NSURL *)underlyingURL;
-(id)newURLRequest;
-(id)valueForQueryParameter:(id)arg1 ;
-(NSString *)referrerApplicationName;
-(void)setReferrerApplicationName:(NSString *)arg1 ;
-(NSString *)referrerURLString;
-(void)setReferrerURLString:(NSString *)arg1 ;
-(NSString *)URLBagKey;
-(id)newURLRequestWithBaseURL:(id)arg1 ;
-(NSString *)redeemCode;
-(id)initWithURLBagKey:(id)arg1 ;
-(id)_queryDictionary;
-(id)_searchGroupForSearchKind:(id)arg1 ;
-(id)_searchURLBagKey;
-(id)initWithURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(NSDictionary *)queryStringDictionary;
@end

