/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UITextLabel, EKUIDividedGridViewController, NSLayoutConstraint;

@interface EKUIDividedGridViewCell : UIView {

	char _selected;
	UITextLabel* _label;
	EKUIDividedGridViewController* _viewController;
	NSLayoutConstraint* _widthConstraint;

}

@property (retain) UITextLabel * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char selected;                                     //@synthesize selected=_selected - In the implementation block
@property (__weak) EKUIDividedGridViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (__weak) NSLayoutConstraint * widthConstraint;                        //@synthesize widthConstraint=_widthConstraint - In the implementation block
-(id)init;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(char)arg1 ;
-(UITextLabel *)label;
-(void)setViewController:(EKUIDividedGridViewController *)arg1 ;
-(EKUIDividedGridViewController *)viewController;
-(void)setLabel:(UITextLabel *)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(char)selected;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

