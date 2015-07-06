/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPrintInteractionControllerDelegate;
#import <UIKit/UIKit-Structs.h>
@class UIPrintInfo, UIPrintPaper, UIPrintPageRenderer, UIPrintFormatter, NSArray, PKPrinter;

@interface UIPrintInteractionController : NSObject {

	char _hidesNumberOfCopies;
	/*^block*/id _completionHandler;
	unsigned _backgroundTaskIdentifier;
	id _printState;
	char _showsPageRange;
	char _showsPaperSelectionForLoadedPapers;
	UIPrintInfo* _printInfo;
	id<UIPrintInteractionControllerDelegate> _delegate;
	UIPrintPaper* _printPaper;
	UIPrintPageRenderer* _printPageRenderer;
	UIPrintFormatter* _printFormatter;
	id _printingItem;
	NSArray* _printingItems;
	id<UIPrintInteractionControllerDelegate> _printActivityDelegate;

}

@property (nonatomic,retain) UIPrintInfo * printInfo;                                                     //@synthesize printInfo=_printInfo - In the implementation block
@property (assign,nonatomic) id<UIPrintInteractionControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsPageRange;                                                         //@synthesize showsPageRange=_showsPageRange - In the implementation block
@property (assign,nonatomic) char showsNumberOfCopies; 
@property (assign,nonatomic) char showsPaperSelectionForLoadedPapers;                                     //@synthesize showsPaperSelectionForLoadedPapers=_showsPaperSelectionForLoadedPapers - In the implementation block
@property (nonatomic,readonly) UIPrintPaper * printPaper;                                                 //@synthesize printPaper=_printPaper - In the implementation block
@property (nonatomic,retain) UIPrintPageRenderer * printPageRenderer;                                     //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * printFormatter;                                           //@synthesize printFormatter=_printFormatter - In the implementation block
@property (nonatomic,copy) id printingItem;                                                               //@synthesize printingItem=_printingItem - In the implementation block
@property (nonatomic,copy) NSArray * printingItems;                                                       //@synthesize printingItems=_printingItems - In the implementation block
@property (assign,nonatomic) id<UIPrintInteractionControllerDelegate> printActivityDelegate;              //@synthesize printActivityDelegate=_printActivityDelegate - In the implementation block
@property (nonatomic,readonly) int pageCount; 
@property (assign,nonatomic) NSRange pageRange; 
@property (nonatomic,retain) PKPrinter * printer; 
@property (nonatomic,retain) UIPrintPaper * paper; 
+(char)isPrintingAvailable;
+(id)sharedPrintController;
+(id)printableUTIs;
+(char)canPrintURL:(id)arg1 ;
+(char)canPrintData:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<UIPrintInteractionControllerDelegate>)arg1 ;
-(id)init;
-(id<UIPrintInteractionControllerDelegate>)delegate;
-(id)_init;
-(void)dismissAnimated:(char)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(int)pageCount;
-(UIPrintInfo *)printInfo;
-(char)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)presentAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)presentFromBarButtonItem:(id)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(id)_currentPrintInfo;
-(void)_printPanelDidPresent;
-(void)_printPanelWillDismiss:(char)arg1 ;
-(void)_printPanelDidDismiss;
-(void)_updatePageCount;
-(NSRange)pageRange;
-(void)setPageRange:(NSRange)arg1 ;
-(CGSize)_printItemContentSize;
-(UIPrintPaper *)paper;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(char)_canShowDuplex;
-(char)_canShowPageRange;
-(char)_canShowCopies;
-(char)_canShowPaperList;
-(void)_cleanPrintState;
-(char)_setupPrintPanel:(/*^block*/id)arg1 ;
-(void)_setPrintInfoState:(int)arg1 ;
-(void)_endPrintJob:(char)arg1 error:(id)arg2 ;
-(id)printingItem;
-(id)_paperForPDFItem:(id)arg1 withDuplexMode:(int)arg2 ;
-(void)_updatePrintPaper;
-(void)_startPrinting;
-(id)_paperForContentType:(int)arg1 ;
-(void)_preparePrintInfo;
-(void)_printPage;
-(id)_printPageRenderer:(id)arg1 ;
-(id)_printItem:(id)arg1 ;
-(void)setPrintingItem:(id)arg1 ;
-(char)printToPrinter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)showsNumberOfCopies;
-(void)setShowsNumberOfCopies:(char)arg1 ;
-(void)setPrintInfo:(UIPrintInfo *)arg1 ;
-(char)showsPageRange;
-(void)setShowsPageRange:(char)arg1 ;
-(char)showsPaperSelectionForLoadedPapers;
-(void)setShowsPaperSelectionForLoadedPapers:(char)arg1 ;
-(UIPrintPaper *)printPaper;
-(UIPrintFormatter *)printFormatter;
-(void)setPrintFormatter:(UIPrintFormatter *)arg1 ;
-(NSArray *)printingItems;
-(void)setPrintingItems:(NSArray *)arg1 ;
-(id<UIPrintInteractionControllerDelegate>)printActivityDelegate;
-(void)setPrintActivityDelegate:(id<UIPrintInteractionControllerDelegate>)arg1 ;
-(void)_enableManualPrintPage:(char)arg1 ;
-(void)_manualPrintPage;
-(void)_cancelManualPrintPage;
-(oneway void)release;
@end
