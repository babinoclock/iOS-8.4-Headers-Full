/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@class NSDate, IMHandle;

@interface CKBalloonChatItem : CKChatItem {

	char _isFirstChatItem;

}

@property (nonatomic,readonly) char balloonOrientation; 
@property (nonatomic,readonly) unsigned balloonCorners; 
@property (nonatomic,readonly) Class balloonViewClass; 
@property (getter=isFromMe,nonatomic,readonly) char fromMe; 
@property (nonatomic,readonly) char failed; 
@property (nonatomic,retain,readonly) NSDate * time; 
@property (nonatomic,retain,readonly) IMHandle * sender; 
@property (assign,nonatomic) char isFirstChatItem;                       //@synthesize isFirstChatItem=_isFirstChatItem - In the implementation block
-(id)description;
-(char)isEditable;
-(Class)cellClass;
-(NSDate *)time;
-(IMHandle *)sender;
-(UIEdgeInsets)contentInsets;
-(id)contactImage;
-(Class)balloonViewClass;
-(unsigned)balloonCorners;
-(char)isFromMe;
-(char)transcriptOrientation;
-(char)displayDuringSend;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(char)wantsDrawerLayout;
-(id)loadTranscriptDrawerText;
-(id)cellIdentifier;
-(void)setIsFirstChatItem:(char)arg1 ;
-(char)balloonOrientation;
-(char)failed;
-(void)configureBalloonView:(id)arg1 ;
-(char)isFirstChatItem;
-(char)needsPreservedAspectRatio;
-(char)needsAdjustedTextAlignmentInsets;
@end
