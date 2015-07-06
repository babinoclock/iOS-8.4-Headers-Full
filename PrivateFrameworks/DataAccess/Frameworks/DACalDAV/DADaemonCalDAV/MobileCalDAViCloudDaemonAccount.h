/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonCalDAV/MobileCalDAVDaemonAccount.h>

@class NSString;

@interface MobileCalDAViCloudDaemonAccount : MobileCalDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	int _port;

}
-(id)host;
-(int)port;
-(id)additionalHeaderValues;
-(void)setHost:(id)arg1 ;
-(void)setPort:(int)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(char)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(char)supportsReminders;
-(char)shouldUseCalendarHomeSyncReport;
-(char)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)setUseSSL:(char)arg1 ;
-(id)principalURL;
@end

