/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CKModifySharesOperation : CKDatabaseOperation {

	NSArray* _sharesToSave;
	NSArray* _shareIDsToDelete;
	/*^block*/id _modifySharesCompletionBlock;
	NSMutableDictionary* _savedSharesByShareID;
	NSMutableArray* _deletedShareIDs;
	NSMutableDictionary* _sharesByShareID;
	NSMutableDictionary* _shareErrorsByShareID;

}

@property (nonatomic,readonly) NSArray * sharesToSave;                                //@synthesize sharesToSave=_sharesToSave - In the implementation block
@property (nonatomic,readonly) NSArray * shareIDsToDelete;                            //@synthesize shareIDsToDelete=_shareIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifySharesCompletionBlock;                            //@synthesize modifySharesCompletionBlock=_modifySharesCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * savedSharesByShareID;              //@synthesize savedSharesByShareID=_savedSharesByShareID - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedShareIDs;                        //@synthesize deletedShareIDs=_deletedShareIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sharesByShareID;                   //@synthesize sharesByShareID=_sharesByShareID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareErrorsByShareID;              //@synthesize shareErrorsByShareID=_shareErrorsByShareID - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)sharesByShareID;
-(NSMutableDictionary *)shareErrorsByShareID;
-(NSMutableDictionary *)savedSharesByShareID;
-(id)modifySharesCompletionBlock;
-(void)setSavedSharesByShareID:(NSMutableDictionary *)arg1 ;
-(void)setSharesByShareID:(NSMutableDictionary *)arg1 ;
-(void)setShareErrorsByShareID:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSMutableArray *)deletedShareIDs;
-(id)initWithSharesToSave:(id)arg1 shareIDsToDelete:(id)arg2 ;
-(void)setModifySharesCompletionBlock:(id)arg1 ;
-(void)setDeletedShareIDs:(NSMutableArray *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)sharesToSave;
-(NSArray *)shareIDsToDelete;
@end

