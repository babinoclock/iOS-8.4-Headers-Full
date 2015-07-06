/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAlertControllerVisualStyle.h>

@class UIAlertControllerDescriptor;

@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle {

	UIAlertControllerDescriptor* _descriptor;

}

@property (nonatomic,retain) UIAlertControllerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)dealloc;
-(float)maximumWidth;
-(void)setDescriptor:(UIAlertControllerDescriptor *)arg1 ;
-(float)verticalContentMargin;
-(id)titleLabelFont;
-(id)titleLabelColor;
-(float)marginAboveTitleLabelFirstBaseline;
-(float)marginBelowLastLabelLastBaseline;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(float)horizontalContentMargin;
-(float)visualAltitude;
-(id)regularActionFont;
-(id)defaultActionFont;
-(float)minimumActionHeight;
-(CGAffineTransform)presentationAnimationStartTransform;
-(float)marginBelowTitleLabelLastBaseline;
-(float)marginAboveMessageLabelFirstBaseline;
-(float)marginBelowMessageLabelLastBaseline;
-(float)backgroundCornerRadius;
-(UIAlertControllerDescriptor *)descriptor;
@end

