/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UIWebViewDelegate.h>

@class PSSoftwareUpdateAnimatedIcon, UIProgressView, UILabel, PSWebContainerView, UIImage, NSString;

@interface PSSoftwareUpdateTitleCell : PSTableCell <UIWebViewDelegate> {

	int _progressStyle;
	PSSoftwareUpdateAnimatedIcon* _animatedGearView;
	char _animatingGearView;
	UIProgressView* _progressBar;
	UILabel* _updateStatusLabel;
	PSWebContainerView* _releaseNotesSummaryView;

}

@property (nonatomic,retain,readonly) UIImage * gearBackgroundImage; 
@property (nonatomic,retain) UIProgressView * progressBar;                              //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) UILabel * updateStatusLabel;                               //@synthesize updateStatusLabel=_updateStatusLabel - In the implementation block
@property (nonatomic,retain) PSWebContainerView * releaseNotesSummaryView;              //@synthesize releaseNotesSummaryView=_releaseNotesSummaryView - In the implementation block
@property (assign,nonatomic) int progressDisplayStyle; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)cellStyle;
-(void)dealloc;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)didMoveToSuperview;
-(void)setProgress:(float)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(UIProgressView *)progressBar;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(void)setStatusMessage:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(UIImage *)gearBackgroundImage;
-(id)newSoftwareUpdateAnimatedIconWithFrame:(CGRect)arg1 ;
-(void)sizeToFitWithTable:(id)arg1 ;
-(void)setAnimatingGearView:(char)arg1 ;
-(void)setReleaseNotesSummary:(id)arg1 ;
-(float)preferredHeightWithTable:(id)arg1 ;
-(int)progressDisplayStyle;
-(void)setProgressDisplayStyle:(int)arg1 ;
-(UILabel *)updateStatusLabel;
-(void)setUpdateStatusLabel:(UILabel *)arg1 ;
-(PSWebContainerView *)releaseNotesSummaryView;
-(void)setReleaseNotesSummaryView:(PSWebContainerView *)arg1 ;
@end

