/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMCSSRule.h>

@class NSString, DOMCSSRuleList;

@interface DOMWebKitCSSKeyframesRule : DOMCSSRule

@property (copy) NSString * name; 
@property (readonly) DOMCSSRuleList * cssRules; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(DOMCSSRuleList *)cssRules;
-(void)deleteRule:(id)arg1 ;
-(void)insertRule:(id)arg1 ;
-(id)findRule:(id)arg1 ;
@end

