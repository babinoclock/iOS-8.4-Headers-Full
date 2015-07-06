/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:53 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIColor;


@protocol SBSearchResultDetailsViewController <NSObject>
@property (assign) id<SBSearchResultDetailsViewControllerDelegate> actionDelegate; 
@property (readonly) char wantsInset; 
@property (retain) UIColor * contentBackgroundColor; 
@optional
-(void)setContentBackgroundColor:(id)arg1;
-(UIColor *)contentBackgroundColor;

@required
+(id)viewControllerForResult:(id)arg1 inSection:(id)arg2;
-(char)wantsInset;
-(void)setActionDelegate:(id)arg1;
-(id<SBSearchResultDetailsViewControllerDelegate>)actionDelegate;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1;

@end

