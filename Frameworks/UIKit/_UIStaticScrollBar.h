/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView, NSInvocation, NSArray;

@interface _UIStaticScrollBar : UIView {

	UIButton* _upButton;
	UIButton* _downButton;
	UIView* _dividerLine;
	NSInvocation* _invocation;
	NSArray* _buttonConstraints;
	NSArray* _dividerConstraints;
	char _shouldInsetButtons;
	char _isOnLeftSide;

}

@property (assign,nonatomic) char shouldInsetButtons;              //@synthesize shouldInsetButtons=_shouldInsetButtons - In the implementation block
@property (assign,nonatomic) char isOnLeftSide;                    //@synthesize isOnLeftSide=_isOnLeftSide - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)buttonTapped:(id)arg1 ;
-(void)_updateButtonConstraints;
-(void)_updateDividerConstraints;
-(char)shouldInsetButtons;
-(char)isOnLeftSide;
-(void)setTarget:(id)arg1 forAction:(SEL)arg2 ;
-(void)setShouldInsetButtons:(char)arg1 ;
-(void)setIsOnLeftSide:(char)arg1 ;
-(CGRect)centeringBounds;
@end

