/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol OS_dispatch_semaphore, PSMagnifyControllerDelegate;
@class PSMagnifyMode, UISegmentedControl, UIScrollView, UIPageControl, UIView, NSURL, NSMutableDictionary, NSObject, NSString;

@interface PSMagnifyController : PSListController <UIScrollViewDelegate, UIWebViewDelegate> {

	PSMagnifyMode* _originalMagnifyMode;
	PSMagnifyMode* _selectedMagnifyMode;
	UISegmentedControl* _magnifyModePicker;
	UIScrollView* _previewsScroller;
	UIPageControl* _pageControl;
	UIView* _dividerLine;
	NSURL* _HTMLResourceBaseURL;
	NSMutableDictionary* _webViewsForMagnifyMode;
	NSObject*<OS_dispatch_semaphore> _firstLoadSemaphore;
	char _loaded;
	PSMagnifyMode* _initialMagnifyMode;
	char _doneButtonCommits;
	id<PSMagnifyControllerDelegate> _delegate;

}

@property (assign,nonatomic) char doneButtonCommits;                                //@synthesize doneButtonCommits=_doneButtonCommits - In the implementation block
@property (assign,nonatomic) id<PSMagnifyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)commitMagnifyMode:(id)arg1 withRelaunchURL:(id)arg2 ;
+(char)shouldShowMagnify;
+(id)localizedMagnifyModeName;
+(id)currentMagnifyMode;
+(void)commitMagnifyMode:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PSMagnifyControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<PSMagnifyControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)updateNavigationButtons;
-(id)specifiers;
-(id)initWithZoomedSelected:(char)arg1 ;
-(id)arrayOfWebViewsWithCount:(unsigned)arg1 ;
-(id)localizedCSSStringFromUnlocalizedCSSString:(id)arg1 ;
-(void)magnifyModeSelectionChanged:(id)arg1 ;
-(void)setSelectedMagnifyMode:(id)arg1 ;
-(id)currentWebViewSet;
-(char)doneButtonCommits;
-(void)magnifyModeConfirmed:(id)arg1 ;
-(void)finishDone:(id)arg1 ;
-(void)finishCancel:(id)arg1 ;
-(void)setDoneButtonCommits:(char)arg1 ;
@end

