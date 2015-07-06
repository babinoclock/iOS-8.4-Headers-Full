/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDecimalNumber, NSLocale, NSArray;

@interface SKProduct : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDecimalNumber * price; 
@property (nonatomic,readonly) NSLocale * priceLocale; 
@property (nonatomic,readonly) NSString * productIdentifier; 
@property (getter=isDownloadable,nonatomic,readonly) char downloadable; 
@property (nonatomic,readonly) NSArray * downloadContentLengths; 
@property (nonatomic,readonly) NSString * downloadContentVersion; 
@property (setter=_setLocaleIdentifier:,getter=_localeIdentifier,nonatomic,copy) NSString * _localeIdentifier; 
-(NSDecimalNumber *)price;
-(char)isDownloadable;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)productIdentifier;
-(NSArray *)downloadContentLengths;
-(NSString *)downloadContentVersion;
-(NSLocale *)priceLocale;
-(NSString *)_localeIdentifier;
-(void)_setContentVersion:(id)arg1 ;
-(void)_setDownloadContentLengths:(id)arg1 ;
-(void)_setDownloadable:(char)arg1 ;
-(void)_setLocaleIdentifier:(id)arg1 ;
-(void)_setLocalizedDescription:(id)arg1 ;
-(void)_setLocalizedTitle:(id)arg1 ;
-(void)_setPriceLocale:(id)arg1 ;
-(void)_setProductIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)localizedDescription;
-(NSString *)localizedTitle;
-(void)_setPrice:(id)arg1 ;
@end

