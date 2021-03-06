/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFUIPreferencesDelegate;
@class NSUserDefaults;

@interface AFUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	id<AFUIPreferencesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUIPreferencesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(char)boolForKey:(id)arg1 ;
-(void)setDelegate:(id<AFUIPreferencesDelegate>)arg1 ;
-(id)init;
-(id<AFUIPreferencesDelegate>)delegate;
-(void)synchronize;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(int)integerForKey:(id)arg1 ;
-(id)initWithDefaultsAtURL:(id)arg1 ;
-(void)_mutateValueForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDefaultsResource:(id)arg1 withExtension:(id)arg2 inBundle:(id)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

