/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SLAggregateLogger : NSObject
+(void)logFacebookPost:(id)arg1 fromProcessWithPID:(int)arg2 ;
+(void)logTweetWithText:(id)arg1 attachments:(id)arg2 locationAttached:(char)arg3 fromProcessWithPID:(int)arg4 ;
+(id)_logIdentifierForPID:(int)arg1 ;
+(char)_twitterAttachmentsContainImage:(id)arg1 ;
+(char)_twitterAttachmentsContainURL:(id)arg1 ;
+(char)_weiboAttachmentsContainImage:(id)arg1 ;
+(char)_weiboAttachmentsContainURL:(id)arg1 ;
+(char)_tencentWeiboAttachmentsContainImage:(id)arg1 ;
+(char)_tencentWeiboAttachmentsContainURL:(id)arg1 ;
+(void)logFacebookAppInstallChoice:(char)arg1 ;
+(void)logTwitterAppInstallChoice:(char)arg1 ;
+(void)logWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(char)arg3 fromProcessWithPID:(int)arg4 ;
+(void)logTencentWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(char)arg3 fromProcessWithPID:(int)arg4 ;
+(void)logWeiboAppInstallChoice:(char)arg1 ;
+(void)logTencentWeiboAppInstallChoice:(char)arg1 ;
+(void)logFlickrAppInstallChoice:(char)arg1 ;
+(void)logVimeoAppInstallChoice:(char)arg1 ;
@end

