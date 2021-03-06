/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKHyperlinkBalloonView.h>
#import <ChatKit/NSLayoutManagerDelegate.h>

@class UIImageView, NSString;

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate> {

	UIImageView* _chevron;

}

@property (nonatomic,retain) UIImageView * chevron;                 //@synthesize chevron=_chevron - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(void)prepareForDisplay;
@end

