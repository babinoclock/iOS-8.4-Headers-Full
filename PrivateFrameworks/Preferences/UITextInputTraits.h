/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextInputTraits <NSObject>
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@optional
-(int)keyboardAppearance;
-(void)setSecureTextEntry:(char)arg1;
-(char)isSecureTextEntry;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1;
-(void)setKeyboardAppearance:(int)arg1;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1;
-(char)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(char)arg1;

@end

