/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMDocument, NSArray;

@interface WKDOMNode : NSObject {

	RefPtr<WebCore::Node>* _impl;

}

@property (readonly) WKDOMDocument * document; 
@property (readonly) WKDOMNode * parentNode; 
@property (readonly) WKDOMNode * firstChild; 
@property (readonly) WKDOMNode * lastChild; 
@property (readonly) WKDOMNode * previousSibling; 
@property (readonly) WKDOMNode * nextSibling; 
@property (readonly) NSArray * textRects; 
-(void)dealloc;
-(WKDOMNode *)lastChild;
-(WKDOMNode *)firstChild;
-(WKDOMNode *)parentNode;
-(WKDOMNode *)previousSibling;
-(void)removeChild:(id)arg1 ;
-(WKDOMDocument *)document;
-(WKDOMNode *)nextSibling;
-(id)_initWithImpl:(Node*)arg1 ;
-(void)insertNode:(id)arg1 before:(id)arg2 ;
-(OpaqueWKBundleNodeHandleRef)_copyBundleNodeHandleRef;
-(NSArray *)textRects;
-(void)appendChild:(id)arg1 ;
@end

