/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUScriptFunction, NSArray;

@interface SUNativeScriptMenuViewController : SUMenuViewController {

	SUScriptFunction* _action;
	NSArray* _menuItems;

}

@property (nonatomic,retain) SUScriptFunction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                    //@synthesize menuItems=_menuItems - In the implementation block
-(void)dealloc;
-(SUScriptFunction *)action;
-(void)setAction:(SUScriptFunction *)arg1 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(int)numberOfMenuItems;
-(id)copyScriptViewController;
-(void)performActionForMenuItemAtIndex:(int)arg1 ;
-(id)titleOfMenuItemAtIndex:(int)arg1 ;
-(char)isMenuItemEnabledAtIndex:(int)arg1 ;
@end

