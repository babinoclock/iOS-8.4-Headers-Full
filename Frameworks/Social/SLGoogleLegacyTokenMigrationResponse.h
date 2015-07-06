/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError, NSString;

@interface SLGoogleLegacyTokenMigrationResponse : NSObject {

	int _statusCode;
	NSError* _error;
	NSString* _responseBody;

}

@property (readonly) int statusCode;                       //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * responseBody;              //@synthesize responseBody=_responseBody - In the implementation block
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)responseBody;
-(int)statusCode;
-(NSError *)error;
@end

