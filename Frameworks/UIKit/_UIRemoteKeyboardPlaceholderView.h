/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIRemoteKeyboardInputViewPlaceholder.h>

@class UIView;

@interface _UIRemoteKeyboardPlaceholderView : UIView <_UIRemoteKeyboardInputViewPlaceholder> {

	UIView* _mirroredView;

}

@property (retain,readonly) UIView * placeheldView; 
+(id)placeholderForView:(id)arg1 ;
+(id)placeholderWithWidth:(float)arg1 height:(float)arg2 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(char)refreshPlaceholder;
-(UIView *)placeheldView;
@end
