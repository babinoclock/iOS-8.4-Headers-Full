/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface _UIPickerViewTopFrame : UIView {

	UIImage* _leftImage;
	UIImage* _middleImage;
	UIImage* _rightImage;
	float _inset;
	float _shift;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setLeftImage:(id)arg1 middleImage:(id)arg2 rightImage:(id)arg3 ;
-(void)setInset:(float)arg1 ;
-(void)setShift:(float)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

