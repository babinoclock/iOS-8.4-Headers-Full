/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABSectionListHeaderView.h>

@class _UIBackdropView, UIView;

@interface ABSectionListVibrantHeaderView : ABSectionListHeaderView {

	_UIBackdropView* _backdrop;
	UIView* _plusDView;
	char _wantsPlusDLayer;

}

@property (assign,nonatomic) char wantsPlusDLayer;              //@synthesize wantsPlusDLayer=_wantsPlusDLayer - In the implementation block
-(void)setWantsPlusDLayer:(char)arg1 ;
-(char)wantsPlusDLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFloating:(char)arg1 ;
-(void)setBackdropGroupName:(id)arg1 ;
@end

