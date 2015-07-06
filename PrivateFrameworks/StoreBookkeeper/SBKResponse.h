/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSError, NSString, SBKResponseStatus;

@interface SBKResponse : NSObject {

	NSDictionary* _responseDictionary;
	unsigned _responseCode;
	NSDictionary* _responseHeaderFields;
	NSError* _error;
	NSString* _MIMEType;
	SBKResponseStatus* _responseStatus;
	double _retrySeconds;

}

@property (nonatomic,readonly) unsigned responseCode;                            //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaderFields;              //@synthesize responseHeaderFields=_responseHeaderFields - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseDictionary;                //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (readonly) int statusCode; 
@property (copy,readonly) NSString * consoleDescription; 
@property (readonly) NSError * requestError; 
@property (readonly) char isSuccess; 
@property (readonly) char isRecoverable; 
@property (readonly) char isError; 
@property (readonly) char shouldFileRadar; 
@property (readonly) char isGenericError; 
@property (readonly) char isUnsupportedClient; 
@property (readonly) char isAuthenticationError; 
@property (readonly) char isValidationError; 
@property (readonly) char isPuntedError; 
@property (readonly) double retrySeconds;                                        //@synthesize retrySeconds=_retrySeconds - In the implementation block
@property (nonatomic,readonly) NSString * MIMEType;                              //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) SBKResponseStatus * responseStatus;               //@synthesize responseStatus=_responseStatus - In the implementation block
+(id)responseWithResponse:(id)arg1 ;
+(id)responseWithURLResponse:(id)arg1 responseDictionary:(id)arg2 ;
+(id)responseWithCode:(unsigned)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(unsigned)responseCode;
-(id)description;
-(NSString *)MIMEType;
-(int)statusCode;
-(NSError *)error;
-(NSDictionary *)responseHeaderFields;
-(NSError *)requestError;
-(NSDictionary *)responseDictionary;
-(double)retrySeconds;
-(char)isSuccess;
-(char)isUnsupportedClient;
-(char)isGenericError;
-(char)isValidationError;
-(char)isAuthenticationError;
-(id)initWithCode:(unsigned)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(char)isPuntedError;
-(id)initWithURLResponse:(id)arg1 responseDictionary:(id)arg2 ;
-(NSString *)consoleDescription;
-(char)isRecoverable;
-(char)isError;
-(char)shouldFileRadar;
-(SBKResponseStatus *)responseStatus;
@end

