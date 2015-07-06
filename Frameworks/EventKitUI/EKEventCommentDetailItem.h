/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <UIKit/UITextFieldDelegate.h>

@class EKEventDetailCommentCell, NSString;

@interface EKEventCommentDetailItem : EKEventDetailItem <UITextFieldDelegate> {

	EKEventDetailCommentCell* _cell;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)configureWithCalendar:(id)arg1 preview:(char)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(void)reset;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end

