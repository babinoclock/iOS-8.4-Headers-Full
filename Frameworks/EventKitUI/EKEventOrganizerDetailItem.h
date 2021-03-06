/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@interface EKEventOrganizerDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	char _cellNeedsUpdate;

}
-(char)configureWithCalendar:(id)arg1 preview:(char)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(void)setCellPosition:(int)arg1 ;
-(void)_updateCellIfNeededForWidth:(float)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(void)reset;
@end

