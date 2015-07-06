/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManagerChineseMecabra.h>

@interface TIKeyboardInputManagerTraditionalZhuyin : TIKeyboardInputManagerChineseMecabra {

	char _isDynamic;
	char _assertDefaultKeyPlane;

}
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(unsigned)initialSelectedIndex;
-(char)supportsNumberKeySelection;
-(char)acceptInputString:(id)arg1 ;
-(id)keyEventMap;
-(char)shouldSearchCompletionForSubstrings;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(char)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
-(id)phoneticSortingMethod;
-(int)inputMethodType;
-(char)shouldInsertFirstToneMark;
-(TIInputManagerZephyr*)initImplementation;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(char)arg2 ;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(id)inputsToReject;
-(void)syncToLayoutState:(id)arg1 ;
-(id)keyboardConfigurationLayoutTag;
-(char)keyboardConfigurationAssertDefaultKeyPlane;
-(id)didAcceptCandidate:(id)arg1 ;
@end
