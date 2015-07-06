/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <SpringBoardUIServices/SBUIEmergencyCallHostInterface.h>

@class _UIBackdropView, UIColor;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {

	_UIBackdropView* _blurView;
	UIColor* _tintColor;
	int _backgroundStyle;
	float _blurRadius;
	char _blursSelf;

}

@property (assign,nonatomic) int backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) float blurRadius;                 //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) char blursSelf;                   //@synthesize blursSelf=_blursSelf - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(void)requestEmergencyCallControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(float)blurRadius;
-(void)setBlurRadius:(float)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)dismiss;
-(void)setBackgroundStyle:(int)arg1 ;
-(int)backgroundStyle;
-(id)tintColorForBackgroundStyle:(int)arg1 outBlurRadius:(float*)arg2 ;
-(void)setBlursSelf:(char)arg1 ;
-(void)_createAndAddBlurViewIfNecessary;
-(char)blursSelf;
@end

