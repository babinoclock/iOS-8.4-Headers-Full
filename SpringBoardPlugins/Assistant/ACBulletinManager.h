/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Assistant/Assistant-Structs.h>
#import <Assistant/BBObserverDelegate.h>

@protocol ACBulletinManagerDelegate;
@class BBObserver, NSMutableDictionary, NSString;

@interface ACBulletinManager : NSObject <BBObserverDelegate> {

	BBObserver* _observer;
	NSMutableDictionary* _currentBulletins;
	id<ACBulletinManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ACBulletinManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<ACBulletinManagerDelegate>)arg1 ;
-(id)init;
-(id<ACBulletinManagerDelegate>)delegate;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)_setupObserver;
-(void)_bulletinsDidChange;
-(id)_displayNameForSectionID:(id)arg1 ;
-(id)currentBulletins;
-(id)bulletinForIdentifier:(id)arg1 ;
-(void)markBulletinWithIdentifier:(id)arg1 asRead:(char)arg2 ;
@end
