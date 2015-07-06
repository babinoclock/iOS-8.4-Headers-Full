/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIPrintPageRenderer.h>

@protocol QLPrintPageRendererDataSource;
@interface QLPrintPageRenderer : UIPrintPageRenderer {

	id<QLPrintPageRendererDataSource> _dataSource;
	int _cachedNumberOfPages;
	CGSize _sizeWhenNumberOfPagesWasCached;
	char _printingDone;
	int _numberOfPrintedPages;

}

@property (assign) id<QLPrintPageRendererDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)prepareForPrinting;
-(void)setDataSource:(id<QLPrintPageRendererDataSource>)arg1 ;
-(id)init;
-(id<QLPrintPageRendererDataSource>)dataSource;
-(int)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
@end

