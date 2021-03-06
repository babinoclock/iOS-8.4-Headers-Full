/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/SpringBoardPlugins/NowPlayingArtLockScreen.lockbundle/NowPlayingArtLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NowPlayingArtLockScreen/NowPlayingArtLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _NowPlayingArtView : UIView {

	UIView* _artworkView;
	int _orientation;

}

@property (nonatomic,retain) UIView * artworkView;              //@synthesize artworkView=_artworkView - In the implementation block
@property (assign,nonatomic) int orientation;                   //@synthesize orientation=_orientation - In the implementation block
-(void)layoutSubviews;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(UIView *)artworkView;
-(void)setArtworkView:(UIView *)arg1 ;
-(CGSize)_artworkSize;
@end

