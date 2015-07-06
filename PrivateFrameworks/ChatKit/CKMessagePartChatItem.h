/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKBalloonChatItem.h>

@class IMMessage, NSArray;

@interface CKMessagePartChatItem : CKBalloonChatItem

@property (nonatomic,retain,readonly) IMMessage * message; 
@property (nonatomic,readonly) char color; 
@property (nonatomic,copy,readonly) NSArray * pasteboardItems; 
-(id)composition;
-(id)description;
-(IMMessage *)message;
-(char)color;
-(id)time;
-(char)canCopy;
-(id)sender;
-(char)isFromMe;
-(char)canForward;
-(char)canSendAsTextMessage;
-(NSArray *)pasteboardItems;
-(char)failed;
-(void)configureBalloonView:(id)arg1 ;
@end

