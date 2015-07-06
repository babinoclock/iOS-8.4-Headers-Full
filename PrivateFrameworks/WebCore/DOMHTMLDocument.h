/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMDocument.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLDocument : DOMDocument

@property (readonly) DOMHTMLCollection * embeds; 
@property (readonly) DOMHTMLCollection * plugins; 
@property (readonly) DOMHTMLCollection * scripts; 
@property (readonly) int width; 
@property (readonly) int height; 
@property (copy) NSString * dir; 
@property (copy) NSString * designMode; 
@property (copy,readonly) NSString * compatMode; 
@property (copy) NSString * bgColor; 
@property (copy) NSString * fgColor; 
@property (copy) NSString * alinkColor; 
@property (copy) NSString * linkColor; 
@property (copy) NSString * vlinkColor; 
+(id)mf_listElements;
-(id)mf_createMessageQuoteElement;
-(int)width;
-(int)height;
-(void)close;
-(void)clear;
-(NSString *)designMode;
-(void)setDesignMode:(NSString *)arg1 ;
-(void)open;
-(void)write:(id)arg1 ;
-(NSString *)bgColor;
-(NSString *)compatMode;
-(id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(id)createDocumentFragmentWithText:(id)arg1 ;
-(id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2 ;
-(id)_createDocumentFragmentWithText:(id)arg1 ;
-(void)setBgColor:(NSString *)arg1 ;
-(DOMHTMLCollection *)embeds;
-(DOMHTMLCollection *)plugins;
-(DOMHTMLCollection *)scripts;
-(NSString *)dir;
-(void)setDir:(NSString *)arg1 ;
-(NSString *)fgColor;
-(void)setFgColor:(NSString *)arg1 ;
-(NSString *)alinkColor;
-(void)setAlinkColor:(NSString *)arg1 ;
-(NSString *)linkColor;
-(void)setLinkColor:(NSString *)arg1 ;
-(NSString *)vlinkColor;
-(void)setVlinkColor:(NSString *)arg1 ;
-(void)writeln:(id)arg1 ;
-(void)captureEvents;
-(void)releaseEvents;
@end

