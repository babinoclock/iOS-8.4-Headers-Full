/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/NSCopying.h>

@class NSDictionary, NSString, NSArray;

@interface SSVRedeemCodeMetadata : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	NSString* _inputCode;

}

@property (nonatomic,readonly) NSDictionary * redeemCodeDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * code; 
@property (nonatomic,readonly) NSString * codeType; 
@property (nonatomic,copy) NSString * inputCode;                                 //@synthesize inputCode=_inputCode - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
-(NSString *)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(NSString *)inputCode;
-(id)initWithRedeemCodeDictionary:(id)arg1 ;
-(void)setInputCode:(NSString *)arg1 ;
-(NSDictionary *)redeemCodeDictionary;
-(NSString *)codeType;
@end

