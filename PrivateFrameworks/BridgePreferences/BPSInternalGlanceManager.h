/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BridgePreferences/NGSSettingsManagerDelegate.h>

@class NGSSettingsManager, NSHashTable, NSString;

@interface BPSInternalGlanceManager : NSObject <NGSSettingsManagerDelegate> {

	char _settingsAreValid;
	NGSSettingsManager* _glanceManager;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NGSSettingsManager * glanceManager;              //@synthesize glanceManager=_glanceManager - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                           //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) char settingsAreValid;                             //@synthesize settingsAreValid=_settingsAreValid - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGlanceManager;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(void)_loadSettings;
-(void)loadSettingsIfNeeded;
-(void)settingsManagerReloadedGlances:(id)arg1 ;
-(NGSSettingsManager *)glanceManager;
-(char)settingsAreValid;
-(void)setSettingsAreValid:(char)arg1 ;
-(void)invalidateSettings;
@end

