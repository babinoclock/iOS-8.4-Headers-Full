/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/SPComplicationData.h>
#import <WatchKit/NSSecureCoding.h>

@class NSString;

@interface SPStockComplicationData : SPComplicationData <NSSecureCoding> {

	NSString* _tickerSymbolText;
	NSString* _priceText;
	NSString* _marketCapText;
	NSString* _changeInPercentText;
	NSString* _changeInPointsText;
	NSString* _changeText;
	unsigned _changeDirection;

}

@property (nonatomic,retain) NSString * tickerSymbolText;                 //@synthesize tickerSymbolText=_tickerSymbolText - In the implementation block
@property (nonatomic,retain) NSString * priceText;                        //@synthesize priceText=_priceText - In the implementation block
@property (nonatomic,retain) NSString * marketCapText;                    //@synthesize marketCapText=_marketCapText - In the implementation block
@property (nonatomic,retain) NSString * changeInPercentText;              //@synthesize changeInPercentText=_changeInPercentText - In the implementation block
@property (nonatomic,retain) NSString * changeInPointsText;               //@synthesize changeInPointsText=_changeInPointsText - In the implementation block
@property (nonatomic,retain) NSString * changeText;                       //@synthesize changeText=_changeText - In the implementation block
@property (assign,nonatomic) unsigned changeDirection;                    //@synthesize changeDirection=_changeDirection - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)tickerSymbolText;
-(void)setTickerSymbolText:(NSString *)arg1 ;
-(NSString *)priceText;
-(void)setPriceText:(NSString *)arg1 ;
-(NSString *)marketCapText;
-(void)setMarketCapText:(NSString *)arg1 ;
-(NSString *)changeInPercentText;
-(void)setChangeInPercentText:(NSString *)arg1 ;
-(NSString *)changeInPointsText;
-(void)setChangeInPointsText:(NSString *)arg1 ;
-(NSString *)changeText;
-(void)setChangeText:(NSString *)arg1 ;
-(unsigned)changeDirection;
-(void)setChangeDirection:(unsigned)arg1 ;
@end

