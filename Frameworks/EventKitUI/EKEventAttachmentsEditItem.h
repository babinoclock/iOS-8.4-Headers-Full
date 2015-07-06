/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <EventKitUI/EKEventAttachmentCellControllerDelegate.h>
#import <EventKitUI/EKEventAttachmentEditViewControllerDelegate.h>

@class NSArray, NSString;

@interface EKEventAttachmentsEditItem : EKEventEditItem <EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate> {

	NSArray* _cellControllers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(unsigned)numberOfSubitems;
-(void)refreshFromCalendarItemAndStore;
-(char)_shouldCondenseIntoSingleItem;
-(void)_cleanUpCellControllers;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned)arg2 ;
-(id)parentViewControllerForAttachmentCellController:(id)arg1 ;
-(id)owningEventForAttachmentCellController:(id)arg1 ;
-(id)owningEventForAttachmentEditViewController:(id)arg1 ;
-(char)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(char)usesDetailViewControllerForSubitem:(unsigned)arg1 ;
-(void)dealloc;
@end

