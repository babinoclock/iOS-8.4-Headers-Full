/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/TextInput_bo.bundle/TextInput_bo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_bo/TextInput_bo-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_bo : TIKeyboardInputManagerZephyr {

	BOOL _sawHalanta;

}
-(id)replacementForDoubleSpace;
-(TIInputManagerZephyr*)initImplementation;
-(char)doesComposeText;
-(id)internalStringToExternal:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)nonstopPunctuationCharacters;
-(char)shouldAddModifierSymbolsToWordCharacters;
@end

