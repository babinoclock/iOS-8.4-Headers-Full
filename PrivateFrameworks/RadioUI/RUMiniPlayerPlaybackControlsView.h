/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <MediaPlayerUI/MPUMiniPlayerPlaybackControlsView.h>

@class UIView;

@interface RUMiniPlayerPlaybackControlsView : MPUMiniPlayerPlaybackControlsView

@property (nonatomic,readonly) UIView * viewForPresentingStationActions; 
@property (nonatomic,readonly) UIView * viewForPresentingTrackActions; 
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIView *)viewForPresentingStationActions;
-(UIView *)viewForPresentingTrackActions;
-(char)_allowsScrubbingForItem:(id)arg1 ;
-(id)_artistTextForItem:(id)arg1 ;
-(Class)_transportControlsClassForItem:(id)arg1 ;
-(char)_updateTitlesInView:(id)arg1 forItem:(id)arg2 ;
-(Class)_miniPlayerActionsViewControllerClass;
-(void)_setupVisibleAndDisabledPartsForItem:(id)arg1 ;
-(char)_wantsCreateButtonForItem:(id)arg1 ;
@end

