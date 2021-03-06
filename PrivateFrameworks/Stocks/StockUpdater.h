/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@protocol StockUpdaterDelegate;
@class NSError, NSArray;

@interface StockUpdater : YQLRequest {

	NSError* _lastError;
	char _isComprehensive;
	char _forceUpdate;
	id<StockUpdaterDelegate> _delegate;
	NSArray* _requestStocks;
	NSArray* _pendingStocks;
	/*^block*/id _updateCompletionHandler;

}

@property (assign,nonatomic,__weak) id<StockUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isComprehensive;                                //@synthesize isComprehensive=_isComprehensive - In the implementation block
@property (nonatomic,readonly) char forceUpdate;                                    //@synthesize forceUpdate=_forceUpdate - In the implementation block
@property (nonatomic,retain) NSArray * requestStocks;                               //@synthesize requestStocks=_requestStocks - In the implementation block
@property (nonatomic,retain) NSArray * pendingStocks;                               //@synthesize pendingStocks=_pendingStocks - In the implementation block
@property (nonatomic,copy) id updateCompletionHandler;                              //@synthesize updateCompletionHandler=_updateCompletionHandler - In the implementation block
-(void)failWithError:(id)arg1 ;
-(void)setDelegate:(id<StockUpdaterDelegate>)arg1 ;
-(id<StockUpdaterDelegate>)delegate;
-(char)forceUpdate;
-(void)parseData:(id)arg1 ;
-(char)hadError;
-(char)isComprehensive;
-(NSArray *)requestStocks;
-(id)updateCompletionHandler;
-(void)setUpdateCompletionHandler:(id)arg1 ;
-(char)_updateStocks:(id)arg1 comprehensive:(char)arg2 forceUpdate:(char)arg3 ;
-(void)setPendingStocks:(NSArray *)arg1 ;
-(void)setRequestStocks:(NSArray *)arg1 ;
-(id)_parseDataSourceMapFromDataSourceDictionaries:(id)arg1 ;
-(void)_parseExchangeDictionaries:(id)arg1 ;
-(void)_parseQuoteDictionaries:(id)arg1 withDataSources:(id)arg2 ;
-(void)didParseData;
-(NSArray *)pendingStocks;
-(id)aggregateDictionaryDomain;
@end

