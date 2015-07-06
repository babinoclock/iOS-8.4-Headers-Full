/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassField.h>

@class NSString;

@interface PKPassNumberField : PKPassField {

	NSString* _currencyCode;
	int _numberStyle;

}

@property (assign,nonatomic) int numberStyle;                    //@synthesize numberStyle=_numberStyle - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
+(char)supportsSecureCoding;
-(int)numberStyle;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)value;
-(void)setNumberStyle:(int)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
@end

