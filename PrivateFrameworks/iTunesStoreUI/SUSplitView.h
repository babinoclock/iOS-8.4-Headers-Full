/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SUSplitView : UIView {

	UIView* _firstView;
	int _layoutType;
	float _minimumPaneSize;
	UIView* _secondView;
	float _splitPosition;
	char _vertical;

}

@property (nonatomic,retain) UIView * firstView;                           //@synthesize firstView=_firstView - In the implementation block
@property (assign,nonatomic) int layoutType;                               //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) UIView * secondView;                          //@synthesize secondView=_secondView - In the implementation block
@property (assign,nonatomic) float splitPosition;                          //@synthesize splitPosition=_splitPosition - In the implementation block
@property (assign,getter=isVertical,nonatomic) char vertical;              //@synthesize vertical=_vertical - In the implementation block
@property (assign,nonatomic) float minimumPaneSize;                        //@synthesize minimumPaneSize=_minimumPaneSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(char)isVertical;
-(void)setVertical:(char)arg1 ;
-(int)layoutType;
-(float)minimumPaneSize;
-(float)splitPosition;
-(void)setLayoutType:(int)arg1 ;
-(void)setSplitPosition:(float)arg1 ;
-(void)setMinimumPaneSize:(float)arg1 ;
-(void)setFirstView:(UIView *)arg1 ;
-(void)setSecondView:(UIView *)arg1 ;
-(float)_minimumPaneSizeForLayout;
-(UIView *)firstView;
-(UIView *)secondView;
@end

