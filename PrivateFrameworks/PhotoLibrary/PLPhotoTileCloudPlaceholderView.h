/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>
#import <PhotoLibrary/PLTilePlaceholderView.h>

@protocol PLPhotoTileCloudPlaceholderViewDelegate;
@class PLRoundProgressView, UIView, UIButton, NSString;

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView> {

	PLRoundProgressView* _loadingIndicatorView;
	UIView* _loadingContainerView;
	UIButton* _loadingErrorButton;
	char _indicatorIsVisible;
	char _showingError;
	char _showingLoading;
	CGRect _imageRect;
	char _toolbarVisible;
	double _lastViewPhaseChangeDate;
	id<PLPhotoTileCloudPlaceholderViewDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showLoadingIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)updateCloudDownloadProgress:(float)arg1 ;
-(void)_retryDownload;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(char)arg1 ;
-(void)showLoadingIndicatorWhenReady;
-(void)showErrorIndicator;
-(void)setToolbarVisible:(char)arg1 ;
-(void)setRetryDelegate:(id)arg1 ;
-(void)setImageRect:(CGRect)arg1 ;
@end

