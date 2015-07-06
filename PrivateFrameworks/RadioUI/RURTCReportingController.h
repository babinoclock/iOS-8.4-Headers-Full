/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUReportingController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, RTCReporting;

@interface RURTCReportingController : MPUReportingController {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _recordingEnabled;
	unsigned _reportingFlag;
	NSMutableArray* _reportingFlagLoadCompletionHandlers;
	RTCReporting* _rtcReporting;
	char _shouldDeferEventFlushing;

}

@property (assign,nonatomic) char shouldDeferEventFlushing; 
+(unsigned)reportingEnableFlag;
+(void)setRTCReportingEnableFlag:(unsigned)arg1 ;
-(id)init;
-(void)_recordReportingEvents:(id)arg1 ;
-(char)_getMethod:(unsigned short*)arg1 respCode:(unsigned short*)arg2 infoDictionary:(id*)arg3 fromReportingEvent:(id)arg4 ;
-(void)setShouldDeferEventFlushing:(char)arg1 ;
-(char)shouldDeferEventFlushing;
-(void)loadRTCReportingFlagWithCompletionHandler:(/*^block*/id)arg1 ;
@end

