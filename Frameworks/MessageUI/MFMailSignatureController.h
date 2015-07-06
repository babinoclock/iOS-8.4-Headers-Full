/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSString;

@interface MFMailSignatureController : NSObject {

	NSString* _currentSignatureString;
	char _hasSignature;
	char _firstSignaturePassComplete;

}
+(id)_htmlConvertToWhitespace:(id)arg1 ;
+(id)_regexEscape:(id)arg1 ;
+(id)_wordsAndNewlinesArrayFromContents:(id)arg1 ;
+(id)_arrayNOT:(id)arg1 notArray:(id)arg2 ;
+(id)_regexStringFromArray:(id)arg1 ;
+(id)_lineWiseRegexStringForSignature:(id)arg1 usingContentWords:(id)arg2 ;
-(void)clearSignatureState;
-(void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(char)arg3 ;
-(void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(char)isDefaultSignatureForSender:(id)arg1 ;
-(void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(id)_signatureStringForSender:(id)arg1 ;
-(id)_domDocumentForComposeBodyField:(id)arg1 ;
-(id)_createSignatureForSender:(id)arg1 document:(id)arg2 prepend:(char)arg3 node:(id)arg4 usingMarkup:(char)arg5 ;
-(id)_signatureMarkupStringForSender:(id)arg1 ;
-(id)_createSignatureElement:(id)arg1 prepend:(char)arg2 node:(id)arg3 ;
-(id)_regexForSignature:(id)arg1 ;
-(NSRange)_locateLeadingMarkupForContents:(id)arg1 withRange:(NSRange)arg2 ;
-(NSRange)_locateTrailingMarkupForContents:(id)arg1 withRange:(NSRange)arg2 ;
-(NSRange)_preciseSearchForSignature:(id)arg1 inContents:(id)arg2 ;
-(NSRange)_preciseSearchForSignatureForSender:(id)arg1 inContents:(id)arg2 ;
-(NSRange)_fuzzySearchForSignature:(id)arg1 inContents:(id)arg2 ;
-(NSRange)_preciseSearchForDefaultSignatureInContents:(id)arg1 ;
-(char)_isEmptyHTMLElement:(id)arg1 ;
-(NSRange)_locateSignatureForSender:(id)arg1 oldSignature:(id)arg2 withSignature:(id)arg3 inContents:(id)arg4 ;
-(id)_updateSignatureElement:(id)arg1 withSignature:(id)arg2 inRange:(NSRange)arg3 ;
-(char)_isDraftRestore:(id)arg1 ;
-(NSRange)_replaceSignatureForSender:(id)arg1 oldSignature:(id)arg2 withSignature:(id)arg3 document:(id)arg4 backwardsFromNode:(id)arg5 maxParagraphs:(unsigned)arg6 ;
-(id)_prependSignatureForSender:(id)arg1 document:(id)arg2 node:(id)arg3 includeMarkup:(char)arg4 ;
-(void)dealloc;
-(id)init;
@end

