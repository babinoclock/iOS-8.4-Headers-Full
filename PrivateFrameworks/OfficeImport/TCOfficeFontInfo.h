/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TCOfficeFontInfo : NSObject {

	char _isBold;
	char _isItalic;
	NSString* _fontName;
	NSString* _alphaFontName;

}

@property (nonatomic,retain) NSString * fontName;                   //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,retain) NSString * alphaFontName;              //@synthesize alphaFontName=_alphaFontName - In the implementation block
@property (assign,nonatomic) char isBold;                           //@synthesize isBold=_isBold - In the implementation block
@property (assign,nonatomic) char isItalic;                         //@synthesize isItalic=_isItalic - In the implementation block
-(id)description;
-(NSString *)fontName;
-(char)isBold;
-(void)setFontName:(NSString *)arg1 ;
-(char)isItalic;
-(NSString *)alphaFontName;
-(void)setAlphaFontName:(NSString *)arg1 ;
-(void)setIsBold:(char)arg1 ;
-(void)setIsItalic:(char)arg1 ;
@end
