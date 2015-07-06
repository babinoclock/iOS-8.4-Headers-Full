/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView {

	UIColor* m_patternColor;
	UIColor* m_checkerColor;
	float m_scale;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(char)_canDrawContent;
-(void)updatePatternColor;
-(id)checkerColor;
-(void)setCheckerColor:(id)arg1 ;
@end
