/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/NSCopying.h>

@class NSMutableDictionary, MusicArtworkPlaceholderKey, NSString, NSSet, UIColor;

@interface MusicEntityViewContentArtworkDescriptor : NSObject <NSCopying> {

	NSMutableDictionary* _cachedArtworkPlaceholderImages;
	MusicArtworkPlaceholderKey* _lastUsedArtworkPlaceholderKey;
	NSString* _artworkAllowsUserInteractionProperty;
	NSString* _artworkProperty;
	NSSet* _artworkAdditionalPropertiesToPrefetch;
	float _artworkAspectRatio;
	UIColor* _artworkBackgoundColor;
	UIColor* _artworkBorderColor;
	UIColor* _artworkHighlightedBackgoundColor;
	int _artworkContentMode;
	NSString* _wantsToHideBorderProperty;
	int _artworkPlaceholderStyle;
	CGSize _artworkSize;
	UIEdgeInsets _artworkEdgeInsets;

}

@property (nonatomic,copy) NSString * artworkAllowsUserInteractionProperty;              //@synthesize artworkAllowsUserInteractionProperty=_artworkAllowsUserInteractionProperty - In the implementation block
@property (nonatomic,copy) NSString * artworkProperty;                                   //@synthesize artworkProperty=_artworkProperty - In the implementation block
@property (nonatomic,copy) NSSet * artworkAdditionalPropertiesToPrefetch;                //@synthesize artworkAdditionalPropertiesToPrefetch=_artworkAdditionalPropertiesToPrefetch - In the implementation block
@property (assign,nonatomic) CGSize artworkSize;                                         //@synthesize artworkSize=_artworkSize - In the implementation block
@property (assign,nonatomic) float artworkAspectRatio;                                   //@synthesize artworkAspectRatio=_artworkAspectRatio - In the implementation block
@property (nonatomic,copy) UIColor * artworkBackgoundColor;                              //@synthesize artworkBackgoundColor=_artworkBackgoundColor - In the implementation block
@property (nonatomic,copy) UIColor * artworkBorderColor;                                 //@synthesize artworkBorderColor=_artworkBorderColor - In the implementation block
@property (nonatomic,copy) UIColor * artworkHighlightedBackgoundColor;                   //@synthesize artworkHighlightedBackgoundColor=_artworkHighlightedBackgoundColor - In the implementation block
@property (assign,nonatomic) int artworkContentMode;                                     //@synthesize artworkContentMode=_artworkContentMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets artworkEdgeInsets;                             //@synthesize artworkEdgeInsets=_artworkEdgeInsets - In the implementation block
@property (nonatomic,copy) NSString * wantsToHideBorderProperty;                         //@synthesize wantsToHideBorderProperty=_wantsToHideBorderProperty - In the implementation block
@property (assign,nonatomic) int artworkPlaceholderStyle;                                //@synthesize artworkPlaceholderStyle=_artworkPlaceholderStyle - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)artworkEdgeInsets;
-(CGSize)artworkSize;
-(float)artworkAspectRatio;
-(void)setArtworkProperty:(NSString *)arg1 ;
-(void)setArtworkAllowsUserInteractionProperty:(NSString *)arg1 ;
-(void)setArtworkPlaceholderStyle:(int)arg1 ;
-(int)artworkContentMode;
-(NSString *)wantsToHideBorderProperty;
-(UIColor *)artworkBorderColor;
-(NSString *)artworkProperty;
-(NSString *)artworkAllowsUserInteractionProperty;
-(UIColor *)artworkHighlightedBackgoundColor;
-(UIColor *)artworkBackgoundColor;
-(id)artworkPlaceholderImageForSize:(CGSize)arg1 scale:(float)arg2 ;
-(void)setArtworkEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setArtworkSize:(CGSize)arg1 ;
-(void)setWantsToHideBorderProperty:(NSString *)arg1 ;
-(void)setArtworkBackgoundColor:(UIColor *)arg1 ;
-(id)_missingArtworkImageNamed:(id)arg1 forSize:(CGSize)arg2 ;
-(id)_grayArtworkPlaceholderImageForSize:(CGSize)arg1 scale:(float)arg2 ;
-(void)setArtworkAdditionalPropertiesToPrefetch:(NSSet *)arg1 ;
-(void)setArtworkAspectRatio:(float)arg1 ;
-(void)setArtworkBorderColor:(UIColor *)arg1 ;
-(void)setArtworkContentMode:(int)arg1 ;
-(NSSet *)artworkAdditionalPropertiesToPrefetch;
-(void)setArtworkHighlightedBackgoundColor:(UIColor *)arg1 ;
-(int)artworkPlaceholderStyle;
@end

