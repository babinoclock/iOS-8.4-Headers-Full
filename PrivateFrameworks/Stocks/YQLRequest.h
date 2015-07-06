/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/NSURLConnectionDelegate.h>

@class NSURLConnection, NSURLRequest, NSMutableData, NSString;

@interface YQLRequest : NSObject <NSURLConnectionDelegate> {

	NSURLConnection* _connection;
	NSURLRequest* _request;
	NSMutableData* _rawData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldGenerateOfflineData;
+(void)setShouldGenerateOfflineData:(char)arg1 ;
+(void)appendDebugString:(id)arg1 ;
+(void)saveDebugString;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(char)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(id)_yahooDoppelganger_connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(char)arg3 ;
-(id)connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(char)arg3 ;
-(id)YQLLanguageCode;
-(id)YQLCountryCode;
-(void)failToParseWithData:(id)arg1 ;
-(id)dictionaryWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 ;
-(id)arrayWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 wrapResultIfDictionary:(char)arg3 ;
-(void)didParseData;
-(id)objectOfClass:(Class)arg1 withDictionaryKeyPath:(id)arg2 inJSONObject:(id)arg3 ;
-(id)objectWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 ;
-(id)aggregateDictionaryDomain;
@end

