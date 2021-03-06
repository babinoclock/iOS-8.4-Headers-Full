/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarAvailabilityResponseConsumer.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, NSArray, NSObject;

@interface DADClientCalendarAvailabilityResponseDelegate : DADClientDelegate <DAEventsCalendarAvailabilityResponseConsumer> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _ignoredEventID;
	NSArray* _addresses;
	id _requestID;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(void)performRequest;
-(void)calendarAvailabilityRequestFinishedWithError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ignoredEventID:(id)arg5 addresses:(id)arg6 ;
-(void)calendarAvailabilityRequestReturnedResults:(id)arg1 ;
@end

