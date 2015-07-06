/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class _UIBackdropView, UITextView, MPAVItem, NSString;

@interface MusicNowPlayingLyricsViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	_UIBackdropView* _backdropView;
	UITextView* _textView;
	MPAVItem* _currentItem;

}

@property (nonatomic,readonly) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                       //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) MPAVItem * currentItem;                        //@synthesize currentItem=_currentItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setCurrentItem:(MPAVItem *)arg1 ;
-(MPAVItem *)currentItem;
-(UITextView *)textView;
-(_UIBackdropView *)backdropView;
-(void)_updateLyrics;
@end

