/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, UIImageView;

@interface MPVideoDestinationBackgroundView : UIView {

	NSString* _destinationName;
	UILabel* _destinationSubtitleLabel;
	UILabel* _destinationTitleLabel;
	int _style;
	UIImageView* _videosImageView;

}

@property (nonatomic,copy) NSString * destinationName;              //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) int style;                             //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
@end

