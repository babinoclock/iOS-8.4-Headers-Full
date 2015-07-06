/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMStyleSheet, NSURL;

@interface DOMHTMLLinkElement : DOMHTMLElement

@property (assign) char disabled; 
@property (copy) NSString * charset; 
@property (copy) NSString * href; 
@property (copy) NSString * hreflang; 
@property (copy) NSString * media; 
@property (copy) NSString * rel; 
@property (copy) NSString * rev; 
@property (copy) NSString * target; 
@property (copy) NSString * type; 
@property (readonly) DOMStyleSheet * sheet; 
@property (copy,readonly) NSURL * absoluteLinkURL; 
-(void)setTarget:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)target;
-(NSURL *)absoluteLinkURL;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)rel;
-(void)setRel:(NSString *)arg1 ;
-(char)_mediaQueryMatchesForOrientation:(int)arg1 ;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(char)_mediaQueryMatches;
-(NSString *)media;
-(NSString *)charset;
-(void)setCharset:(NSString *)arg1 ;
-(NSString *)hreflang;
-(void)setHreflang:(NSString *)arg1 ;
-(NSString *)rev;
-(void)setRev:(NSString *)arg1 ;
-(void)setMedia:(NSString *)arg1 ;
-(DOMStyleSheet *)sheet;
@end

