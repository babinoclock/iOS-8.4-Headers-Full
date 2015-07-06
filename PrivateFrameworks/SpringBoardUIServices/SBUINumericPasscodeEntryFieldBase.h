/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {

	NSMutableCharacterSet* _numericTrimmingSet;
	unsigned _maxNumbersAllowed;
	char _allowsNewlineAcceptance;
	char _autoAcceptWhenMaxNumbersMet;

}

@property (assign,nonatomic) unsigned maxNumbersAllowed;                    //@synthesize maxNumbersAllowed=_maxNumbersAllowed - In the implementation block
@property (assign,nonatomic) char allowsNewlineAcceptance;                  //@synthesize allowsNewlineAcceptance=_allowsNewlineAcceptance - In the implementation block
@property (assign,nonatomic) char autoAcceptWhenMaxNumbersMet;              //@synthesize autoAcceptWhenMaxNumbersMet=_autoAcceptWhenMaxNumbersMet - In the implementation block
-(void)dealloc;
-(char)resignFirstResponder;
-(id)initWithDefaultSizeAndLightStyle:(char)arg1 ;
-(void)setMaxNumbersAllowed:(unsigned)arg1 ;
-(void)_appendString:(id)arg1 ;
-(void)_deleteLastCharacter;
-(void)setAllowsNewlineAcceptance:(char)arg1 ;
-(void)setAutoAcceptWhenMaxNumbersMet:(char)arg1 ;
-(char)shouldInsertPasscodeText:(id)arg1 ;
-(char)_hasMaxDigitsSpecified;
-(void)_reallyAppendString:(id)arg1 ;
-(char)allowsNewlineAcceptance;
-(unsigned)maxNumbersAllowed;
-(char)autoAcceptWhenMaxNumbersMet;
@end

