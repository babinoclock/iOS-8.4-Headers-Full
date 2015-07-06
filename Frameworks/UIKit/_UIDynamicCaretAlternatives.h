/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSArray;

@interface _UIDynamicCaretAlternatives : UIView {

	UIView* _verticalDivider;
	UIView* _horizontalDivider;
	NSArray* _alternativesButtons;

}

@property (nonatomic,retain) UIView * verticalDivider;                   //@synthesize verticalDivider=_verticalDivider - In the implementation block
@property (nonatomic,retain) UIView * horizontalDivider;                 //@synthesize horizontalDivider=_horizontalDivider - In the implementation block
@property (nonatomic,retain) NSArray * alternativesButtons;              //@synthesize alternativesButtons=_alternativesButtons - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setVerticalDivider:(UIView *)arg1 ;
-(UIView *)verticalDivider;
-(void)setHorizontalDivider:(UIView *)arg1 ;
-(UIView *)horizontalDivider;
-(void)setAlternativesButtons:(NSArray *)arg1 ;
-(NSArray *)alternativesButtons;
-(void)setButtonLabels:(id)arg1 ;
-(int)indexOfButtonForPoint:(CGPoint)arg1 ;
-(void)highlightButtonAtIndex:(int)arg1 ;
@end

