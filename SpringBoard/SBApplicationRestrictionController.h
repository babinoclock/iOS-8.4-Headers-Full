/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/MCProfileConnectionObserver.h>

@protocol SBApplicationRestrictionDataSource, SBApplicationRestrictionControllerDelegate;
@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface SBApplicationRestrictionController : NSObject <MCProfileConnectionObserver> {

	id<SBApplicationRestrictionDataSource> _dataSource;
	NSHashTable* _observers;
	NSMutableDictionary* _tagValidityMap;
	NSMutableDictionary* _validTagsByIdentifier;
	MGNotificationTokenStructRef _tagsNotificationToken;
	NSMutableSet* _enabledTags;
	NSMutableDictionary* _ratingRanksByIdentifier;
	char _hasSMSCapability;
	NSSet* _restrictedIdentifiers;
	char _showInternalApps;
	char _hasHideNonDefaultSystemAppsCapability;
	char _showAllSystemApps;
	char _canPostRestrictionState;
	id<SBApplicationRestrictionControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBApplicationRestrictionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginPostingChanges;
-(void)updateVisibilityPreferences;
-(char)isApplicationIdentifierRestricted:(id)arg1 ;
-(void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)noteVisibilityStateDidChange;
-(void)_postRestrictionStateToObservers:(id)arg1 ;
-(void)_postRestrictionState;
-(void)_updateRestrictionsAndForcePost:(char)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<SBApplicationRestrictionControllerDelegate>)arg1 ;
-(id)init;
-(id<SBApplicationRestrictionControllerDelegate>)delegate;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)updateRestrictions;
@end

