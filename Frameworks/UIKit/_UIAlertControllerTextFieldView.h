/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, UIView, _UIAlertControllerTextField, UITextField;

@interface _UIAlertControllerTextFieldView : UIView {

	UIVisualEffectView* _borderContainerView;
	UIView* _borderView;
	UIView* _innerContentView;
	_UIAlertControllerTextField* _textField;

}

@property (readonly) UITextField * textField; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)_addConstraints;
-(UITextField *)textField;
-(id)_textFieldFont;
-(float)_borderWidth;
@end

