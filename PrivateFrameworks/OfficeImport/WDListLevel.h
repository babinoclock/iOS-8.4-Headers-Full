/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDOfficeArt, NSMutableString;

@interface WDListLevel : NSObject {

	WDDocument* mDocument;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDOfficeArt* mImage;
	long mStartNumber;
	int mNumberFormat;
	char mRestartNumbering;
	long mRestartLevel;
	char mLegal;
	int mSuffix;
	NSMutableString* mText;
	char mLegacy;
	long mLegacySpace;
	long mLegacyIndent;
	int mJustification;

}
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)description;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)image;
-(id)initWithDocument:(id)arg1 ;
-(void)setLegacy:(char)arg1 ;
-(id)characterProperties;
-(id)paragraphProperties;
-(int)justification;
-(long)startNumber;
-(void)setRestartNumbering:(char)arg1 ;
-(void)setLegal:(char)arg1 ;
-(void)setLegacySpace:(long)arg1 ;
-(void)setLegacyIndent:(long)arg1 ;
-(char)restartNumbering;
-(char)legal;
-(int)suffix;
-(void)setStartNumber:(long)arg1 ;
-(void)setJustification:(int)arg1 ;
-(void)setSuffix:(int)arg1 ;
-(char)startNumberOverridden;
-(char)numberFormatOverridden;
-(char)imageBullet;
-(char)imageBulletOverridden;
-(char)restartNumberingOverridden;
-(long)restartLevel;
-(void)setRestartLevel:(long)arg1 ;
-(char)restartLevelOverridden;
-(char)legalOverridden;
-(char)suffixOverridden;
-(char)textOverridden;
-(char)legacy;
-(long)legacySpace;
-(long)legacyIndent;
-(char)justificationOverridden;
-(int)numberFormat;
-(void)setNumberFormat:(int)arg1 ;
@end

