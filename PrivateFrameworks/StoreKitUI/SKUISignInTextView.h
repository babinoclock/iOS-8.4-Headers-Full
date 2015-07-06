/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextField.h>
#import <UIKit/UITextInputTraits.h>

@class NSString;

@interface SKUISignInTextView : UITextField <UITextInputTraits> {

	int _keyboardType;

}

@property (assign,nonatomic) int keyboardType;                                           //@synthesize keyboardType=_keyboardType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(int)autocapitalizationType;
-(int)autocorrectionType;
-(int)spellCheckingType;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(int)returnKeyType;
@end

