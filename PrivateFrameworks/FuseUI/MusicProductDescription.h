/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/NSCopying.h>

@class NSString;

@interface MusicProductDescription : NSObject <NSCopying> {

	int _format;
	NSString* _text;
	NSString* _storeEditorNotes;

}

@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (nonatomic,readonly) int format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * storeEditorNotes;              //@synthesize storeEditorNotes=_storeEditorNotes - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(NSString *)text;
-(id)initWithText:(id)arg1 ;
-(NSString *)storeEditorNotes;
-(id)initWithStoreEditorNotes:(id)arg1 ;
-(int)format;
@end

