/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/PKPrinterBrowserDelegate.h>

@protocol UIPrinterBrowserOwner;
@class PKPrinterBrowser, NSMutableArray, NSArray, PKPrinter, UIPrinterSearchingView, NSString;

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {

	id<UIPrinterBrowserOwner> _ownerPanelViewController;
	PKPrinterBrowser* _printerBrowser;
	NSMutableArray* _preferredPrinters;
	NSMutableArray* _otherPrinters;
	NSMutableArray* _filteredOutPrinters;
	NSArray* _lastUsedPrinters;
	PKPrinter* _lockedPrinter;
	char _loaded;
	UIPrinterSearchingView* _searchingView;
	char _clearCurrentPrinter;
	char _shouldFilterPrinters;
	float _maximumPopoverHeight;

}

@property (assign) float maximumPopoverHeight;                      //@synthesize maximumPopoverHeight=_maximumPopoverHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)initWithOwnerViewController:(id)arg1 ;
-(void)showCancelButton;
-(void)stopPrinterBrowser;
-(void)willEnterForeground;
-(float)maximumPopoverHeight;
-(void)adjustPopoverSize;
-(void)startPrinterBrowser;
-(void)updateSearching;
-(id)printerAtIndexPath:(id)arg1 ;
-(void)addPrinter:(id)arg1 moreComing:(char)arg2 ;
-(void)removePrinter:(id)arg1 moreGoing:(char)arg2 ;
-(void)selectPrinter:(id)arg1 ;
-(void)setMaximumPopoverHeight:(float)arg1 ;
@end

