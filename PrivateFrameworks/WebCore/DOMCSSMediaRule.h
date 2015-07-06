/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMCSSRule.h>

@class DOMMediaList, DOMCSSRuleList;

@interface DOMCSSMediaRule : DOMCSSRule

@property (readonly) DOMMediaList * media; 
@property (readonly) DOMCSSRuleList * cssRules; 
-(DOMMediaList *)media;
-(DOMCSSRuleList *)cssRules;
-(unsigned)insertRule:(id)arg1 index:(unsigned)arg2 ;
-(unsigned)insertRule:(id)arg1 :(unsigned)arg2 ;
-(void)deleteRule:(unsigned)arg1 ;
@end

