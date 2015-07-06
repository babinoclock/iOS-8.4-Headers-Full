/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UICompletionTablePrivate, NSString;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {

	UICompletionTablePrivate* _private;

}

@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic) UIEdgeInsets scrollIndicatorInsets; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_shadowImage;
+(id)_cellFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsets;
-(id)_completionForRow:(int)arg1 ;
-(void)setTopStrokeColor:(id)arg1 ;
@end
