/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKDOMNode.h>
#import <ITMLKit/IKJDOMParsingElement.h>
#import <ITMLKit/IKJSDOMElement.h>
#import <ITMLKit/IKJSDOMParentNode.h>

@class NSString, IKDOMHTMLCollection;

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKJSDOMElement, IKJSDOMParentNode>

@property (nonatomic,retain) NSString * innerHTML; 
@property (nonatomic,retain) NSString * outerHTML; 
@property (nonatomic,retain,readonly) NSString * tagName; 
@property (nonatomic,readonly) IKDOMHTMLCollection * children; 
@property (nonatomic,readonly) IKDOMElement * firstElementChild; 
@property (nonatomic,readonly) IKDOMElement * lastElementChild; 
@property (nonatomic,readonly) unsigned long childElementCount; 
-(void)setInnerHTML:(NSString *)arg1 ;
-(NSString *)innerHTML;
-(NSString *)tagName;
-(id)getAttribute:(id)arg1 ;
-(id)getElementsByTagName:(id)arg1 ;
-(IKDOMElement *)firstElementChild;
-(int)nodeType;
-(id)attributes;
-(id)childElements;
-(void)setAttributeValue:(id)arg1 withName:(id)arg2 ;
-(id)childElementByTagName:(id)arg1 ;
-(void)insertAdjacentHTML:(id)arg1 :(id)arg2 ;
-(id)childElementsByTagName:(id)arg1 ;
-(id)nodeName;
-(IKDOMElement *)lastElementChild;
-(unsigned long)childElementCount;
-(void)setAttribute:(id)arg1 :(id)arg2 ;
-(void)removeAttribute:(id)arg1 ;
-(char)hasAttribute:(id)arg1 ;
-(NSString *)outerHTML;
-(void)setOuterHTML:(NSString *)arg1 ;
-(IKDOMHTMLCollection *)children;
-(id)textContent;
-(void)setTextContent:(id)arg1 ;
@end

