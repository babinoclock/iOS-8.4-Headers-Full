/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMHTMLFormElement, DOMValidityState, DOMNodeList;

@interface DOMHTMLKeygenElement : DOMHTMLElement

@property (assign) char autofocus; 
@property (copy) NSString * challenge; 
@property (assign) char disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * keytype; 
@property (copy) NSString * name; 
@property (copy,readonly) NSString * type; 
@property (readonly) char willValidate; 
@property (readonly) DOMValidityState * validity; 
@property (copy,readonly) NSString * validationMessage; 
@property (readonly) DOMNodeList * labels; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(DOMHTMLFormElement *)form;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(char)autofocus;
-(void)setAutofocus:(char)arg1 ;
-(char)willValidate;
-(DOMValidityState *)validity;
-(NSString *)validationMessage;
-(DOMNodeList *)labels;
-(char)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(NSString *)challenge;
-(void)setChallenge:(NSString *)arg1 ;
-(NSString *)keytype;
-(void)setKeytype:(NSString *)arg1 ;
@end

