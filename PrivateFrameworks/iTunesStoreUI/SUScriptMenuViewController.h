/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptFunction, WebScriptObject, NSNumber, NSString;

@interface SUScriptMenuViewController : SUScriptViewController {

	SUScriptFunction* _action;

}

@property (retain) WebScriptObject * action; 
@property (retain) id items; 
@property (retain) NSNumber * selectedIndex; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(WebScriptObject *)action;
-(NSString *)title;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)setAction:(WebScriptObject *)arg1 ;
-(id)_viewController;
-(NSNumber *)selectedIndex;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(id)newNativeViewController;
-(id)itemWithTitle:(id)arg1 userInfo:(id)arg2 ;
@end

