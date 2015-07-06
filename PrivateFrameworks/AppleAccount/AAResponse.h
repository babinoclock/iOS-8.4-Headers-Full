/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSError, NSData, NSNumber, NSString;

@interface AAResponse : NSObject {

	NSDictionary* _responseDictionary;
	NSHTTPURLResponse* _httpResponse;
	NSError* _error;
	int _statusCode;
	NSData* _data;
	NSNumber* _maxAge;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * protocolVersion; 
@property (nonatomic,readonly) int statusCode;                                 //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSNumber * maxAge;                              //@synthesize maxAge=_maxAge - In the implementation block
-(NSData *)data;
-(int)statusCode;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(char)arg3 ;
-(void)_parsePlistResponse:(id)arg1 ;
-(id)_stringWithDescriptionForResponseError:(id)arg1 ;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(NSError *)error;
-(NSString *)protocolVersion;
-(void)setError:(NSError *)arg1 ;
-(NSDictionary *)responseDictionary;
-(NSNumber *)maxAge;
@end

