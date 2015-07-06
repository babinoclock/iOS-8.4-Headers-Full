/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIImageView.h>

@class TPLegacyButton;

@interface TPLegacyCallWaitingButton : UIImageView {

	TPLegacyButton* _innerButton;
	unsigned _type : 1;

}
+(id)_buttonForType:(int)arg1 ;
+(CGSize)defaultSizeForType:(int)arg1 ;
+(float)defaultVerticalCenteringOffset;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned)arg3 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
-(void)removeTarget:(id)arg1 forEvents:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 type:(int)arg2 ;
-(id)initTopForIncomingCallWaiting;
-(id)initTopForTTY;
-(id)initBottomForIncomingCallWaiting;
-(id)initBottomForSecondIncomingCallWaiting;
-(id)initBottomForTTYWithTitle:(id)arg1 ;
-(void)removeTarget:(id)arg1 forControlEvents:(unsigned)arg2 ;
@end

