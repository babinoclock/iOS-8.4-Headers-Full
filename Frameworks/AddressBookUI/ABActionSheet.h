/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIActionSheet.h>

@interface ABActionSheet : UIActionSheet {

	CFArrayRef _tags;
	CFArrayRef _tag2s;
	CFArrayRef _tag3s;
	CFArrayRef _tag4s;
	void* _ab_context;

}

@property (assign,nonatomic) void* ab_context;              //@synthesize ab_context=_ab_context - In the implementation block
-(int)ab_addButtonWithTitle:(id)arg1 tag:(int)arg2 ;
-(id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 ;
-(id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 tag2:(int)arg4 ;
-(id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 tag2:(int)arg4 tag3:(const void*)arg5 ;
-(id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 tag2:(int)arg4 tag3:(const void*)arg5 tag4:(const void*)arg6 ;
-(int)ab_tagAtIndex:(int)arg1 ;
-(int)ab_tag2AtIndex:(int)arg1 ;
-(const void*)ab_tag3AtIndex:(int)arg1 ;
-(const void*)ab_tag4AtIndex:(int)arg1 ;
-(int)ab_addButtonWithTitle:(id)arg1 tag:(int)arg2 tag2:(int)arg3 ;
-(void*)ab_context;
-(void)setAb_context:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(int)_addButtonWithTitle:(id)arg1 ;
-(id)_addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
@end

