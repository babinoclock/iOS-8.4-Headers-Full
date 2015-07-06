/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TextInput/TextInput-Structs.h>
@class NSTimer;

@interface TIPreferencesController : NSObject {

	NSTimer* _synchronizePreferencesTimer;
	char dontSynchronizePreferences;
	char isInternalInstall;

}

@property (assign,nonatomic) char dontSynchronizePreferences; 
@property (assign,nonatomic) char isInternalInstall; 
+(id)sharedPreferencesController;
-(char)boolForKey:(int)arg1 ;
-(id)valueForKey:(int)arg1 ;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setAutocorrectionEnabled:(char)arg1 ;
-(SCD_Struct_TI13*)preferences;
-(char)isKeyLockedDown:(int)arg1 ;
-(void)synchronizePreferences;
-(void)releaseDontSynchronizePreferences;
-(void)touchSynchronizePreferencesTimer;
-(void)setIsInternalInstall:(char)arg1 ;
-(SCD_Struct_TI14*)domains;
-(char)dontSynchronizePreferences;
-(void)managedKeyboardSettingDidChange:(id)arg1 ;
-(id)valueForManagedKey:(int)arg1 ;
-(id)defaultForKey:(int)arg1 ;
-(SCD_Struct_TI14*)domainForType:(int)arg1 ;
-(void)setDontSynchronizePreferences:(char)arg1 ;
-(void)clearSynchronizePreferencesTimer;
-(void)setValue:(id)arg1 forManagedKey:(int)arg2 ;
-(void)setPredictionEnabled:(char)arg1 ;
-(void)setCheckSpellingEnabled:(char)arg1 ;
-(void)preferencesChangedCallback:(id)arg1 ;
-(char)isInternalInstall;
@end

