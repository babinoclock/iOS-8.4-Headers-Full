/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSString, ICSDuration, ICSUserAddress, NSURL;

@interface ICSAvailability : ICSComponent

@property (retain) ICSDate * created; 
@property (retain) NSString * uid; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDuration * duration; 
@property (retain) ICSDate * dtstart; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDate * last_modified; 
@property (assign) unsigned sequence; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSString * summary; 
@property (retain) NSURL * url; 
+(id)name;
@end
