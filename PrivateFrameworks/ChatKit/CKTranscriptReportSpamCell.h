/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptLabelCell.h>

@class UIButton, NSAttributedString;

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell {

	UIButton* _reportSpamButton;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText; 
@property (nonatomic,retain) UIButton * reportSpamButton;                          //@synthesize reportSpamButton=_reportSpamButton - In the implementation block
+(id)reportSpamButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)configureForChatItem:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(UIButton *)reportSpamButton;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)setReportSpamButton:(UIButton *)arg1 ;
-(NSAttributedString *)attributedButtonText;
@end

