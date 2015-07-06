/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:46 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderView.h>

@class UIButton, SBStarkIconLayoutOverrideStrategy;

@interface SBStarkFolderView : SBFolderView {

	char _buttonUXEnabled;
	UIButton* _scrollLeftButton;
	UIButton* _scrollRightButton;
	CGSize _scrollButtonSize;
	SBStarkIconLayoutOverrideStrategy* _iconLayoutOverrideStrategy;
	UIEdgeInsets _listViewInsets;

}

@property (nonatomic,retain) SBStarkIconLayoutOverrideStrategy * iconLayoutOverrideStrategy; 
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(void)_scrollButtonPressed:(id)arg1 ;
-(void)_updateScrollButtonStatesForIndex:(int)arg1 ;
-(void)resetIconListViews;
-(void)_evaluateScrollingForListViewsIfNecessary;
-(void)updateIconListViews;
-(void)_updateIconListFrames;
-(void)_updatePageControlToIndex:(int)arg1 ;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(void)setInteractionAffordances:(unsigned)arg1 ;
-(SBStarkIconLayoutOverrideStrategy *)iconLayoutOverrideStrategy;
-(void)setIconLayoutOverrideStrategy:(SBStarkIconLayoutOverrideStrategy *)arg1 ;
-(id)_newPageControl;
-(float)_offsetToCenterPageControlInSpaceForPageControl;
-(void)dealloc;
-(void)_layoutSubviews;
@end

