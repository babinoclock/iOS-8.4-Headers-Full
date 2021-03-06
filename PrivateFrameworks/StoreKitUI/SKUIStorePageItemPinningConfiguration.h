/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@interface SKUIStorePageItemPinningConfiguration : NSObject {

	char _hasValidPinningContentInset;
	char _hasValidPinningStyle;
	char _hasValidPinningTransitionStyle;
	int _pinningStyle;
	int _pinningTransitionStyle;
	UIEdgeInsets _pinningContentInset;

}

@property (assign,nonatomic) UIEdgeInsets pinningContentInset;                   //@synthesize pinningContentInset=_pinningContentInset - In the implementation block
@property (nonatomic,readonly) char hasValidPinningContentInset;                 //@synthesize hasValidPinningContentInset=_hasValidPinningContentInset - In the implementation block
@property (assign,nonatomic) int pinningStyle;                                   //@synthesize pinningStyle=_pinningStyle - In the implementation block
@property (nonatomic,readonly) char hasValidPinningStyle;                        //@synthesize hasValidPinningStyle=_hasValidPinningStyle - In the implementation block
@property (assign,nonatomic) int pinningTransitionStyle;                         //@synthesize pinningTransitionStyle=_pinningTransitionStyle - In the implementation block
@property (nonatomic,readonly) char hasValidPinningTransitionStyle;              //@synthesize hasValidPinningTransitionStyle=_hasValidPinningTransitionStyle - In the implementation block
-(void)setPinningTransitionStyle:(int)arg1 ;
-(int)pinningTransitionStyle;
-(char)hasValidPinningContentInset;
-(void)setPinningContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)pinningContentInset;
-(char)hasValidPinningStyle;
-(void)setPinningStyle:(int)arg1 ;
-(int)pinningStyle;
-(char)hasValidPinningTransitionStyle;
-(void)invalidatePinningContentInset;
-(void)invalidatePinningStyle;
-(void)invalidatePinningTransitionStyle;
@end

