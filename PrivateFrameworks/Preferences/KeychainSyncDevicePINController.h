/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/KeychainSyncTextEntryController.h>

@class DevicePINController, NSString, UIKeyboard;

@interface KeychainSyncDevicePINController : KeychainSyncTextEntryController {

	DevicePINController* _devicePINController;
	char _showingBlockedMessage;
	NSString* _enterPasscodeTitle;
	NSString* _enterPasscodeReason;
	UIKeyboard* _disabledKeyboard;

}

@property (nonatomic,retain) NSString * enterPasscodeTitle;               //@synthesize enterPasscodeTitle=_enterPasscodeTitle - In the implementation block
@property (nonatomic,retain) NSString * enterPasscodeReason;              //@synthesize enterPasscodeReason=_enterPasscodeReason - In the implementation block
@property (nonatomic,retain) UIKeyboard * disabledKeyboard;               //@synthesize disabledKeyboard=_disabledKeyboard - In the implementation block
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)specifiers;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)setEnterPasscodeTitle:(NSString *)arg1 ;
-(void)setEnterPasscodeReason:(NSString *)arg1 ;
-(void)updateBlockedState:(id)arg1 ;
-(void)setDisabledKeyboard:(UIKeyboard *)arg1 ;
-(NSString *)enterPasscodeTitle;
-(NSString *)enterPasscodeReason;
-(UIKeyboard *)disabledKeyboard;
@end

