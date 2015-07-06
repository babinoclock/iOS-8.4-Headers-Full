/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPrinterBrowserOwner.h>

@class UIPrintInteractionController, UIPrintInfo, UINavigationController, UIPrintPanelTableViewController, UIViewController, UIPopoverController, UIWindow, PKPrinter, NSArray, UIPrintPaper, NSString;

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner> {

	UIPrintInteractionController* _printInteractionController;
	UIPrintInfo* _observedPrintInfo;
	UINavigationController* _navigationController;
	UIPrintPanelTableViewController* _tableViewController;
	UIViewController* _parentController;
	UIPopoverController* _poverController;
	UIWindow* _window;
	PKPrinter* _printer;
	char _dismissed;
	char _animated;
	char _observingRotation;

}

@property (nonatomic,retain) PKPrinter * printer;                    //@synthesize printer=_printer - In the implementation block
@property (nonatomic,readonly) int pageCount; 
@property (assign,nonatomic) NSRange pageRange; 
@property (assign,nonatomic) char duplex; 
@property (nonatomic,readonly) NSArray * paperList; 
@property (nonatomic,retain) UIPrintPaper * paper; 
@property (assign,nonatomic) int copies; 
@property (nonatomic,readonly) char showDuplex; 
@property (nonatomic,readonly) char showPageRange; 
@property (nonatomic,readonly) char showCopies; 
@property (nonatomic,readonly) char showPaper; 
@property (nonatomic,readonly) char showPaperSelection; 
@property (nonatomic,readonly) char showPrinterWarning; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)printerBrowserViewDidDisappear;
-(void)_presentWindow;
-(void)_keyWindowWillRotate:(id)arg1 ;
-(void)_presentInParentAnimated:(char)arg1 ;
-(void)dismissAnimated:(char)arg1 ;
-(char)filtersPrinters;
-(void)cancelPrinting;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(int)pageCount;
-(char)duplex;
-(void)setDuplex:(char)arg1 ;
-(int)copies;
-(void)setCopies:(int)arg1 ;
-(void)printPanelDidDisappear;
-(void)printPaperViewDidDisappear;
-(void)printRangeViewDidDisappear;
-(void)dismissPrintPanel:(char)arg1 animated:(char)arg2 ;
-(char)showPageRange;
-(NSRange)pageRange;
-(void)setPageRange:(NSRange)arg1 ;
-(id)_removeRollsFrom:(id)arg1 ;
-(UIPrintPaper *)paper;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(NSArray *)paperList;
-(char)showPaper;
-(id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2 ;
-(void)presentPrintPanelAnimated:(char)arg1 ;
-(void)presentPrintPanelFromRect:(CGRect)arg1 inView:(id)arg2 animated:(char)arg3 ;
-(void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(char)arg2 ;
-(void)startPrinting;
-(char)showDuplex;
-(char)showCopies;
-(char)showPrinterWarning;
-(char)showPaperSelection;
@end

