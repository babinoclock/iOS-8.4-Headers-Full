/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>
#import <MediaPlayerUI/MPUExtrasSlideshowViewControllerDataSource.h>
#import <MediaPlayerUI/MPUExtrasZoomingImageTransitionParticipant.h>

@class MPUExtrasSlideshowViewController, NSArray, UITapGestureRecognizer, IKSlideshowElement, NSString;

@interface MPUExtrasSlideshowTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasSlideshowViewControllerDataSource, MPUExtrasZoomingImageTransitionParticipant> {

	char _overlayHidden;
	char _preventNavbarAutohide;
	MPUExtrasSlideshowViewController* _slideshowViewController;
	NSArray* _imageElements;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) MPUExtrasSlideshowViewController * slideshowViewController;              //@synthesize slideshowViewController=_slideshowViewController - In the implementation block
@property (nonatomic,readonly) IKSlideshowElement * templateElement; 
@property (nonatomic,retain) NSArray * imageElements;                                                 //@synthesize imageElements=_imageElements - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                           //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleTap:(id)arg1 ;
-(void)dealloc;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(char)arg2 ;
-(MPUExtrasSlideshowViewController *)slideshowViewController;
-(char)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned)arg2 ;
-(void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned)numberOfImagesForSlideshowViewController:(id)arg1 ;
-(void)setImageElements:(NSArray *)arg1 ;
-(void)setSlideshowViewController:(MPUExtrasSlideshowViewController *)arg1 ;
-(void)_toggleVisibilityOfNavigationBar;
-(NSArray *)imageElements;
-(void)_firstImageLoadedHideNavigationBar;
-(char)showsPlaceholder;
-(IKSlideshowElement *)templateElement;
@end

