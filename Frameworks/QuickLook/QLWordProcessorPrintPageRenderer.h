/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLWebViewPrintPageHelper.h>

@class UIWebPaginationInfo;

@interface QLWordProcessorPrintPageRenderer : QLWebViewPrintPageHelper {

	UIWebPaginationInfo* _paginationInfo;

}
-(id)pdfDataForPageAtIndex:(int)arg1 printingDone:(char*)arg2 ;
-(id)_paginationInfo;
-(void)dealloc;
-(int)numberOfPages;
@end

