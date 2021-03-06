/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding> {

	NSData* _messageData;
	NSDictionary* _options;
	int _format;
	NSString* _altText;

}

@property (nonatomic,copy) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * altText;                  //@synthesize altText=_altText - In the implementation block
@property (assign,nonatomic) int format;                        //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) char isTall; 
+(char)supportsSecureCoding;
-(id)_imageFromBarcodeMessage;
-(id)_imageFromTextMessage;
-(id)image;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSData *)messageData;
-(NSString *)altText;
-(void)setMessageData:(NSData *)arg1 ;
-(void)setAltText:(NSString *)arg1 ;
-(id)initWithBarcodeDictionary:(id)arg1 ;
-(char)isTall;
-(int)format;
-(void)setFormat:(int)arg1 ;
@end

