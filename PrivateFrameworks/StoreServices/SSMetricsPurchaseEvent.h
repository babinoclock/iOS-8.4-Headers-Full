/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * transactionIdentifier; 
-(id)init;
-(double)requestStartTime;
-(double)responseStartTime;
-(double)responseEndTime;
-(void)addFieldsFromPurchaseResponse:(id)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setResponseStartTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(void)setRequestStartTime:(double)arg1 ;
@end

