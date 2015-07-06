/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface StockNewsItemCollection : NSObject {

	NSArray* _newsItems;
	double _expirationTime;

}

@property (nonatomic,retain) NSArray * newsItems;                //@synthesize newsItems=_newsItems - In the implementation block
@property (assign,nonatomic) double expirationTime;              //@synthesize expirationTime=_expirationTime - In the implementation block
-(void)setExpirationTime:(double)arg1 ;
-(double)expirationTime;
-(id)initWithArchiveArray:(id)arg1 ;
-(id)archiveArray;
-(NSArray *)newsItems;
-(void)setNewsItems:(NSArray *)arg1 ;
@end
