/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardEmojiCategoryControl.h>

@class UIKeyboardEmojiCategoryController, UIView, UIKeyboardEmojiGraphicsTraits, NSString;

@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {

	UIKeyboardEmojiCategoryController* _categoryController;
	int _selected;
	UIView* _scrubView;
	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	char _isScrubbing;
	float _scrubStartXLocation;

}

@property (assign) int selectedIndex; 
@property (nonatomic,retain) UIView * scrubView;                                               //@synthesize scrubView=_scrubView - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiGraphicsTraits * emojiGraphicsTraits;              //@synthesize emojiGraphicsTraits=_emojiGraphicsTraits - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIKeyboardEmojiGraphicsTraits *)emojiGraphicsTraits;
-(void)setCategory:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(void)receiveNotifictaion:(id)arg1 ;
-(UIView *)scrubView;
-(CGRect)categorySelectedCircleRect:(int)arg1 ;
-(void)animateScrubberToRect:(CGRect)arg1 ;
-(CGRect)frameForDivider:(int)arg1 ;
-(void)updateCategory;
-(void)setScrubView:(UIView *)arg1 ;
-(void)setEmojiGraphicsTraits:(UIKeyboardEmojiGraphicsTraits *)arg1 ;
@end

