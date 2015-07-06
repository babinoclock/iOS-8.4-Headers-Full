/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem {

	IMHandle* _sender;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,retain,readonly) IMHandle * sender;              //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)sender;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

