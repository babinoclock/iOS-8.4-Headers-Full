/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSMutableSet;

@interface ABKeyboardAdjuster : NSObject {

	NSMutableSet* _adjustmentRecords;
	char _active;

}

@property (assign,nonatomic) char active;              //@synthesize active=_active - In the implementation block
+(id)sharedAdjuster;
-(id)recordForScrollView:(id)arg1 ;
-(char)containsScrollView:(id)arg1 ;
-(char)shouldForceAutomaticKeyboardForView:(id)arg1 ;
-(void)textFieldTextDidBeginEditingNotification:(id)arg1 ;
-(void)textFieldTextDidEndEditingNotification:(id)arg1 ;
-(void)textViewTextDidBeginEditingNotification:(id)arg1 ;
-(void)textViewTextDidEndEditingNotification:(id)arg1 ;
-(void)dateFieldDateDidBeginEditingNotification:(id)arg1 ;
-(void)dateFieldDateDidEndEditingNotification:(id)arg1 ;
-(void)cancelDelayedAdjustmentsForView:(id)arg1 ;
-(void)manuallyAdjustEdgeInsets:(UIEdgeInsets)arg1 force:(char)arg2 ;
-(void)addScrollView:(id)arg1 ;
-(void)removeScrollView:(id)arg1 ;
-(void)resetAdjustment;
-(void)dealloc;
-(id)init;
-(char)active;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setActive:(char)arg1 ;
-(void)_adjustTableForKeyboardInfo:(id)arg1 ;
@end

