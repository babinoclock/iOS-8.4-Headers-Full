/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SACalendarEvent.h>

@class NSNumber;

@interface SACalendarAceUiCalendarEvent : SACalendarEvent

@property (nonatomic,copy) NSNumber * durationInMinutes; 
+(id)aceUiCalendarEvent;
+(id)aceUiCalendarEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSNumber *)durationInMinutes;
-(void)setDurationInMinutes:(NSNumber *)arg1 ;
@end
