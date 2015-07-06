/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/EKDayViewDataSource.h>
#import <EventKitUI/EKEditItemViewControllerProtocol.h>

@class EKDayView, NSDate, EKEvent, NSString;

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {

	EKDayView* _dayView;
	NSDate* _date;
	EKEvent* _event;
	NSDate* _originalEventStartDate;
	NSDate* _originalEventEndDate;
	char _hasOverriddenEventDates;
	NSDate* _overriddenEventStartDate;
	NSDate* _overriddenEventEndDate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) char presentModally; 
@property (assign,nonatomic) char editItemShouldBeAskedForInjectableViewController; 
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)_eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(unsigned)supportedInterfaceOrientations;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end

