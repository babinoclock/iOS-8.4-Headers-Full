/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AAAccountManagementUIResponse : AAResponse {

	NSData* _responseData;

}

@property (nonatomic,readonly) NSData * responseData; 
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSData *)responseData;
@end

