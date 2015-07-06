/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, NSString, NSMutableArray;

@interface OITSUNumberFormatter : NSObject {

	CFLocaleRef mLocale;
	CFArrayRef mDecimalFormatters;
	CFArrayRef mCurrencyFormatters;
	CFArrayRef mPercentageFormatters;
	CFArrayRef mScientificFormatters;
	CFNumberFormatterRef mFractionFormatter;
	NSMutableDictionary* mCurrencyCodeToSymbolMap;
	NSMutableDictionary* mCurrencyCodeToHalfWidthSymbolMap;
	NSString* mCurrencyString;
	NSString* mPercentageString;
	NSString* mScientificString;
	NSString* mDecimalString;
	NSString* mPercentSymbol;
	NSMutableArray* mTransformedDecimalStrings;
	NSMutableArray* mTransformedCurrencyStrings;
	NSMutableArray* mTransformedPercentageStrings;
	NSMutableArray* mTransformedScientificStrings;
	CFStringRef mAdditionalCurrencyCode;
	CFArrayRef mAdditionalCurrencyCodeFormatters;

}
+(void)initialize;
+(id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2 ;
+(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
+(id)currentLocaleCurrencyCode;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1 ;
+(id)currencySymbolForCurrencyCode:(id)arg1 ;
+(id)userVisibleCurrencyCodes;
+(id)formatterForLocale:(CFLocaleRef)arg1 ;
+(int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2 ;
+(void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1 ;
+(id)displayNameForCurrencyCode:(id)arg1 ;
+(id)defaultFormatStringForValueType:(int)arg1 ;
+(id)localizedPercentSymbol;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1 ;
+(id)availableCurrencyCodes;
+(id)currentNonCachedLocaleCurrencyCode;
+(id)currentLocaleDecimalSeparator;
+(id)currentNonCachedLocaleDecimalSeparator;
+(id)currentLocaleListSeparator;
+(id)numberFormatStringSpecialSymbols;
-(void)dealloc;
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
-(id)currentLocaleCurrencyCode;
-(id)currencySymbolForCurrencyCode:(id)arg1 ;
-(char)decimalFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(char)currencyFromString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 currencyCode:(const _CFString*)arg5 ;
-(char)percentageFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(char)scientificFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(char)fractionFromString:(CFStringRef)arg1 value:(double*)arg2 ;
-(id)displayNameForCurrencyCode:(id)arg1 ;
-(id)defaultFormatStringForValueType:(int)arg1 ;
-(id)localizedPercentSymbol;
-(void)numberPreferencesChanged:(id)arg1 ;
-(CFArrayRef)p_decimalFormatters;
-(char)valueFromString:(CFStringRef)arg1 formatters:(CFArrayRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 currencyCode:(const _CFString*)arg5 ;
-(char)findCurrencySymbolInString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 successTSUlString:(const _CFString*)arg3 ;
-(CFArrayRef)p_currencyFormatters;
-(CFArrayRef)p_percentageFormatters;
-(CFArrayRef)p_scientificFormatters;
-(id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1 ;
@end

