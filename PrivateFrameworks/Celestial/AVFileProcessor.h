/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AVFileProcessor : NSObject {

	float _percentComplete;

}
+(id)fileProcessor;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 ;
-(id)rentalInfo:(id)arg1 ;
-(id)sinfsFromFilePath:(id)arg1 ;
-(id)sinfInfoFromFilePath:(id)arg1 ;
@end

