/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSFormAutoFillNode.h>

@class DOMNode, NSString;

@interface WBUFormAutoFillNode : NSObject <WBSFormAutoFillNode> {

	DOMNode* _domNode;

}

@property (nonatomic,readonly) DOMNode * domNode;                   //@synthesize domNode=_domNode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillNodeWithDOMNode:(id)arg1 ;
-(id)initWithDOMNode:(id)arg1 ;
-(CGRect)elementBounds;
-(DOMNode *)domNode;
-(char)isHTMLInputElementAutofilled;
-(id)initWithJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)setHTMLInputElementAutofilled:(char)arg1 ;
-(char)isHTMLInputElementUserEdited;
-(char)isHTMLTextAreaElementUserEdited;
-(id)htmlTableCellElementCellAbove;
@end

