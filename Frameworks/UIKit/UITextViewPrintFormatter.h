/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewPrintFormatter.h>

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {

	struct {
		unsigned initializedUsedRects : 1;
	}  _textViewPrintFormatterFlags;
	NSArray* _pageData;

}
-(void)dealloc;
-(void)setTextAlignment:(int)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(id)font;
-(int)textAlignment;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)_textView;
-(int)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(int)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(id)_pageData;
@end
