/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:44 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/NSCopying.h>
#import <SpringBoard/NSMutableCopying.h>

@class UIFont, NSString, UIColor;

@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying> {

	UIFont* _font;
	NSString* _text;
	char _containsNonLatinLikeCharacters;
	char _containsEmoji;
	char _canEllipsize;
	char _canTighten;
	float _scale;
	CGSize _maxSize;
	int _style;
	UIColor* _textColor;
	char _recalculateHash;
	char _canUseMemoryPool;
	char _accessibilityIncreaseContrastEnabled;
	UIColor* _focusHighlightColor;
	UIEdgeInsets _textInsets;
	UIEdgeInsets _fontLanguageInsets;
	int _iconLocation;
	unsigned _hash;

}

@property (nonatomic,copy,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) CGSize maxSize;                                         //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,retain,readonly) UIFont * font;                                   //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) float scale;                                            //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) char canEllipsize;                                      //@synthesize canEllipsize=_canEllipsize - In the implementation block
@property (nonatomic,readonly) char canTighten;                                        //@synthesize canTighten=_canTighten - In the implementation block
@property (nonatomic,readonly) char containsNonLatinLikeCharacters;                    //@synthesize containsNonLatinLikeCharacters=_containsNonLatinLikeCharacters - In the implementation block
@property (nonatomic,readonly) char containsEmoji;                                     //@synthesize containsEmoji=_containsEmoji - In the implementation block
@property (nonatomic,readonly) char canUseMemoryPool;                                  //@synthesize canUseMemoryPool=_canUseMemoryPool - In the implementation block
@property (nonatomic,readonly) int style;                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain,readonly) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) char accessibilityIncreaseContrastEnabled;              //@synthesize accessibilityIncreaseContrastEnabled=_accessibilityIncreaseContrastEnabled - In the implementation block
@property (nonatomic,retain,readonly) UIColor * focusHighlightColor;                   //@synthesize focusHighlightColor=_focusHighlightColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets textInsets;                                //@synthesize textInsets=_textInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets fontLanguageInsets;                        //@synthesize fontLanguageInsets=_fontLanguageInsets - In the implementation block
@property (nonatomic,readonly) int iconLocation;                                       //@synthesize iconLocation=_iconLocation - In the implementation block
-(char)colorspaceIsGrayscale;
-(void)_noteNeedsHashRecalculation;
-(char)canEllipsize;
-(char)canTighten;
-(char)containsNonLatinLikeCharacters;
-(char)containsEmoji;
-(char)canUseMemoryPool;
-(char)accessibilityIncreaseContrastEnabled;
-(UIColor *)focusHighlightColor;
-(UIEdgeInsets)fontLanguageInsets;
-(int)iconLocation;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(CGSize)maxSize;
-(int)style;
-(UIFont *)font;
-(UIColor *)textColor;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(UIEdgeInsets)textInsets;
@end

