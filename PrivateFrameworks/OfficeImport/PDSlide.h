/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDSlideChild.h>

@class PDSlideLayout, NSMutableArray, PDNotesSlide;

@interface PDSlide : PDSlideChild {

	PDSlideLayout* mSlideLayout;
	NSMutableArray* mComments;
	PDNotesSlide* mNotesSlide;

}
-(unsigned)commentCount;
-(void)dealloc;
-(id)background;
-(id)defaultTheme;
-(id)slideLayout;
-(id)parentSlideBase;
-(void)doneWithContent;
-(void)setSlideLayout:(id)arg1 ;
-(id)notesSlide;
-(void)setNotesSlide:(id)arg1 ;
-(id)commentAtIndex:(unsigned)arg1 ;
-(id)parentTextStyleForTables;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(char)arg4 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3 ;
-(char)hasMappableSlideNumberShape;
-(void)addComment:(id)arg1 ;
@end

