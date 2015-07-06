/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDictationView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIDimmingView, NSString;

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate> {

	UIDimmingView* _dimmingView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(void)returnToKeyboard;
-(CGPoint)positionForShow;
-(void)endpointButtonPressed;
-(void)setInputViewsHiddenForDictation:(char)arg1 ;
@end

