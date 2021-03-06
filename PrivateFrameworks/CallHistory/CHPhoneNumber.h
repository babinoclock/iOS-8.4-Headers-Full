/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class NSString;

@interface CHPhoneNumber : CHLogger {

	char _formatted;
	NSString* _originalPhoneNumber;
	NSString* _ISOCountryCode;
	NSString* _formattedPhoneNumber;

}

@property (copy) NSString * originalPhoneNumber;               //@synthesize originalPhoneNumber=_originalPhoneNumber - In the implementation block
@property (copy) NSString * ISOCountryCode;                    //@synthesize ISOCountryCode=_ISOCountryCode - In the implementation block
@property (assign) char formatted;                             //@synthesize formatted=_formatted - In the implementation block
@property (copy) NSString * formattedPhoneNumber;              //@synthesize formattedPhoneNumber=_formattedPhoneNumber - In the implementation block
-(char)formatted;
-(NSString *)originalPhoneNumber;
-(void)setFormattedPhoneNumber:(NSString *)arg1 ;
-(void)setFormatted:(char)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 andISOCountryCode:(id)arg2 ;
-(id)formattedNumber;
-(void)setOriginalPhoneNumber:(NSString *)arg1 ;
-(void)setISOCountryCode:(NSString *)arg1 ;
-(NSString *)ISOCountryCode;
-(NSString *)formattedPhoneNumber;
@end

