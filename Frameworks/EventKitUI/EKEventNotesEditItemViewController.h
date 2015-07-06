/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, CalendarNotesCell, NSString;

@interface EKEventNotesEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _table;
	CalendarNotesCell* _cell;
	NSString* _text;

}

@property (nonatomic,copy) NSString * noteText; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)validateAllowingAlert:(char)arg1 ;
-(void)setNoteText:(NSString *)arg1 ;
-(NSString *)noteText;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
@end

