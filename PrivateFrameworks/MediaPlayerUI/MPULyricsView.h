/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UITextView, NSString;

@interface MPULyricsView : UIView {

	_UIBackdropView* _backdropView;
	UITextView* _textView;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHidden:(char)arg1 animated:(char)arg2 ;
@end

