/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIButton.h>

@interface MPUTextButton : UIButton {

	int _titleAlignment;

}

@property (assign,nonatomic) int titleAlignment;              //@synthesize titleAlignment=_titleAlignment - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setTitleAlignment:(int)arg1 ;
-(int)titleAlignment;
-(void)_commonTextButtonInit;
@end

