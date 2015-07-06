/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBulletinObserverViewController.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface SBNotificationsModeViewController : SBBulletinObserverViewController {

	struct {
		unsigned suppliesInsertionAnimation : 1;
		unsigned suppliesRemovalAnimation : 1;
		unsigned suppliesReplacementAnimation : 1;
		unsigned handlesBulletinActions : 1;
	}  _notificationsModeViewControllerDelegateFlags;
	NSMutableArray* _orderedSectionIDs;
	NSMutableDictionary* _sectionIDsToOrderedBulletins;

}

@property (assign,nonatomic) id<SBBulletinViewControllerDelegate><SBBulletinActionHandler> delegate; 
@property (nonatomic,readonly) NSArray * orderedSectionIDs; 
@property (nonatomic,readonly) NSMutableDictionary * sectionIDsToOrderedBulletins; 
-(char)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned)arg4 ;
-(void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3 ;
-(void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)commitRemovalOfSection:(id)arg1 ;
-(void)updateSection:(id)arg1 withInfo:(id)arg2 ;
-(void)updateSection:(id)arg1 withParameters:(id)arg2 ;
-(int)bulletinViewController:(id)arg1 insertionAnimationForBulletin:(id)arg2 inSection:(id)arg3 ;
-(int)bulletinViewController:(id)arg1 removalAnimationForBulletin:(id)arg2 inSection:(id)arg3 ;
-(int)bulletinViewController:(id)arg1 replacementAnimationForBulletin:(id)arg2 inSection:(id)arg3 ;
-(id)initWithObserverFeed:(unsigned)arg1 ;
-(void)commitMoveOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitReplacementWithSection:(id)arg1 ofSection:(id)arg2 ;
-(void)commitMoveOfBulletin:(id)arg1 inSection:(id)arg2 beforeBulletin:(id)arg3 inSection:(id)arg4 ;
-(void)populateBulletinInfo:(id)arg1 inSection:(id)arg2 ;
-(void)updateForChangeInMessagePrivacy;
-(void)_sortSectionIDs;
-(void)_sortBulletins:(id)arg1 forSection:(id)arg2 ;
-(void)_updateSectionOrderForOperationInSection:(id)arg1 ;
-(void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withProcessingBlock:(/*^block*/id)arg2 ;
-(void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withLockState:(char)arg2 updatedSubsectionIDs:(id)arg3 ;
-(void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)arg1 ;
-(void)_updateSectionForChangeInNumberOfLines:(id)arg1 ;
-(void)_updateSection:(id)arg1 withLockState:(char)arg2 ;
-(NSArray *)orderedSectionIDs;
-(NSMutableDictionary *)sectionIDsToOrderedBulletins;
-(id)infoForBulletinInfo:(id)arg1 inSection:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<SBBulletinViewControllerDelegate><SBBulletinActionHandler>)arg1 ;
-(void)hostWillPresent;
@end

