/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ExchangeManager : NSObject {

	NSMutableDictionary* _exchangesByName;

}
+(id)sharedManager;
-(void)saveChanges;
-(id)init;
-(id)exchangeWithName:(id)arg1 createIfNotFound:(char)arg2 ;
-(void)_loadExchangesFromDefaults;
-(void)addExchange:(id)arg1 ;
-(id)exchangeWithName:(id)arg1 ;
-(void)_addExchange:(id)arg1 ;
-(id)exchangeList;
-(char)containsExchange:(id)arg1 ;
-(void)removeExchange:(id)arg1 ;
-(void)reloadExchangesFromDefaults;
@end

