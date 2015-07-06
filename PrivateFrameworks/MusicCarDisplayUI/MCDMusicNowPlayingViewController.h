/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MusicCarDisplayUI/AFContextProvider.h>
#import <MusicCarDisplayUI/MCDNowPlayingViewControllerDataSource.h>
#import <MusicCarDisplayUI/MCDNowPlayingViewControllerDelegate.h>

@protocol MCDCarDisplayServiceProvider;
@class MPAVController, MCDNowPlayingViewController, MPMediaQuery, NSString, UIImage, UILabel, UIAlertController, NSTimer, NSArray;

@interface MCDMusicNowPlayingViewController : UIViewController <AFContextProvider, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate> {

	id<MCDCarDisplayServiceProvider> _serviceProvider;
	MPAVController* _player;
	MCDNowPlayingViewController* _nowPlayingViewController;
	MPMediaQuery* _albumQuery;
	NSString* _nowPlayingTitle;
	NSString* _nowPlayingArtist;
	NSString* _nowPlayingAlbum;
	UIImage* _nowPlayingAlbumArt;
	UILabel* _rightTitleLabel;
	UIAlertController* _actionSheetAlertController;
	char _isLive;
	char _isExplicitTrack;
	NSTimer* _updateTimer;
	NSArray* _controlPages;
	unsigned _currentPageIndex;
	int _viewMode;

}

@property (nonatomic,retain) NSArray * controlPages;                 //@synthesize controlPages=_controlPages - In the implementation block
@property (assign,nonatomic) unsigned currentPageIndex;              //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (assign,nonatomic) int viewMode;                           //@synthesize viewMode=_viewMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_unregisterForNotifications;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_registerForNotifications;
-(void)_itemChanged:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)preferredFocusedItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(int)viewMode;
-(unsigned)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned)arg1 ;
-(char)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)_itemIsExplicitDidChangeNotification:(id)arg1 ;
-(void)_itemTitlesDidChangeNotification:(id)arg1 ;
-(id)initWithQuery:(id)arg1 startingAtIndex:(unsigned)arg2 player:(id)arg3 serviceProvider:(id)arg4 ;
-(id)newPresentationNavigationController;
-(id)initWithGeniusMixPlaylist:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 startPlay:(char)arg3 ;
-(id)initWithRadioStation:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(void)setViewMode:(int)arg1 ;
-(void)updateTrackInformation;
-(void)_playbackContentsChanged:(id)arg1 ;
-(void)_itemStoreIDDidChangeNotification:(id)arg1 ;
-(void)_presentNowPlayingInfo;
-(void)_setPlayerRepeatType:(unsigned)arg1 ;
-(void)_playerTick;
-(id)artistTextForNowPlayingController:(id)arg1 ;
-(id)albumTextForNowPlayingController:(id)arg1 ;
-(id)titleForNowPlayingController:(id)arg1 ;
-(id)backgroundArtForNowPlayingController:(id)arg1 ;
-(char)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1 ;
-(double)playbackDurationForNowPlayingViewController:(id)arg1 withElapsedTime:(out double*)arg2 ;
-(char)nowPlayingViewControllerIsPlaying:(id)arg1 ;
-(unsigned)shuffleTypeForNowPlayingViewController:(id)arg1 ;
-(id)shuffleStringForNowPlayingViewController:(id)arg1 ;
-(unsigned)repeatTypeForNowPlayingViewController:(id)arg1 ;
-(id)repeatStringForNowPlayingViewController:(id)arg1 ;
-(char)nowPlayingViewController:(id)arg1 shouldDisplayButton:(int)arg2 withImage:(out id*)arg3 tinted:(out char*)arg4 ;
-(char)nowPlayingViewController:(id)arg1 shouldEnableButton:(int)arg2 ;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(int)arg2 state:(int)arg3 ;
-(char)nowPlayingViewControllerCanShuffle:(id)arg1 ;
-(char)nowPlayingViewControllerCanRepeat:(id)arg1 ;
-(char)nowPlayingViewControllerCanCreate:(id)arg1 ;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg1 ;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg1 ;
-(void)nowPlayingViewControllerCreate:(id)arg1 ;
-(id)initWithQueryToShuffle:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(char)nowPlayingViewControllerShouldUseWishlist:(id)arg1 ;
-(NSArray *)controlPages;
-(void)setControlPages:(NSArray *)arg1 ;
@end

