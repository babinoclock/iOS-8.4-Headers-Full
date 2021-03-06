/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSManager;

@interface CKDNDList : NSObject {

	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)sharedList;
-(void)dealloc;
-(id)init;
-(void)performMigrationIfNecessary;
-(id)unmuteDateForChat:(id)arg1 ;
-(id)unmuteDateForIdentifier:(id)arg1 ;
-(id)globalIdentifierForChat:(id)arg1 ;
-(id)currentList;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 ;
-(char)isMutedChat:(id)arg1 ;
-(char)isMutedChatIdentifier:(id)arg1 ;
-(void)_handleDNDListChanged;
-(NPSManager *)syncManager;
@end

