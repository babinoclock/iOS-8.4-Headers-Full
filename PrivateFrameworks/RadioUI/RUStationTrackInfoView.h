/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIView.h>
#import <RadioUI/RUTrackDownloadViewDelegate.h>

@protocol RUStationTrackInfoViewDelegate;
@class UILabel, UIImageView, UITapGestureRecognizer, UIButton, RUTrackDownloadView, MPAVItem, NSString, UIViewController;

@interface RUStationTrackInfoView : UIView <RUTrackDownloadViewDelegate> {

	UILabel* _albumLabel;
	UILabel* _artistLabel;
	UIImageView* _imageView;
	UITapGestureRecognizer* _imageViewTapGestureRecognizer;
	UIButton* _storeButton;
	UILabel* _titleLabel;
	RUTrackDownloadView* _trackDownloadView;
	id<RUStationTrackInfoViewDelegate> _delegate;
	MPAVItem* _avItem;

}

@property (assign,nonatomic,__weak) id<RUStationTrackInfoViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@property (setter=setAVItem:,nonatomic,retain) MPAVItem * avItem;                                          //@synthesize avItem=_avItem - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * trackDownloadPresentingViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultHeightForTraitCollection:(id)arg1 ;
+(id)_artistLabelFont;
+(id)_titleLabelFont;
+(id)_albumLabelFont;
-(void)setAVItem:(id)arg1 ;
-(NSString *)stationHash;
-(long long)stationID;
-(void)_unregisterForAVItemNotifications;
-(void)_registerForAVItemNotifications;
-(void)_avItemArtworkDidChangeNotification:(id)arg1 ;
-(void)_avItemTitlesDidChangeNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RUStationTrackInfoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<RUStationTrackInfoViewDelegate>)delegate;
-(MPAVItem *)avItem;
-(void)trackDownloadViewWillTransition:(id)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)_imageViewTapAction:(id)arg1 ;
-(void)_storeButtonTapAction:(id)arg1 ;
-(id)_newTrackDownloadView;
-(void)_avItemAlbumStoreIDDidChangeNotification:(id)arg1 ;
-(void)setTrackDownloadPresentingViewController:(UIViewController *)arg1 ;
-(UIViewController *)trackDownloadPresentingViewController;
@end

