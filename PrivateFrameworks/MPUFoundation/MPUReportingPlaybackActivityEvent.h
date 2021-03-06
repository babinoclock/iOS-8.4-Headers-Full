/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUReportingEvent.h>

@class SSVPlayActivityEvent, NSString;

@interface MPUReportingPlaybackActivityEvent : NSObject <MPUReportingEvent> {

	char _shouldReportToStore;
	SSVPlayActivityEvent* _playActivityEvent;
	NSString* _playbackSessionID;

}

@property (nonatomic,copy) SSVPlayActivityEvent * playActivityEvent;              //@synthesize playActivityEvent=_playActivityEvent - In the implementation block
@property (nonatomic,copy) NSString * playbackSessionID;                          //@synthesize playbackSessionID=_playbackSessionID - In the implementation block
@property (assign,nonatomic) char shouldReportToStore;                            //@synthesize shouldReportToStore=_shouldReportToStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)playbackSessionID;
-(NSString *)description;
-(char)isValidReportingEvent;
-(void)setPlayActivityEvent:(SSVPlayActivityEvent *)arg1 ;
-(void)setPlaybackSessionID:(NSString *)arg1 ;
-(char)shouldReportToStore;
-(void)setShouldReportToStore:(char)arg1 ;
-(unsigned)reportingEventType;
-(SSVPlayActivityEvent *)playActivityEvent;
@end

