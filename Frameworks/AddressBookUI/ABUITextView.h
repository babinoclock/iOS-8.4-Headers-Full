/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITextView.h>

@class UIColor, ABSwellTextView;

@interface ABUITextView : UITextView {

	float _lastContentHeight;
	char _isHighlighted;
	UIColor* _savedTextColor;
	UIColor* _highlightedTextColor;
	UIColor* _shadowColor;
	CGSize _shadowOffset;
	char _disallowsSetContentOffset;
	char _informParentOfContentSizeChange;
	NSRange _pinnedCursorPosition;
	ABSwellTextView* _parent;

}

@property (assign,nonatomic) ABSwellTextView * parent;                           //@synthesize parent=_parent - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;              //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                     //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) char disallowsSetContentOffset;                     //@synthesize disallowsSetContentOffset=_disallowsSetContentOffset - In the implementation block
-(void)_updateStylesheet;
-(void)setDisallowsSetContentOffset:(char)arg1 ;
-(void)_secretSetFrame:(CGRect)arg1 ;
-(char)disallowsSetContentOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(char)becomeFirstResponder;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(void)setHighlighted:(char)arg1 ;
-(UIColor *)shadowColor;
-(char)isHighlighted;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)_beginPinningInputViews;
-(void)_endPinningInputViews;
-(UIColor *)highlightedTextColor;
-(ABSwellTextView *)parent;
-(void)setParent:(ABSwellTextView *)arg1 ;
@end

