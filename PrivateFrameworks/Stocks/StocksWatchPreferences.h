/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSDomainAccessor;

@interface StocksWatchPreferences : NSObject {

	NPSDomainAccessor* _watchDefaults;

}
+(id)sharedPreferences;
-(id)init;
-(id)defaultStockSymbol;
-(void)setDefaultStockSymbol:(id)arg1 ;
-(int)complicationDisplayMode;
-(void)setComplicationDisplayMode:(int)arg1 ;
@end

