/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSURL;

@interface YTFeedRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _videos;
	NSURL* _batchURL;
	unsigned _startIndex;
	unsigned _videosPerPage;
	unsigned _totalResults;
	char _invalidatedToken;

}
+(int)partialFeedType;
-(void)failWithError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(int)parseData:(id)arg1 ;
-(void)didParseData;
-(void)loadRequest:(id)arg1 withDelegate:(id)arg2 accountAuthRequired:(char)arg3 ;
@end
