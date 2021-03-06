/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentItem.h>

@interface CKLocationAttachmentItem : CKAttachmentItem {

	SCD_Struct_CK4 _coordinate;

}

@property (assign,nonatomic) SCD_Struct_CK4 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
+(id)UTITypes;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 guid:(id)arg3 ;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 ;
-(id)pin;
-(id)vCardURLProperties;
-(char)isDroppedPin;
-(SCD_Struct_CK4)coordinate;
-(void)setCoordinate:(SCD_Struct_CK4)arg1 ;
@end

