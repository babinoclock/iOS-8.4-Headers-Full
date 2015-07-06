/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface _RUTrackActionsHeaderView : UIView {

	UILabel* _artistLabel;
	UIImageView* _artworkImageView;
	UILabel* _songLabel;

}

@property (nonatomic,copy) NSString * artistText; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,copy) NSString * songText; 
+(float)defaultHeightForTraitCollection:(id)arg1 ;
+(id)_artistLabelFont;
+(id)_songLabelFont;
-(void)layoutSubviews;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(NSString *)artistText;
-(void)setArtistText:(NSString *)arg1 ;
-(void)setSongText:(NSString *)arg1 ;
-(NSString *)songText;
@end

