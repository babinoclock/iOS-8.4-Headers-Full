/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@class BRCServerZone, NSString;

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {

	BRCServerZone* _serverZone;
	char _hasCaughtUp;
	char _isConsistent;

}

@property (nonatomic,readonly) char isConsistent;                   //@synthesize isConsistent=_isConsistent - In the implementation block
@property (nonatomic,readonly) char hasCaughtUp;                    //@synthesize hasCaughtUp=_hasCaughtUp - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)shouldRetryForError:(id)arg1 ;
-(id)initWithServerZone:(id)arg1 ;
-(char)hasCaughtUp;
-(char)isConsistent;
-(void)_performAfterFetchingXattrsForRecordIDs:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_performAfterFetchingOwnerIdentityForShareID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_learnOwnerIdentity:(id)arg1 ;
-(void)_performAfterFetchingRecordChanges:(/*^block*/id)arg1 ;
@end

