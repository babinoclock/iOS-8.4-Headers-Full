/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {

	SCD_Union_UI80 _style;
	NSString* _cacheDisplayString;
	int _displayTypeHint;
	int _displayRowHint;
	CGSize _size;
	int _state;
	int _clipCorners;
	char _usesInsets;
	UIEdgeInsets _displayInsets;

}
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI31)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI31)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(void)dealloc;
-(CGSize)size;
-(id)string;
-(void)setSize:(CGSize)arg1 ;
-(char)hasKey;
-(id)stringForRenderFlags:(int)arg1 lightKeyboard:(char)arg2 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(id)_initWithKey:(id)arg1 style:(SCD_Struct_UI31)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(id)_stringWithAdditionalValues:(/*^block*/id)arg1 ;
@end

