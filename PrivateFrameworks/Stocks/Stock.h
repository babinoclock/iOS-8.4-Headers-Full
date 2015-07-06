/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class StockChartData, NSString, Exchange, NSURL, StockDataSource;

@interface Stock : NSObject {

	StockChartData* _chartDataArray[9];
	NSString* _symbol;
	NSString* _companyName;
	NSString* _shortCompanyName;
	Exchange* _exchange;
	NSString* _price;
	NSString* _change;
	NSString* _symbolType;
	NSString* _open;
	NSString* _high;
	NSString* _low;
	NSString* _yearHigh;
	NSString* _yearLow;
	NSString* _volume;
	NSString* _averageVolume;
	NSString* _marketcap;
	NSString* _peRatio;
	NSString* _dividendYield;
	unsigned _pricePrecision;
	NSURL* _infoURL;
	StockDataSource* _dataSource;
	double _timeQuoteLastUpdated;
	double _timeMetadataLastUpdated;

}

@property (nonatomic,retain) NSString * symbol;                           //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) NSString * companyName;                      //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,retain) NSString * shortCompanyName;                 //@synthesize shortCompanyName=_shortCompanyName - In the implementation block
@property (nonatomic,retain) Exchange * exchange;                         //@synthesize exchange=_exchange - In the implementation block
@property (nonatomic,retain) NSString * price;                            //@synthesize price=_price - In the implementation block
@property (nonatomic,retain) NSString * change;                           //@synthesize change=_change - In the implementation block
@property (nonatomic,retain) NSString * symbolType;                       //@synthesize symbolType=_symbolType - In the implementation block
@property (nonatomic,retain) NSString * open;                             //@synthesize open=_open - In the implementation block
@property (nonatomic,retain) NSString * high;                             //@synthesize high=_high - In the implementation block
@property (nonatomic,retain) NSString * low;                              //@synthesize low=_low - In the implementation block
@property (nonatomic,retain) NSString * yearHigh;                         //@synthesize yearHigh=_yearHigh - In the implementation block
@property (nonatomic,retain) NSString * yearLow;                          //@synthesize yearLow=_yearLow - In the implementation block
@property (nonatomic,retain) NSString * volume;                           //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSString * averageVolume;                    //@synthesize averageVolume=_averageVolume - In the implementation block
@property (nonatomic,retain) NSString * marketcap;                        //@synthesize marketcap=_marketcap - In the implementation block
@property (nonatomic,retain) NSString * peRatio;                          //@synthesize peRatio=_peRatio - In the implementation block
@property (nonatomic,retain) NSString * dividendYield;                    //@synthesize dividendYield=_dividendYield - In the implementation block
@property (nonatomic,readonly) unsigned pricePrecision;                   //@synthesize pricePrecision=_pricePrecision - In the implementation block
@property (nonatomic,retain) NSURL * infoURL;                             //@synthesize infoURL=_infoURL - In the implementation block
@property (nonatomic,retain) StockDataSource * dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) double timeQuoteLastUpdated;                 //@synthesize timeQuoteLastUpdated=_timeQuoteLastUpdated - In the implementation block
@property (assign,nonatomic) double timeMetadataLastUpdated;              //@synthesize timeMetadataLastUpdated=_timeMetadataLastUpdated - In the implementation block
+(id)percentSymbol;
+(void)resetLocale;
+(id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(char)arg3 groupingSeparators:(char)arg4 ;
+(id)urlForStockSymbol:(id)arg1 ;
+(id)PercentFormatter;
+(id)_formattedStringForNumber:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(char)arg3 groupingSeparators:(char)arg4 ;
+(id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(char)arg3 groupingSeparators:(char)arg4 droppingFractionDigitsIfLengthExceeds:(unsigned)arg5 ;
+(id)BlankValueString;
+(id)formattedStringForString:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(char)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned)arg4 ;
+(id)postfixCharacterForMagnitude:(unsigned)arg1 unitMagnitude:(unsigned*)arg2 ;
+(id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(char)arg3 ;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned)arg2 ;
+(id)_potentiallyAbsentKeys;
+(id)urlForStock:(id)arg1 ;
+(id)formattedStringForString:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(char)arg3 ;
+(char)localeUsesASCIIDigits;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 ;
-(id)formattedPrice;
-(NSString *)price;
-(id)archiveDictionary;
-(void)dealloc;
-(void)setDataSource:(StockDataSource *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(StockDataSource *)dataSource;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
-(NSString *)change;
-(void)setChange:(NSString *)arg1 ;
-(NSString *)open;
-(double)_updateInterval;
-(void)setCompanyName:(NSString *)arg1 ;
-(void)resetLocale;
-(NSString *)dividendYield;
-(void)setDividendYield:(NSString *)arg1 ;
-(Exchange *)exchange;
-(void)setExchange:(Exchange *)arg1 ;
-(NSString *)high;
-(void)setHigh:(NSString *)arg1 ;
-(NSString *)low;
-(void)setLow:(NSString *)arg1 ;
-(NSString *)peRatio;
-(void)setPeRatio:(NSString *)arg1 ;
-(id)listName;
-(void)setShortCompanyName:(NSString *)arg1 ;
-(void)setYearHigh:(NSString *)arg1 ;
-(void)setYearLow:(NSString *)arg1 ;
-(void)setAverageVolume:(NSString *)arg1 ;
-(void)setMarketcap:(NSString *)arg1 ;
-(void)setSymbolType:(NSString *)arg1 ;
-(void)_updatePricePrecision;
-(void)populateFromDictionary:(id)arg1 ;
-(void)setChartData:(id)arg1 forInterval:(int)arg2 ;
-(id)formattedChangePercent:(char)arg1 ;
-(char)marketIsOpen;
-(id)listNameWithMaxIndexNameLength:(unsigned)arg1 ;
-(char)isIndex;
-(char)changeIsNegative;
-(char)changeIsZero;
-(id)formattedChangePercent:(char)arg1 includePercentSign:(char)arg2 ;
-(char)isQuoteStale;
-(char)isMetadataStale;
-(char)doesQuoteNeedUpdate;
-(char)doesMetadataNeedUpdate;
-(id)chartDataForInterval:(int)arg1 ;
-(void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2 ;
-(void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2 ;
-(NSString *)shortCompanyName;
-(NSString *)symbolType;
-(NSString *)yearHigh;
-(NSString *)yearLow;
-(NSString *)averageVolume;
-(NSString *)marketcap;
-(unsigned)pricePrecision;
-(double)timeQuoteLastUpdated;
-(void)setTimeQuoteLastUpdated:(double)arg1 ;
-(double)timeMetadataLastUpdated;
-(void)setTimeMetadataLastUpdated:(double)arg1 ;
-(void)setPrice:(NSString *)arg1 ;
-(NSString *)companyName;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(void)setOpen:(NSString *)arg1 ;
-(NSURL *)infoURL;
-(void)setInfoURL:(NSURL *)arg1 ;
@end

