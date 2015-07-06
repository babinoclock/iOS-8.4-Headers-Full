/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessagePartChatItem.h>

@class NSAttributedString;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem {

	NSAttributedString* _subject;

}

@property (nonatomic,copy,readonly) NSAttributedString * subject;              //@synthesize subject=_subject - In the implementation block
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)subject;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(int)arg3 subject:(id)arg4 ;
@end

