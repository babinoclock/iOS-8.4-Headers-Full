/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class MPUArtworkView, UIImage, UIImageView, NSArray;

@interface MPUExtrasConstrainedArtworkContainerView : UIView {

	char _shouldAutoresizeMaskLayerToFillBounds;
	char _shouldBottomAlignArtwork;
	MPUArtworkView* _artworkView;
	UIImage* _overlayImage;
	float _overlayScale;
	UIImageView* _overlayView;
	NSArray* _overlaySizeConstraints;

}

@property (nonatomic,retain) MPUArtworkView * artworkView;                            //@synthesize artworkView=_artworkView - In the implementation block
@property (assign,nonatomic) char shouldAutoresizeMaskLayerToFillBounds;              //@synthesize shouldAutoresizeMaskLayerToFillBounds=_shouldAutoresizeMaskLayerToFillBounds - In the implementation block
@property (assign,nonatomic) char shouldBottomAlignArtwork;                           //@synthesize shouldBottomAlignArtwork=_shouldBottomAlignArtwork - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                  //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) float overlayScale;                                      //@synthesize overlayScale=_overlayScale - In the implementation block
@property (nonatomic,retain) UIImageView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) NSArray * overlaySizeConstraints;                        //@synthesize overlaySizeConstraints=_overlaySizeConstraints - In the implementation block
-(UIImage *)overlayImage;
-(UIImageView *)overlayView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MPUArtworkView *)artworkView;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)setOverlayScale:(float)arg1 ;
-(void)setShouldBottomAlignArtwork:(char)arg1 ;
-(void)setArtworkView:(MPUArtworkView *)arg1 ;
-(char)shouldBottomAlignArtwork;
-(char)shouldAutoresizeMaskLayerToFillBounds;
-(void)setShouldAutoresizeMaskLayerToFillBounds:(char)arg1 ;
-(float)overlayScale;
-(NSArray *)overlaySizeConstraints;
-(void)setOverlaySizeConstraints:(NSArray *)arg1 ;
-(void)setOverlayView:(UIImageView *)arg1 ;
@end
