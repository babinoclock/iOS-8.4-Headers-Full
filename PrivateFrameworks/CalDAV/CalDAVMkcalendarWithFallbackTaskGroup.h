/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, NSDictionary;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	char _shouldSupportVEVENT;
	char _shouldSupportVTODO;
	NSSet* _primaryElements;
	NSSet* _fallbackElements;
	NSDictionary* _headersToOverride;
	NSDictionary* _responseHeaders;

}

@property (assign,nonatomic) char shouldSupportVEVENT;                      //@synthesize shouldSupportVEVENT=_shouldSupportVEVENT - In the implementation block
@property (assign,nonatomic) char shouldSupportVTODO;                       //@synthesize shouldSupportVTODO=_shouldSupportVTODO - In the implementation block
@property (nonatomic,retain) NSDictionary * headersToOverride;              //@synthesize headersToOverride=_headersToOverride - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHeaders;                //@synthesize responseHeaders=_responseHeaders - In the implementation block
-(void)dealloc;
-(NSDictionary *)headersToOverride;
-(void)_mkcalendarAfterFailureCount:(unsigned)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(char)shouldSupportVEVENT;
-(void)setShouldSupportVEVENT:(char)arg1 ;
-(char)shouldSupportVTODO;
-(void)setShouldSupportVTODO:(char)arg1 ;
-(void)setHeadersToOverride:(NSDictionary *)arg1 ;
-(NSDictionary *)responseHeaders;
-(void)startTaskGroup;
@end
