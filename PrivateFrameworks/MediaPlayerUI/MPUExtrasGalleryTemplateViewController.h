/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

@class MPUExtrasBannerController, MPUExtrasGridElementViewController;

@interface MPUExtrasGalleryTemplateViewController : MPUExtrasTemplateViewController {

	MPUExtrasBannerController* _bannerController;
	MPUExtrasGridElementViewController* _gridViewController;
	unsigned _selectedItemIndex;

}

@property (assign,nonatomic) unsigned selectedItemIndex;              //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)_prepareLayout;
-(char)showsPlaceholder;
-(id)templateElement;
-(unsigned)selectedItemIndex;
-(void)setSelectedItemIndex:(unsigned)arg1 ;
@end

