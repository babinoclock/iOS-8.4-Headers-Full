/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStructuredThemeStore.h>

@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {

	NSString* _identifier;
	NSMutableDictionary* _memoryStore;
	NSMutableDictionary* _nameIdentifierStore;
	int _maxNameIdentifier;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(id)imagesWithName:(id)arg1 ;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2 ;
-(void)clearRenditionCache;
-(int)maximumRenditionKeyTokenCount;
-(char)usesCUISystemThemeRenditionKey;
-(id)allImageNames;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1 isFPO:(char*)arg2 ;
@end
