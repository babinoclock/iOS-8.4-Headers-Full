/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class CKConversation, MFComposeRecipientTextView, UIView, UIButton, _UIBackdropView;

@interface CKTranscriptGroupHeaderView : UIView {

	CKConversation* _conversation;
	MFComposeRecipientTextView* _textView;
	UIView* _separator;
	UIButton* _actionButton;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain) CKConversation * conversation;                      //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) MFComposeRecipientTextView * textView;              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * separator;                                 //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                            //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                     //@synthesize backdropView=_backdropView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTextView:(MFComposeRecipientTextView *)arg1 ;
-(MFComposeRecipientTextView *)textView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(void)setSeparator:(UIView *)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(UIButton *)actionButton;
-(id)initWithFrame:(CGRect)arg1 conversation:(id)arg2 ;
-(UIView *)separator;
@end

