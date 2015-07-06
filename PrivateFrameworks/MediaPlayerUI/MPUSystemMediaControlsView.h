/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayerUI/SKUIItemOfferButtonDelegate.h>

@protocol MPUSystemMediaControlsViewDelegate;
@class MPUItemOfferButton, MPUSkipLimitView, MPUTransportControlsView, MPUChronologicalProgressView, MPUMediaControlsTitlesView, MPUMediaControlsVolumeView, MPUSystemBuyButtonConfiguration, NSString;

@interface MPUSystemMediaControlsView : UIView <SKUIItemOfferButtonDelegate> {

	MPUItemOfferButton* _buyTrackButton;
	MPUItemOfferButton* _buyAlbumButton;
	int _prefsChangedNotifyToken;
	id<MPUSystemMediaControlsViewDelegate> _delegate;
	int _style;
	MPUSkipLimitView* _skipLimitView;
	MPUTransportControlsView* _transportControlsView;
	MPUChronologicalProgressView* _timeInformationView;
	MPUMediaControlsTitlesView* _trackInformationView;
	MPUMediaControlsVolumeView* _volumeView;
	MPUSystemBuyButtonConfiguration* _buyTrackConfiguration;
	MPUSystemBuyButtonConfiguration* _buyAlbumConfiguration;

}

@property (assign,nonatomic,__weak) id<MPUSystemMediaControlsViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int style;                                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) MPUSkipLimitView * skipLimitView;                                     //@synthesize skipLimitView=_skipLimitView - In the implementation block
@property (nonatomic,readonly) MPUTransportControlsView * transportControlsView;                     //@synthesize transportControlsView=_transportControlsView - In the implementation block
@property (nonatomic,readonly) MPUChronologicalProgressView * timeInformationView;                   //@synthesize timeInformationView=_timeInformationView - In the implementation block
@property (nonatomic,readonly) MPUMediaControlsTitlesView * trackInformationView;                    //@synthesize trackInformationView=_trackInformationView - In the implementation block
@property (nonatomic,readonly) MPUMediaControlsVolumeView * volumeView;                              //@synthesize volumeView=_volumeView - In the implementation block
@property (nonatomic,readonly) MPUSystemBuyButtonConfiguration * buyTrackConfiguration;              //@synthesize buyTrackConfiguration=_buyTrackConfiguration - In the implementation block
@property (nonatomic,readonly) MPUSystemBuyButtonConfiguration * buyAlbumConfiguration;              //@synthesize buyAlbumConfiguration=_buyAlbumConfiguration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPUMediaControlsVolumeView *)volumeView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MPUSystemMediaControlsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MPUSystemMediaControlsViewDelegate>)delegate;
-(int)style;
-(id)initWithStyle:(int)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(MPUTransportControlsView *)transportControlsView;
-(void)_layoutSkipLimitView;
-(MPUSkipLimitView *)skipLimitView;
-(id)_createBuyButtonWithTitle:(id)arg1 style:(int)arg2 ;
-(id)_createBuyButtonConfiguration;
-(MPUSystemBuyButtonConfiguration *)buyTrackConfiguration;
-(MPUSystemBuyButtonConfiguration *)buyAlbumConfiguration;
-(void)_layoutSubviewsControlCenteriPad;
-(UIEdgeInsets)_controlsInsets;
-(char)_needsFullWidthTransportControls;
-(float)_transportControlsFullWidthPaddingForBounds:(CGRect)arg1 ;
-(void)_layoutBuyButtons;
-(void)_layoutBuyButtonsControlCenteriPad;
-(id)_buyButtonForConfiguration:(id)arg1 ;
-(void)_setBuyButtonVisibility:(char)arg1 forButton:(id)arg2 ;
-(void)_setProgressType:(unsigned)arg1 forBuyButton:(id)arg2 ;
-(void)_setDownloadProgress:(float)arg1 forBuyButton:(id)arg2 ;
-(void)_updateBuyButton:(id)arg1 withOffer:(id)arg2 ;
-(void)_setConfirmationState:(char)arg1 forBuyButton:(id)arg2 ;
-(char)_systemwideBuyButtonsEnabled;
-(void)_buyButtonShowConfirmationAction:(id)arg1 ;
-(void)_buyButtonCancelConfirmationAction:(id)arg1 ;
-(void)_buyButtonPurchaseAction:(id)arg1 ;
-(void)updatePlaybackState:(char)arg1 ;
-(MPUChronologicalProgressView *)timeInformationView;
-(MPUMediaControlsTitlesView *)trackInformationView;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
@end

