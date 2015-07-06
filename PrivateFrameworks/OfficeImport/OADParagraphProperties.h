/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADCharacterProperties.h>

@class OADBulletSize, OADBulletColor, OADBulletFont, OADBulletProperties, OADTextSpacing, NSMutableArray;

@interface OADParagraphProperties : OADCharacterProperties {

	OADBulletSize* mBulletSize;
	OADBulletColor* mBulletColor;
	OADBulletFont* mBulletFont;
	OADBulletProperties* mBulletProperties;
	OADTextSpacing* mLineSpacing;
	OADTextSpacing* mBeforeSpacing;
	OADTextSpacing* mAfterSpacing;
	NSMutableArray* mTabStops;
	double mLeftMargin;
	double mRightMargin;
	double mIndent;
	double mDefaultTab;
	int mLevel;
	int mBulletCharSet;
	unsigned char mAlign;
	unsigned char mWrap;
	unsigned char mFontAlign;
	unsigned mIsLatinLineBreak : 1;
	unsigned mIsHangingPunctuation : 1;
	unsigned mHasTabStops : 1;
	unsigned mHasLeftMargin : 1;
	unsigned mHasRightMargin : 1;
	unsigned mHasLevel : 1;
	unsigned mHasIndent : 1;
	unsigned mHasAlign : 1;
	unsigned mHasDefaultTab : 1;
	unsigned mHasWrap : 1;
	unsigned mHasFontAlign : 1;
	unsigned mHasIsLatinLineBreak : 1;
	unsigned mHasIsHangingPunctuation : 1;
	unsigned mHasBulletCharSet : 1;

}
+(id)defaultProperties;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(void)setRightMargin:(double)arg1 ;
-(id)lineSpacing;
-(void)setLineSpacing:(id)arg1 ;
-(double)rightMargin;
-(char)hasLevel;
-(double)leftMargin;
-(void)setLeftMargin:(double)arg1 ;
-(void)setIndent:(double)arg1 ;
-(void)setBulletProperties:(id)arg1 ;
-(double)indent;
-(id)bulletProperties;
-(id)bulletSize;
-(double)nonOveridenLeftMargin;
-(char)hasBulletSize;
-(char)hasBulletFont;
-(id)bulletFont;
-(char)hasBulletColor;
-(id)bulletColor;
-(char)hasBulletProperties;
-(char)hasAlign;
-(char)hasLeftMargin;
-(char)hasIndent;
-(char)hasBeforeSpacing;
-(id)beforeSpacing;
-(char)hasAfterSpacing;
-(id)afterSpacing;
-(void)setDefaultTab:(double)arg1 ;
-(void)setIsLatinLineBreak:(char)arg1 ;
-(void)setIsHangingPunctuation:(char)arg1 ;
-(void)setBeforeSpacing:(id)arg1 ;
-(void)setAfterSpacing:(id)arg1 ;
-(void)setBulletColor:(id)arg1 ;
-(void)setBulletSize:(id)arg1 ;
-(void)setBulletFont:(id)arg1 ;
-(void)setBulletCharSet:(int)arg1 ;
-(id)addTabStop;
-(void)setFontAlign:(int)arg1 ;
-(char)hasTabStops;
-(char)hasRightMargin;
-(char)hasDefaultTab;
-(char)hasWrap;
-(char)hasFontAlign;
-(char)hasIsLatinLineBreak;
-(char)hasIsHangingPunctuation;
-(char)hasBulletCharSet;
-(void)clearTabStops;
-(unsigned)tabStopCount;
-(id)tabStopAtIndex:(unsigned)arg1 ;
-(double)defaultTab;
-(int)fontAlign;
-(char)isLatinLineBreak;
-(char)isHangingPunctuation;
-(int)bulletCharSet;
-(void)overrideWithProperties:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)overrideWithCharacterProperties:(id)arg1 ;
-(id)initWithDefaults;
-(char)hasLineSpacing;
-(int)align;
-(void)setAlign:(int)arg1 ;
-(int)wrap;
-(void)setWrap:(int)arg1 ;
-(id)tabStops;
@end
