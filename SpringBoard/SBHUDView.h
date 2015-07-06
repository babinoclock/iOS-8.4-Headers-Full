/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:45 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImage, UIView, _UIBackdropView, UIImageView;

@interface SBHUDView : UIView {

	int _level;
	NSString* _title;
	NSString* _subtitle;
	UIImage* _image;
	char _showsProgress;
	float _progress;
	UIView* _blockView;
	_UIBackdropView* _backdropView;
	UIImageView* _backdropMaskImageView;

}

@property (assign,nonatomic) int level;                        //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) char showsProgress;               //@synthesize showsProgress=_showsProgress - In the implementation block
@property (assign,nonatomic) float progress;                   //@synthesize progress=_progress - In the implementation block
+(float)progressIndicatorStep;
+(int)numberOfProgressIndicatorSteps;
-(id)initWithHUDViewLevel:(int)arg1 ;
-(id)_blockColorForValue:(float)arg1 ;
-(void)_updateBlockView:(id)arg1 value:(float)arg2 blockSize:(CGSize)arg3 point:(CGPoint)arg4 ;
-(char)displaysLabel;
-(void)_updateBackdropMask;
-(void)_updateBlockView;
-(void)cancelDismissal;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(void)setProgress:(float)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(float)progress;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)setShowsProgress:(char)arg1 ;
-(char)showsProgress;
@end

