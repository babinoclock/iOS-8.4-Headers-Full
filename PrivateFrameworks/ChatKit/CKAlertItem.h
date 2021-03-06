/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface CKAlertItem : SBAlertItem {

	int _alignment;
	char _alignmentHasBeenSet;
	char _displayingEntireMessage;

}
-(id)name;
-(int)bodyTextAlignmentForAlertSheet:(id)arg1 displayedLineCount:(int)arg2 ;
-(char)shouldHideSMSPreview;
-(id)alertSheet;
-(void)_deactivateAllTaggedAlertItems;
-(void)didDeactivateForReason:(int)arg1 ;
-(id)_taggedAlertItems;
-(void)_deactivateTaggedAlertItem;
-(id)messageText;
-(Class)alertSheetClass;
-(void)_tag;
-(void)willActivate;
-(void)_untag;
-(id)lockLabel;
-(char)willShowInAwayItems;
-(char)shouldShowInEmergencyCall;
-(char)shouldShowInLockScreen;
-(char)forcesModalAlertAppearance;
@end

