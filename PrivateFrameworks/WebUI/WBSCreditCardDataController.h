/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSArray;

@interface WBSCreditCardDataController : NSObject {

	NSMapTable* _creditCardDataKeychainReferences;

}

@property (nonatomic,readonly) NSArray * creditCardData; 
+(char)hasCreditCardData;
-(id)init;
-(void)clearCreditCardData;
-(NSArray *)creditCardData;
-(id)existingCardWithNumber:(id)arg1 ;
-(void)replaceCreditCardData:(id)arg1 withCard:(id)arg2 ;
-(void)saveCreditCardDataIfAllowed:(id)arg1 ;
-(void)neverSaveCreditCardData:(id)arg1 ;
-(id)savableCreditCardDataInForm:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1 ;
-(char)shouldNeverSaveCardWithNumber:(id)arg1 ;
-(id)_uniqueCardNameForCardName:(id)arg1 ;
-(id)defaultNameForCardOfType:(unsigned)arg1 cardholderName:(id)arg2 ;
-(void)creditCardDataDidChange;
-(void)_removeNeverSaveCreditCardData:(id)arg1 ;
-(char)shouldAddCardWithNumber:(id)arg1 ;
-(void)saveCreditCardData:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCard:(id)arg1 ;
-(void)invalidateCreditCardData;
-(void)removeCreditCardData:(id)arg1 ;
-(char)isCreditCardDataSaved:(id)arg1 ;
@end

