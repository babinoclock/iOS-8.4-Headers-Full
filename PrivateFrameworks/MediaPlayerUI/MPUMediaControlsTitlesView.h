/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUNowPlayingTitlesView.h>
#import <MediaPlayerUI/SBUIControlCenterControlObserver.h>
#import <MediaPlayerUI/MPUContentSizeCategoryChanging.h>

@protocol MPUMediaControlsTitlesViewDelegate;
@class CALayer, NSString;

@interface MPUMediaControlsTitlesView : MPUNowPlayingTitlesView <SBUIControlCenterControlObserver, MPUContentSizeCategoryChanging> {

	CALayer* _titleEdgesLayerMask;
	CALayer* _detailEdgesLayerMask;
	NSString* _appDisplayName;
	char _displayingAppName;
	char _highlighted;
	int _mediaControlsStyle;
	id<MPUMediaControlsTitlesViewDelegate> _delegate;

}

@property (nonatomic,readonly) int mediaControlsStyle;                                            //@synthesize mediaControlsStyle=_mediaControlsStyle - In the implementation block
@property (assign,nonatomic,__weak) id<MPUMediaControlsTitlesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;                               //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)detailTextColorForMediaControlsStyle:(int)arg1 highlighted:(char)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<MPUMediaControlsTitlesViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MPUMediaControlsTitlesViewDelegate>)delegate;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(id)_titleTextAttributes;
-(id)_detailTextAttributes;
-(void)updateTextForContentSizeCategory:(id)arg1 ;
-(id)initWithMediaControlsStyle:(int)arg1 ;
-(void)updateTrackInformationWithNowPlayingInfo:(id)arg1 ;
-(void)updateNowPlayingAppDisplayName:(id)arg1 ;
-(void)_touchControlActivate:(id)arg1 ;
-(void)_touchControlDeactivate:(id)arg1 ;
-(void)_touchControlTapped:(id)arg1 ;
-(id)_createEdgesLayerMask;
-(void)_setGlowEnabled:(char)arg1 forLabel:(id)arg2 ;
-(int)mediaControlsStyle;
@end
