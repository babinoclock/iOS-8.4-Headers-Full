/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class EKEventDetailAttendeesListView;

@interface EKEventDetailAttendeesCell : EKEventDetailCell {

	EKEventDetailAttendeesListView* _attendeesListView;

}
-(void)setAttendees:(id)arg1 ;
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(char)arg2 ;
-(id)_attendeesListView;
-(char)update;
@end

