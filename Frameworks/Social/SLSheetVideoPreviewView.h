/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIView, UIImageView, UILabel;

@interface SLSheetVideoPreviewView : SLSheetImagePreviewView {

	UIView* _infoBar;
	UIImageView* _videoGlyphView;
	UILabel* _durationLabel;

}
-(void)setVideoDuration:(double)arg1 ;
-(void)_applyConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
@end

