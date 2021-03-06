/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject

@property (nonatomic,readonly) MPMediaItem * nativeItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)scriptMediaTypeForNativeMediaType:(unsigned)arg1 ;
+(id)copyScriptMediaTypesForNativeMediaTypes:(unsigned)arg1 ;
+(unsigned)nativeMediaTypesForScriptMediaTypes:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)_className;
-(id)imageURLWithWidth:(id)arg1 height:(id)arg2 ;
-(MPMediaItem *)nativeItem;
@end

