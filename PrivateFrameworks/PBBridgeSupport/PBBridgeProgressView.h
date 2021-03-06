/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface PBBridgeProgressView : UIView {

	float _currentProgress;
	UIImageView* _appleLogo;
	unsigned _style;

}

@property (assign,nonatomic) float currentProgress;                //@synthesize currentProgress=_currentProgress - In the implementation block
@property (nonatomic,retain) UIImageView * appleLogo;              //@synthesize appleLogo=_appleLogo - In the implementation block
@property (assign,nonatomic) unsigned style;                       //@synthesize style=_style - In the implementation block
-(void)setCurrentProgress:(float)arg1 ;
-(float)currentProgress;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(CGSize)_size;
-(id)initWithStyle:(unsigned)arg1 ;
-(float)_tickLength;
-(UIImageView *)appleLogo;
-(void)setAppleLogo:(UIImageView *)arg1 ;
@end

