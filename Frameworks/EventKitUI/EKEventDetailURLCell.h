/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel, UITextView;

@interface EKEventDetailURLCell : EKEventDetailCell {

	UILabel* _URLTitleView;
	UITextView* _URLView;

}
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(char)arg2 style:(int)arg3 ;
-(id)_URLView;
-(id)_URLTitleView;
-(char)update;
-(void)setURL:(id)arg1 ;
@end

