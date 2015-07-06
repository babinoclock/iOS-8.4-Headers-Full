/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLTableRowElement : DOMHTMLElement

@property (readonly) int rowIndex; 
@property (readonly) int sectionRowIndex; 
@property (readonly) DOMHTMLCollection * cells; 
@property (copy) NSString * align; 
@property (copy) NSString * bgColor; 
@property (copy) NSString * ch; 
@property (copy) NSString * chOff; 
@property (copy) NSString * vAlign; 
-(int)rowIndex;
-(NSString *)bgColor;
-(NSString *)align;
-(void)setAlign:(NSString *)arg1 ;
-(void)setBgColor:(NSString *)arg1 ;
-(NSString *)ch;
-(void)setCh:(NSString *)arg1 ;
-(NSString *)chOff;
-(void)setChOff:(NSString *)arg1 ;
-(NSString *)vAlign;
-(void)setVAlign:(NSString *)arg1 ;
-(int)sectionRowIndex;
-(DOMHTMLCollection *)cells;
-(id)insertCell:(int)arg1 ;
-(void)deleteCell:(int)arg1 ;
@end

