/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSMutableCopying.h>
#import <UIKit/NSCopying.h>

@class UIColor, NSNumber;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying> {

	int _style;
	char _legacy;
	int _legibilityStyle;
	UIColor* _foregroundColor;
	NSNumber* _overrideHeight;

}

@property (nonatomic,readonly) int style;                                     //@synthesize style=_style - In the implementation block
@property (getter=isLegacy,nonatomic,readonly) char legacy;                   //@synthesize legacy=_legacy - In the implementation block
@property (nonatomic,readonly) int legibilityStyle;                           //@synthesize legibilityStyle=_legibilityStyle - In the implementation block
@property (nonatomic,retain,readonly) UIColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * overrideHeight;              //@synthesize overrideHeight=_overrideHeight - In the implementation block
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isTranslucent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(char)isDoubleHeight;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(UIColor *)foregroundColor;
-(int)legibilityStyle;
-(NSNumber *)overrideHeight;
-(char)isLegacy;
-(id)initWithStyle:(int)arg1 legacy:(char)arg2 legibilityStyle:(int)arg3 foregroundColor:(id)arg4 overrideHeight:(id)arg5 ;
-(id)initWithStyle:(int)arg1 legacy:(char)arg2 legibilityStyle:(int)arg3 foregroundColor:(id)arg4 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
@end

