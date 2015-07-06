/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@protocol UIFoundationGlobalUserDefaultsHelper;
@class NSMutableDictionary;

@interface _UIGlobalUserDefaults : NSUserDefaults {

	id<UIFoundationGlobalUserDefaultsHelper> _userDefaultsHelper;
	NSMutableDictionary* _userDefaultsDictionary;
	unsigned _backgroundTaskIdentifier;

}

@property (nonatomic,retain) id<UIFoundationGlobalUserDefaultsHelper> userDefaultsHelper;              //@synthesize userDefaultsHelper=_userDefaultsHelper - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userDefaultsDictionary;                             //@synthesize userDefaultsDictionary=_userDefaultsDictionary - In the implementation block
@property (assign,nonatomic) unsigned backgroundTaskIdentifier;                                        //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
-(void)dealloc;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(char)synchronize;
-(void)setBackgroundTaskIdentifier:(unsigned)arg1 ;
-(unsigned)backgroundTaskIdentifier;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_synchronizeIfNeeded;
-(void)setUserDefaultsHelper:(id<UIFoundationGlobalUserDefaultsHelper>)arg1 ;
-(void)setUserDefaultsDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userDefaultsDictionary;
-(void)loadDefaultsDictionaryIfNeeded;
-(void)_scheduleSynchronization;
-(id)_userDefaultsHelperCreateIfNeeded;
-(void)loadDefaultsDictionary;
-(id<UIFoundationGlobalUserDefaultsHelper>)userDefaultsHelper;
@end

