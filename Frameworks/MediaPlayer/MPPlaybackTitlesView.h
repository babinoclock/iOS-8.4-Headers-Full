/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, NSArray;

@interface MPPlaybackTitlesView : UIControl {

	UIView* _contentView;
	NSArray* _labels;
	NSArray* _titles;
	char _showingLoadingUI;
	unsigned _marqueeScrollableIndex;
	char _marqueeScrollingActive;

}

@property (nonatomic,retain) NSArray * titles;                             //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) char showingLoadingUI;                        //@synthesize showingLoadingUI=_showingLoadingUI - In the implementation block
@property (assign,nonatomic) char marqueeScrollingActive;                  //@synthesize marqueeScrollingActive=_marqueeScrollingActive - In the implementation block
@property (assign,nonatomic) unsigned marqueeScrollableIndex;              //@synthesize marqueeScrollableIndex=_marqueeScrollableIndex - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(id)_addLabel:(unsigned)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_layoutLoadingUI;
-(void)_updateLabelMarqueeScrolling;
-(void)_tearDownLabels;
-(char)showingLoadingUI;
-(id)_addLoadingLabel;
-(unsigned)marqueeScrollableIndex;
-(char)marqueeScrollingActive;
-(void)setMarqueeScrollingActive:(char)arg1 ;
-(void)setMarqueeScrollableIndex:(unsigned)arg1 ;
-(void)setShowingLoadingUI:(char)arg1 ;
-(void)_layoutLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
@end

