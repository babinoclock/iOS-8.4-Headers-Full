/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSDownloadSession.h>

@class NSURLAuthenticationChallenge;

@interface SSDownloadAuthenticationSession : SSDownloadSession

@property (readonly) NSURLAuthenticationChallenge * authenticationChallenge; 
-(NSURLAuthenticationChallenge *)authenticationChallenge;
-(void)_finishWithType:(int)arg1 credential:(id)arg2 ;
@end

