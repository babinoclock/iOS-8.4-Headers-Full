/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <PhotoLibrary/PLVideoOverlayButton.h>

@class UIButton, _UIBackdropView;

@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton> {

	int _style;
	UIButton* _button;
	_UIBackdropView* _backdropView;
	id _target;
	SEL _action;

}
-(void)dealloc;
-(int)style;
-(id)initWithStyle:(int)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
@end

